//Make a pattern of 6 LED’s using if-else as per following menu:- 
  //  a. When user gives 1 , LED’s should get blink in forward manner individually
  //  b. When user gives 2, LED’s should get blink in reverse manner individually 
  //  c. When user gives any other number, LED’s should get off together.

int led1=7;
int led2=6;
int led3=5;
int led4=4;
int led5=3;
int led6=2;
char c;
void setup(){
Serial.begin(9600); 
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
}
void loop(){

  if(Serial.available()>0){
  c=Serial.read();
  if(c=='1')
  {
    digitalWrite(led1,HIGH);
    delay(1000);
    digitalWrite(led2,HIGH);
     delay(1000);
    digitalWrite(led3,HIGH);
     delay(1000);
    digitalWrite(led4,HIGH);
     delay(1000);
    digitalWrite(led5,HIGH);
     delay(1000);
    digitalWrite(led6,HIGH);
     delay(1000);
                              }
  else if(c=='2')
  {
    digitalWrite(led6,LOW);
    delay(1000);
    digitalWrite(led5,LOW);
       delay(1000);
    digitalWrite(led4,LOW);
       delay(1000);
    digitalWrite(led3,LOW);
delay(1000);
    digitalWrite(led2,LOW);
       delay(1000);
    digitalWrite(led1,LOW);
       delay(1000);           } 
    else
    {
digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
      digitalWrite(led3,LOW); 
      digitalWrite(led4,LOW); 
      digitalWrite(led5,LOW); 
      digitalWrite(led6,LOW);  }}}
