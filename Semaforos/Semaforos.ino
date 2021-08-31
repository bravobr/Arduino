// Projeto: Semáforos
// Autor: Ricardo Klava

int pedVermelho = 9;
int pedVerde = 8;
int carroVerde = 10;
int carroAmarelo = 11;
int carroVermelho = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(pedVerde, OUTPUT);
  pinMode(pedVermelho, OUTPUT);
  pinMode(carroVerde, OUTPUT);
  pinMode(carroAmarelo, OUTPUT);
  pinMode(carroVermelho, OUTPUT);
  // posição inicial
  digitalWrite(carroVerde, HIGH);
  digitalWrite(carroAmarelo, LOW);
  digitalWrite(carroVermelho, LOW);
  digitalWrite(pedVerde, LOW);
  digitalWrite(pedVermelho, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(carroVerde, HIGH); // Acende o verde dos carros e o vermelho dos pedestres
  digitalWrite(pedVermelho, HIGH);  
  delay(2500); // Aguarda 5 segundos
  digitalWrite(carroVerde, LOW);
  digitalWrite(carroAmarelo, HIGH); // apaga o verde dos carros e acende o amarelo
  delay(1500); // aguarda mais 3 segundos
  digitalWrite(carroAmarelo, LOW); // apaga o amarelo dos carros e acende o vermelho
  digitalWrite(carroVermelho, HIGH);
  digitalWrite(pedVermelho, LOW); // apaga o vermelho dos pedestres e acende o verde
  digitalWrite(pedVerde, HIGH);
  delay(2500);  // aguarda mais 5 segundos
  digitalWrite(pedVerde, LOW);
  for(int x = 0; x<5; x++) // Pisca o vermelho dos pedestres
  {
    digitalWrite(pedVermelho, HIGH);
    delay(250);
    digitalWrite(pedVermelho, LOW);
    delay(250);
  }
  digitalWrite(carroVermelho, LOW);  
}
