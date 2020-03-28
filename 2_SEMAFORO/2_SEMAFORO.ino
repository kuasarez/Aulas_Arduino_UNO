//---Mapeamento de Hardware---//
#define vermelho 10
#define amarelo   9
#define verde     8

//---Função Principal---//
void setup() 
{
  pinMode(verde,OUTPUT);
  pinMode(amarelo,OUTPUT);
  pinMode(vermelho,OUTPUT);

  digitalWrite(verde,LOW);
  digitalWrite(amarelo,LOW);
  digitalWrite(vermelho,LOW);
}

//---Loop Infinito---//
void loop() 
{
  digitalWrite(verde,HIGH);
  digitalWrite(amarelo,LOW);
  digitalWrite(vermelho,LOW);
  delay(5000);
  
  digitalWrite(verde,LOW);
  digitalWrite(amarelo,HIGH);
  digitalWrite(vermelho,LOW);
  delay(2000);
  
  digitalWrite(verde,LOW);
  digitalWrite(amarelo,LOW);
  digitalWrite(vermelho,HIGH);
  delay(5000);

}
