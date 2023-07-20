#define enA 5
#define IN1 9
#define IN2 10

int rate=1;
bool flaga=true;

void setup()
{
  Serial.begin(1);
  
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  delay(1000); 
  
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  delay(1000);
  
}

void loop()
{	
  if (rate>=255)
  {
   flaga=false; 
    
  }
  if (rate<=10)
  {
   flaga=true; 
    
  }
  
  
  if (flaga==true)
  {
   rate=rate+10;
   
  }
  else
  {
   rate=rate-5; 
    
  }
  
  delay(1200);
  analogWrite(enA,rate);

}