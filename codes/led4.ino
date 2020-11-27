//Que 1: Write a Program in Arduino IDE using User Defined Function in which
//      - We use 4 LED and make 2 function; each function will operate two LED.


int led[]={7,6,5,4};
int i;
void setup()
{
  for(i=0;i<4;i++){
  pinMode(led[i],HIGH);
  } } 
 void loop()
{  fun1();
  fun2();
}
int fun1()
{
  int i=0;
digitalWrite(led[i],HIGH);
    digitalWrite(led[i+1],HIGH);
  delay(2000);
    digitalWrite(led[i],LOW);
    digitalWrite(led[i+1],LOW);
  }
int fun2()
  {  int i=2;
digitalWrite(led[i],HIGH);
  digitalWrite(led[i+1],HIGH);
    delay(2000);
    digitalWrite(led[i],LOW);
  digitalWrite(led[i+1],LOW);
}
