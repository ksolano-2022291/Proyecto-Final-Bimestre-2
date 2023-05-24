/* 
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Perito en electonica
 * Quinto perito
 * EB5AV
 * Taller de electronica digital y reparacion de computadoras
 * Nombre: Kevin Audiel Solano Torres
 * Fecha: 25 DE Mayo
 * Proyecto: Secuencia Led's Neopixel
 */
#include <Adafruit_NeoPixel.h>
#include <Wire.h>    
#include <LiquidCrystal_I2C.h>
#define Cantidad_Leds 7
#define pin_Led 2
#define botton 3
#define botton1 4
#define botton2 5
#define botton3 6
#define botton4 7

Adafruit_NeoPixel anillo(Cantidad_Leds,pin_Led, NEO_GRB + NEO_KHZ800);
LiquidCrystal_I2C LCDKEVIN(0x27,16,2);

void setup()
{
  LCDKEVIN.begin(16,2); 
  anillo.begin();
  pinMode(botton,OUTPUT);
  pinMode(botton1,OUTPUT);
  pinMode(botton2,OUTPUT);
  pinMode(botton3,OUTPUT);
  pinMode(botton4,OUTPUT);
  LCDKEVIN.init();
  LCDKEVIN.backlight();
  LCDKEVIN.setCursor(0,0);
  LCDKEVIN.print("Proyecto Final");
  delay(100);
  LCDKEVIN.setCursor(0,1);
  LCDKEVIN.print("NeoPixel"); 
  
}

void loop()
{
  
  if(digitalRead(botton)==HIGH) {
   LCDKEVIN.clear(); 
   LCDKEVIN.setCursor(0,0);
   LCDKEVIN.print("Secuencia NO.1:");
   delay(100);
   LCDKEVIN.setCursor(0,1);
   LCDKEVIN.print("Ascendente");   
  for(int i =0; i<8;i++)
  {
    anillo.setPixelColor(i,anillo.Color(255,0,0));
    anillo.show();  
    delay(250);
  } 
    anillo.clear();
  }
  
  
  if(digitalRead(botton1)==HIGH) {
   LCDKEVIN.clear(); 
   LCDKEVIN.setCursor(0,0);
   LCDKEVIN.print("Secuencia NO.2:");
   delay(100);
   LCDKEVIN.setCursor(0,1);
   LCDKEVIN.print("Descendente"); 
    
  for(int i =7; i>=0;i--)
  {
    anillo.setPixelColor(i,anillo.Color(0,0,255));
    anillo.show();  
    delay(250);
  } 
    anillo.clear();
  }
  
  if(digitalRead(botton2)==HIGH) { 
   LCDKEVIN.setCursor(0,0);
   LCDKEVIN.print("Secuencia NO.3:");
   LCDKEVIN.setCursor(0,1);
   LCDKEVIN.print("Autofantastico"); 
    
  for(int i =0; i<=8;i++)
  {
    anillo.setPixelColor(i,anillo.Color(0,255,0));
    anillo.show();  
    delay(140);
  } 
    anillo.clear();

   LCDKEVIN.setCursor(0,0);
   LCDKEVIN.print("Secuencia NO.3:");
   LCDKEVIN.setCursor(0,1);
   LCDKEVIN.print("Autofantastico"); 
    
 for(int i =7; i>=0;i--)
  {
    anillo.setPixelColor(i,anillo.Color(0,255,0));
    anillo.show();  
    delay(120);
  } 
    anillo.clear();    
 
  }
  
   if(digitalRead(botton3)==HIGH) { 
   LCDKEVIN.setCursor(0,0);
   LCDKEVIN.print("Secuencia NO.4:");
   LCDKEVIN.setCursor(0,1);
   LCDKEVIN.print("alternancia"); 


    
   for(int i =0; i<8;i++)
   {
    anillo.setPixelColor(i,anillo.Color(255, 150, 0));
    anillo.show();  
    delay(250);
    anillo.clear();
    anillo.show();
    delay(250);   
   }
 
    anillo.clear();
    delay(600);
     
   }
   if(digitalRead(botton4)==HIGH) { 
   LCDKEVIN.setCursor(0,0);
   LCDKEVIN.print("Secuencia NO.5:");
   LCDKEVIN.setCursor(0,1);
   LCDKEVIN.print("creatividad"); 

    for(int i =0; i<8;i++)
  {
    anillo.setPixelColor(i,anillo.Color(0, 255, 255));
    anillo.show();  
    delay(250);
   
  }
    anillo.clear();
    delay(500);

   
   for(int i =0; i<8;i++)
   {
    anillo.setPixelColor(i,anillo.Color(0, 0, 255));
    anillo.show();  
    delay(250);
    anillo.clear();
    anillo.show();
    delay(250);  
     
   
   }
   for(int i =0; i<8;i++)
  {
    anillo.setPixelColor(i,anillo.Color(180, 0, 255));
    anillo.show();  
    delay(24);
   
  }
    anillo.clear();
    delay(600);
     {
       for(int i =0; i<8;i++)
  {
    anillo.setPixelColor(i,anillo.Color(0, 255, 0));
    anillo.show();  
    delay(24);
   
  }
    anillo.clear();
    delay(600);
     }
     for(int i =0; i<8;i++)
  {
    anillo.setPixelColor(i,anillo.Color(255, 0, 0));
    anillo.show();  
    delay(24);
   
  }
    anillo.clear();
    delay(600);
   }
}
