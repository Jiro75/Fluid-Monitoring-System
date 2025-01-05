
int sensorPin = A0;  
int led = 4;
int sensorValue;   

int buzzerPin = 3;  
int threshold = 300; 

void setup() {
  pinMode(buzzerPin, OUTPUT); 
  pinMode(led, OUTPUT);
  Serial.begin(9600); 
}

void loop() {

  sensorValue = analogRead(sensorPin); 
  Serial.println(sensorValue); 

  if (sensorValue > threshold) {
    digitalWrite(buzzerPin, HIGH); 
    digitalWrite(led, HIGH);
	} 

else {
    digitalWrite(buzzerPin, LOW); 
    digitalWrite(led, LOW);
  }


  delay(500); 
}