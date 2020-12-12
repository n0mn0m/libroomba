void setBaud(int baudPin) {
  /*
   * The roomba defaults to a baud rate of 115200bps
   * Set it to 19200 by waiting 2 seconds and pulsing
   * LOW then HIGH three times.
   */
  int i = 0;
  const int count = 3;
  
  for (i=0;i<count;i++) {
    digitalWrite(baudPin, LOW);
    delay(500);
    digitalWrite(baudPin, HIGH);
    delay(500);
  }
} 
