//---Mapeamento de Hardware---//
#define vmC 10
#define amC  9
#define vdC  8
#define vmP 13
#define vdP 11 

//---Função Principal---//
void setup() 
{
  pinMode(vmC,OUTPUT);
  pinMode(amC,OUTPUT);
  pinMode(vdC,OUTPUT);
  pinMode(vmP,OUTPUT);
  pinMode(vdP,OUTPUT);

  digitalWrite(vmC,LOW);
  digitalWrite(amC,LOW);
  digitalWrite(vdC,LOW);
  digitalWrite(vmP,LOW);
  digitalWrite(vdP,LOW);

}

//---Loop Infinito---//
void loop() 
{
  digitalWrite(vmC,LOW);
  digitalWrite(amC,LOW);
  digitalWrite(vdC,HIGH);
  digitalWrite(vmP,HIGH);
  digitalWrite(vdP,LOW);
  delay(5000);

  digitalWrite(vmC,LOW);
  digitalWrite(amC,HIGH);
  digitalWrite(vdC,LOW);
  digitalWrite(vmP,HIGH);
  digitalWrite(vdP,LOW);
  delay(2000);

  digitalWrite(vmC,HIGH);
  digitalWrite(amC,LOW);
  digitalWrite(vdC,LOW);
  digitalWrite(vmP,LOW);
  digitalWrite(vdP,HIGH);
  delay(5000);

}
