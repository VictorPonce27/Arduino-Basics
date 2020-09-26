void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);// turn the LED on(high level)
  delay(1000);                    //will add a delay 
  digitalWrite(LED_BUILTIN, LOW); // Turn the LED on(low leve)
  delay(1000);                    //will add a delay
}   
