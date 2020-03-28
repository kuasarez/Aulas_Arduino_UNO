//---Função Principal---//
void setup() 
{
//Configura o pino 13 como saida
pinMode(13,OUTPUT);  
}
//---Loop Infinito---//
void loop() 
{
//Atribui ao pino 13 nível lógico alto
digitalWrite(13,HIGH);
//Pausa o programa em mili segundos
delay(400);
//Atribui ao pino 13 nível lógico baixo
digitalWrite(13,LOW);
delay(400);
}
