const int s0 = 0; 
const int s1 = 1; 
const int s2 = 2; 
const int s3 = 3; 
const int s4 = 4; 
const int l1 = 10; 
const int l2 = 11; 
const int l3 = 12; 
const int l4 = 13; 

int buttonState = 0; 
int time_delay = 1000; 

void setup() {
  // put your setup code here, to run once:
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(l3,OUTPUT);
  pinMode(l4,OUTPUT);
   
  pinMode(s0,INPUT_PULLUP);
  pinMode(s1,INPUT_PULLUP);
  pinMode(s2,INPUT_PULLUP);
  pinMode(s3,INPUT_PULLUP);
  pinMode(s4,INPUT_PULLUP); 
}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(s1) == HIGH){
      analogWrite(l1,100); 
      analogWrite(l2,100);
      analogWrite(l3,100);
      analogWrite(l4,100);
  }
  else{
      analogWrite(l1,60); 
      analogWrite(l2,60);
      analogWrite(l3,60);
      analogWrite(l4,60); 
  }
   
   delay(time_delay*3); 
      analogWrite(l1,255); 
      analogWrite(l2,255);
      analogWrite(l3,255);
      analogWrite(l4,255);
      delay(time_delay); 
}
