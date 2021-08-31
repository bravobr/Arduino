// Projeto Luzes coloridas, trocadas por potenciometro
// Ricardo Klava

int led_R = 7;
int led_G = 6;
int led_B = 5;
int pot = A0;

int valorPot;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_R, OUTPUT); // definindo os pinos como saida
  pinMode(led_G, OUTPUT);
  pinMode(led_B, OUTPUT);
  apagaLed();
}

void loop() {
  // put your main code here, to run repeatedly:

  valorPot = analogRead(pot); // le o valor do potenciometro, de 0 a 1023
  if(valorPot >= 0 && valorPot <= 128) { 
    apagaLed();
  }
  if(valorPot >= 128 && valorPot <= 256) { 
    acendeVermelho();
  }
  if(valorPot >= 256 && valorPot <= 384) { 
    acendeRG();
  }
  if(valorPot >= 384 && valorPot <= 512) { 
    acendeVerde();
  }
  if(valorPot >= 512 && valorPot <= 640) { 
    acendeGB();
  }
  if(valorPot >= 640 && valorPot <= 768) { 
    acendeAzul();
  }
  if(valorPot >= 768 && valorPot <= 896) { 
    acendeBR();
  }
  if(valorPot >= 896 && valorPot <= 1023) { 
    acendeBranco();
  }
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
