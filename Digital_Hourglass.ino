const int switchPin=8;
unsigned long previousTime=0;
int switchState=0;
int prevSwitchState=0;
int led=1;
long interval = 500;

void setup() 
{ 
  Serial.begin(9600);
  
  for(int x=2;x<8;x++)
  {
    pinMode(x,OUTPUT);
  }
 pinMode(switchPin,INPUT);
}

void loop() 
{
 
  
  unsigned long currentTime=millis(); 
  
 //This will set currentTime to the amount of time 
 //that has passed since the aruino was turned on
 
  if(currentTime - previousTime > interval)
  {
    previousTime=currentTime; 
    digitalWrite(led,HIGH);
    led++;
    Serial.println(led);

    if(led==8)
    {
     tone(13,558.84);
     delay(100);
     noTone(13);
     delay(70);
     
     tone(13,558.84);
     delay(100);
     noTone(13);
     delay(70);
     
     tone(13,558.84);
     delay(100);
     noTone(13);
     delay(50);

     tone(13,664.57);
     delay(50);
     noTone(13);
     delay(100);
     
     tone(13,837.31);
     delay(100);
     noTone(13);
     delay(100);
     
    }
  }

  switchState=digitalRead(switchPin);

  if(switchState != prevSwitchState)
  {
    for(int x=2;x<8;x++)
    {
      digitalWrite(x,LOW);
    }

    led=2;
    previousTime=currentTime;
  }
  prevSwitchState=switchState;

  
  
 
}
