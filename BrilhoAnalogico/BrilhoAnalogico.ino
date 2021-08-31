/*
  Programa: Brilho Analógico
  Autor: Ricardo KLAVA
  
*/

// the setup function runs once when you press reset or power the board
int pinoled = 11;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(pinoled, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  acendeBrilho(5);
  apagaBrilho(5);  
}

void acendeBrilho(int incremento){
  //muda o brilho pelo loop for
  for (byte value = 0; value < 255; value+=incremento){
    // controla o brilho do pino do LED
    analogWrite(pinoled, value);
    delay(50);
   }
}

void apagaBrilho(int decremento){
  //muda o brilho pelo loop for
  for (byte value = 255; value > 0; value-=decremento){
    // controla o brilho do pino do LED
    analogWrite(pinoled, value);
    delay(50);
   }
}
