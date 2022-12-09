int pinNumber1 = 13;
int pinNumber2 = 11;
int pinNumber3 = 9;
int delayH ;
int delayL = 300 ;


void setup() {
  pinMode(pinNumber1 ,OUTPUT);
  pinMode(pinNumber2 ,OUTPUT);
  pinMode(pinNumber3 ,OUTPUT);

}

void loop() {
  digitalWrite(pinNumber1,HIGH);
  delay(delayH = 500);
  digitalWrite(pinNumber1,LOW);
  delay(delayL);
  digitalWrite(pinNumber2,HIGH);
  delay(delayH = 300);
  digitalWrite(pinNumber2,LOW);
  delay(delayL);
  digitalWrite(pinNumber3,HIGH);
  delay(delayH = 200);
  digitalWrite(pinNumber3,LOW);
  delay(delayL);

}
