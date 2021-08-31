/*
  Programa: pisca pisca
  Autor: Ricardo KLAVA
  
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(11, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(11, HIGH);   // acende o led
  delay(50);               // aguarda
  digitalWrite(11, LOW);    // apaga o led
  delay(1000);              // aguarda
}
