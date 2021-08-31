// Projeto Interruptor de luz
// Ricardo Klava

int botao = 7;
int led = 13;
bool estadoLed = 0; // estado do led inicia como apagado

void setup() {
  // put your setup code here, to run once:
  pinMode(botao, INPUT_PULLUP); // define o pino do botão como entrada INPUT
  pinMode(led, OUTPUT);  // define o led como saída OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(botao) == LOW) // Se o botão for pressionado
  {
    estadoLed = !estadoLed; // inverte o estado do led
    digitalWrite(led, estadoLed);
    while(digitalRead(botao) == LOW);
    delay(100);
  }
}
