int pin2 = 0; 
int pin3 = 0; 
int pin4 = 0;  
int pin5 = 0;  
void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT); 
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(pin2> 1){
    pin2 = 0;
    pin3++; 
    digitalWrite(2, LOW); 
    digitalWrite(3, HIGH); 
  }
  else{
    digitalWrite(2, HIGH);  
  }
  if(pin3 >1){
    pin3 = 0;
    pin4++; 
    digitalWrite(3, LOW);  
    digitalWrite(4, HIGH); 
  }
  if(pin4 > 1 ){
    pin4 = 0; 
    pin5++;   
    digitalWrite(4, LOW);  
    digitalWrite(5, HIGH); 
  }
  if(pin5 > 1 ){
    pin2 = 0; 
    pin3 = 0; 
    pin4 = 0; 
    pin5 = 0; 
    digitalWrite(5, HIGH);  
    delay(300);
    digitalWrite(5,  LOW); 
  }   
    pin2++;
    delay(300); 
}
