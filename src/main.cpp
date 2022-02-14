#include <Arduino.h>
#include <Wire.h>   //library pour la connection I2C


const int ptPin = A6 ;  //broche de potontiometre
int ptValeur = 0 ;      //valeur analog de potontiometre

void setup() {
  Wire.begin();         //debut ou initialisation d'utilisation
}

void loop() {
  
  ptValeur = analogRead(ptPin);  //lecture de valeur de potontiometre
  Wire.beginTransmission(9);     //commence l'envoi avec l'adresse 9 (au peripherique qui va recevoir avec l'adresse 9)
  Wire.write(ptValeur);          //envoi la valeur de potontiometre
  Wire.endTransmission();        //fin de transmission
}