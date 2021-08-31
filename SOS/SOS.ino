/*
  Programa: SOS
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
  // letra S em morse, são 3 pontos
  for(int x=0;x<3;x++) //repetição por 3 vezes
  {
    digitalWrite(11, HIGH);   // acende o led
    delay(150);               // aguarda
    digitalWrite(11, LOW);    // apaga o led
    delay(100);               // aguarda  
    }
  delay(200);

  // letra O em morse, são 3 traços
  for(int x=0;x<3;x++) //repetição por 3 vezes
  {
    digitalWrite(11, HIGH);   // acende o led
    delay(450);               // aguarda
    digitalWrite(11, LOW);    // apaga o led
    delay(150);               // aguarda  
    }
  delay(200);
  
  for(int x=0;x<3;x++) //repetição por 3 vezes
  {
    digitalWrite(11, HIGH);   // acende o led
    delay(150);               // aguarda
    digitalWrite(11, LOW);    // apaga o led
    delay(100);               // aguarda  
    }
  delay(5000);
}
