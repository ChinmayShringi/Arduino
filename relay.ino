#define trigPin 13
#define echoPin 12                
#define RELAY1  7                        
#define RELAY2  8  

void setup(){   
  Serial.begin(9600);
  pinMode(RELAY1, OUTPUT);
  pinMode(RELAY2, OUTPUT);  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop()
{
  long duration, distance;
  digitalWrite(trigPin, LOW);
  digitalWrite(trigPin, HIGH);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 16) / 29.1;

  if (distance < 200) { 
	    digitalWrite(RELAY1,LOW);
	    digitalWrite(RELAY2,HIGH); 
  }

  else {
	   digitalWrite(RELAY1,HIGH);	
	   digitalWrite(RELAY2,LOW);
  }
   
}
