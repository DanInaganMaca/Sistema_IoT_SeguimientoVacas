#include <DHT.h> 

int pinSensor = 2; 

int valorTemperatura = 0; 
int valorHumedad = 0; 

DHT dht(pinSensor, DHT11); 

void setup() {
  Serial.begin(9600); 
  dht.begin(); 
}

void loop() {
  temp = dht.readHumidity(); 
}
