#include <MFRC522.h> // includes the RFID RC522 library 
#define MAXRFIDTAGS 100 // defines the max. no. of tags allowed
//#define SS_PIN 10 // defines that SS pin or SDA pin is connected to pin D10
//#define RST_PIN 9 // reset pin is connected to D9

#include<PubSubClient.h> // A client library that provides support for MQTT

#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <HttpClient.h>  // library for posting HTTP requests
#include <SPI.h> //includes the Serial Peripheral Interface library


char ssid[] ="FKL_CUTTING"; // write your WiFi name in between double quotes
char password[] ="%%CUT$$DG@@TING"; // write your WiFi Password in between double quotes
WiFiClient client;

void setup()
{
  Serial.begin(9600);
  Serial.println();

  Serial.printf("Connecting to %s ", ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println(" connected");
}

void loop(){
     if(WiFi.status != WL_CONNECTED){
      Serial.println("Yes");
      }
      else{
        Serial.println("No");
        }
  }
