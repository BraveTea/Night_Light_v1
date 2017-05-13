//NightLight v1
//This is the code for a night light for my daughter. 
//It is meant to regulate a warm light LED strip in several different ways
//1. sound activated (with a delay)
//2. potmeter dimmable 
//3. dimmable in regard to the ambient light strength

const int POT_METER_PIN = ;
const int LRD_PIN = ; //analog pin
int lightVal = analogRead(LRD_PIN);
const int SOUND_PIN = ; //analog pin
int soundVal = analogRead(SOUND_PIN);

const int LED_STRIP = ;

void setup()
{
  pinMode(LED_STRIP, OUTPUT);
  pinMode(POT_METER_PIN, INPUT);
  pinMode(LRD_PIN, INPUT);
  pinMode(SOUND_PIN, INPUT);
}

void loop()
{
  
}

void threeMinutesOn //Use millis() here i.s.o delay() becuase I want the night to keep listening for sound and restart the loop on new sound.
{
  unsigned long currentTimer = millis();
  if (currentTimer <= currentTimer + 180000) //in an earlier version it was simply if (currentTimer < 180000) which only works if you want to run the function at the start/boot of the machine. 
  {
    ledStripOn();
  }
  else
  {
    ledStripOff();
  }
}

void ledStripOn()
{
  digitalWrite(LED_STRIP, HIGH);
}

void ledStripOff()
{
  digitalWrite(LED_STRIP, LOW);
}

