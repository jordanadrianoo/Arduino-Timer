const int switchPin=8;
unsigned long previousTime=0;
int switchState=0;
int prevSwitchState=0;
int led=1;
long interval = 50;

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

    if(led==8) // plays mario intro jingle
    {
     tone(13, 659); // E Note
     delay(100);
     noTone(13);
     delay(100);
     
     tone(13,659); // E Note
     delay(100);
     noTone(13);
     delay(100);
     
     tone(13,659); // E Note
     delay(300);
     noTone(13);
     delay(100);

     tone(13,523); // C Note
     delay(100);
     noTone(13);
     delay(100);
     
     tone(13,659); // E Note
     delay(200);
     noTone(13);
     delay(200);

     tone(13,784); // High G Note
     delay(400);
     noTone(13);
     delay(400);

     tone(13,392); // Low G Note
     delay(400);
     noTone(13);
     delay(200);
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
