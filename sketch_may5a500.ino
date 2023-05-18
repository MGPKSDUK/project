#include <Servo.h>
Servo m;
void setup() {
  // put your setup code here, to run once:
 m.attach(10);
 Serial.begin(9600);
 pinMode(5,INPUT);
 pinMode(8,INPUT);
pinMode(4,OUTPUT);

}
int n=0;
int b=0;
void loop() {
  // put your main code here, to run repeatedly:
  int x=digitalRead(5);
  Serial.println(x);
  Serial.println("Enter:");
  
  Serial.println(n);
  if((x == 0) && (n == 0)){
 for(int i = 0;i<=120;i=i+15){
   m.write(i);
   delay(500);
   
 }
 n++;
  }
 else if((x != 0) && (n == 1)){
 for(int i = 120;i>=0;i=i-15){
   m.write(i);
   delay(500);
   
 }
  n--;
 }
 delay(1000);
 int a=digitalRead(8);
Serial.println(x);
if(a == 0){
b+=1;
digitalWrite(4,HIGH);
}
if(b%2 == 0){
digitalWrite(4,LOW);

}
delay(2000);
}