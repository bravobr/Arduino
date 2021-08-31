// Projeto Interruptor de luz, com 2 botoes
// Ricardo Klava

int botao1 = 7;
int botao2 = 8;
int led = 13;
bool estadoLed = 0; // estado do led inicia como apagado

void setup() {
  // put your setup code here, to run once:
  pinMode(botao1, INPUT_PULLUP); // define o pino do botão como entrada INPUT
  pinMode(botao2, INPUT_PULLUP); // define o pino do botão como entrada INPUT
  pinMode(led, OUTPUT);  // define o led como saída OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(botao1) == LOW) // Se o botão for pressionado
  {
    estadoLed = 1; // inverte o estado do led
    digitalWrite(led, estadoLed);
  }
  if(digitalRead(botao2) == LOW) // Se o botão for pressionado
  {
    estadoLed = 0; // inverte o estado do led
    digitalWrite(led, estadoLed);
  }
}
