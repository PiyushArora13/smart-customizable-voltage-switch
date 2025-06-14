const int voltagePin = A0; 
const int nmosGate = 3;     
const int buzzer = 4;       

float threshold = 6.0;     
float voltage = 0;
bool wasOn = true;          

void setup() {
  pinMode(nmosGate, OUTPUT);
  pinMode(buzzer, OUTPUT);
  digitalWrite(nmosGate, LOW);   
  digitalWrite(buzzer, LOW);     
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(voltagePin);
  voltage = (sensorValue * 5.0) / 1023.0;    
  voltage = voltage * (9.0 / 5.0);           

  Serial.print("Voltage: ");
  Serial.println(voltage);

  if (voltage > threshold) {
    digitalWrite(nmosGate, LOW);  

    if (wasOn) {
      digitalWrite(buzzer, HIGH);   
      delay(3000);                    
      digitalWrite(buzzer, LOW);      
      wasOn = false;                 
    }

  } else {
    digitalWrite(nmosGate, HIGH);  
    digitalWrite(buzzer, LOW);     
    wasOn = true;                  
  }

  delay(200);  
}