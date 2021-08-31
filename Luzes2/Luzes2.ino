// Projeto Luzes coloridas
// Ricardo Klava

int led_R = 7;
int led_G = 6;
int led_B = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_R, OUTPUT); // definindo os pinos como saida
  pinMode(led_G, OUTPUT);
  pinMode(led_B, OUTPUT);
  apagaLed();
}

void loop() {
  // put your main code here, to run repeatedly:
  acendeVermelho(); //chamadas de funções que são declaradas mais abaixo
  delay(1000);
  acendeVerde();
  delay(1000);
  acendeAzul();
  delay(1000);
  apagaLed();
  delay(1000);
  acendeRG();
  delay(1000);
  acendeGB();
  delay(1000);
  acendeBR();
  delay(1000);
  apagaLed();
  delay(1000);
  acendeBranco();
  delay(1000);
  apagaLed();
  delay(1000);
}

// declaração das funções

void acendeVermelho() {
  digitalWrite(led_R, LOW);
  digitalWrite(led_G, HIGH);
  digitalWrite(led_B, HIGH);
}

void acendeVerde() {
  digitalWrite(led_R, HIGH);
  digitalWrite(led_G, LOW);
  digitalWrite(led_B, HIGH);
}

void acendeAzul() {
  digitalWrite(led_R, HIGH);
  digitalWrite(led_G, HIGH);
  digitalWrite(led_B, LOW);
}

void acendeRG() {
  digitalWrite(led_R, LOW);
  digitalWrite(led_G, LOW);
  digitalWrite(led_B, HIGH);
}

void acendeGB() {
  digitalWrite(led_R, HIGH);
  digitalWrite(led_G, LOW);
  digitalWrite(led_B, LOW);
}

void acendeBR() {
  digitalWrite(led_R, LOW);
  digitalWrite(led_G, HIGH);
  digitalWrite(led_B, LOW);
}

void acendeBranco() {
  digitalWrite(led_R, LOW);
  digitalWrite(led_G, LOW);
  digitalWrite(led_B, LOW);
}

void apagaLed() {
  digitalWrite(led_R, HIGH);
  digitalWrite(led_G, HIGH);
  digitalWrite(led_B, HIGH);
}
