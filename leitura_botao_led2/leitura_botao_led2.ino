// Projeto leitura do estado de um botão e acende led
// Ricardo Klava

const int botao1 = 2;           // pino no qual o botão está conectado
const int botao2 = 3;  
const int led = 13;            // pino no qual o LED está conectado
int estadoBotao1 = 0;           // variável para guardar o valor do estado do botão (pressionado ou não)
int estadoBotao2 = 0;  

void setup() {                          
  Serial.begin(9600);                   // inicialização do monitor serial 
  pinMode(led, OUTPUT);                 // inicialização do pino do led como saída (OUTPUT)
  pinMode(botao1, INPUT);                // inicialização do pino do botão como entrada   
  pinMode(botao2, INPUT);  
}

void loop() {               
  estadoBotao1 = digitalRead(botao1);               // Lê o estado do botão (que pode ser 0 ou 1)
  estadoBotao2 = digitalRead(botao2);               // Lê o estado do botão (que pode ser 0 ou 1)
  if (estadoBotao1 == 1) {                         // Checa o estado do botão. Se estiver apertado (1):
    digitalWrite(led, 1);                         // acende o LED
    Serial.println("11");                          // imprime "1" no monitor serial 
  }
  if (estadoBotao2 == 1) {                                          // Senão:
    digitalWrite(led, 0);                         // apaga o LED
    Serial.println("21");  
  }                       
}
