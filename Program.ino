#include <LiquidCrystal.h> 
#define trigger 6
#define echo 5
int buzzer =4;
 
const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
 
float time=0,distance=0;
 
void setup()
{
 lcd.begin(16,2);
 Serial.begin(9600); // Starts the serial communication
 pinMode(trigger,OUTPUT);
 pinMode(echo,INPUT);
  
 lcd.setCursor(0,0);
 lcd.print("Car Reverse");
 
 lcd.setCursor(0,1);
 lcd.print("Parking System");
 delay(1000);
 lcd.clear();
  lcd.setCursor(0,1);
 Serial.print("Go Back");
 delay(1000);
}
 
void loop()
{
 lcd.clear();
 digitalWrite(trigger,LOW);
 delayMicroseconds(2);
 digitalWrite(trigger,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigger,LOW);
 
 delayMicroseconds(2);
 
 time=pulseIn(echo,HIGH);
 distance=time*34/2000;
 float d=distance/100;
 
 lcd.clear();
  
 lcd.setCursor(1,0);
 lcd.print("Distance:");
 lcd.print(d);
 lcd.print("m");
  Serial.print("Distance :");
  Serial.println(d);
 delay(10);
 
 lcd.setCursor(4,1);
 if(d<2)
 {
  lcd.print("STOP");
   Serial.println("STOP");
  tone(buzzer,450);
  delay(5000);
  noTone(buzzer);
  delay(10);
 }
 else if(d>=2&&d<=3)
 {
  lcd.print("SLOW DOWN");
   Serial.println("SLOW DOWN");
  tone(buzzer,450);
  delay(500);
  noTone(buzzer);
  delay(500);
  
 }
 else if(d>3)
 {
  lcd.print("MOVE BACK");
   Serial.println("MOVE BACK");
  tone(buzzer,450);
  delay(1000);
  noTone(buzzer);
  delay(500);
 }
}