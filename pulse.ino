void pulseBRC(int pin) {
  int i = 0;
  const int count = 10;
  
  for (i=0; i < count; i++) {
    digitalWrite(baudPin, LOW); 
    delay(1000);
    digitalWrite(baudPin, HIGH);
  }
}
