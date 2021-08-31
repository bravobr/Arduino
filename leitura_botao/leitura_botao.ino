// Projeto leitura do estado de um botão
// Ricardo Klava

const int botao = 2;         // pino no qual o botao está conectado
int estadoBotao = 0;         // variável para guardar o valor do estado do botão (pressionado ou não)   

int valorPot;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);        // inicialização do monitor serial na baudrates de 9600 
  pinMode(botao, INPUT);     // inicialização do pino do botão como entrada (INPUT)
}

void loop() {
  // put your main code here, to run repeatedly:
  estadoBotao = digitalRead(botao);  // Lê o estado do botão (que pode ser 0 ou 1)
  Serial.println(estadoBotao);       // imprime o estado do botão no monitor serial
}
