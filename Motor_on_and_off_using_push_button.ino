int button = 2;
int en1 = 10;
int en2 = 11;
int pin1 = 9;
int pin2 = 6;
int pin3 = 5;
int pin4 = 3;
int value;
int initial = LOW;
int flag=LOW;

void setup() 
{
  Serial.begin(9600);
  digitalWrite(en1,HIGH);
  digitalWrite(en2,HIGH);
  pinMode(en1,OUTPUT);
  pinMode(en2,OUTPUT);
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
}

void loop() 
{
  value = digitalRead(button);

   while(initial==LOW)
  {
    if(value==HIGH)
    while(value==LOW)
    {
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,LOW);
      digitalWrite(pin4,LOW);
    }
    if(value==HIGH)
    {
      break;
    }
  }
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
}
