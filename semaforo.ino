#define rojo      13
#define amarillo  12
#define verde     11

void setup() 
{
 pinMode(rojo,OUTPUT);
 pinMode(amarillo,OUTPUT);
 pinMode(verde,OUTPUT);

 digitalWrite(rojo,LOW);
 digitalWrite(amarillo,LOW);
 digitalWrite(verde,LOW);
}

void loop() 
{
 digitalWrite(rojo,HIGH);
 digitalWrite(amarillo,LOW);
 digitalWrite(verde,LOW);
 delay(4000);

 digitalWrite(rojo,HIGH);
 digitalWrite(amarillo,HIGH);
 digitalWrite(verde,LOW);
 delay(2000);

 digitalWrite(rojo,LOW);
 digitalWrite(amarillo,LOW);
 digitalWrite(verde,HIGH);
 delay(4000);

 digitalWrite(rojo,LOW);
 digitalWrite(amarillo,HIGH);
 digitalWrite(verde,LOW);
 delay(2000);
}
