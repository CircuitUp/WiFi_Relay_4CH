#define Relay1 4  //Relay 1 is connected to GPIO 4
#define Relay2 5  //Relay 2 is connected to GPIO 5
#define Relay3 12 //Relay 3 is connected to GPIO 12
#define Relay4 13 //Relay 4 is connected to GPIO 13
#define Delay 500 //Delay in ms
void setup() {
  //Define GPIO 4,5,12,13 as outputs
  pinMode(Relay1,OUTPUT); 
  pinMode(Relay2,OUTPUT);
  pinMode(Relay3,OUTPUT);
  pinMode(Relay4,OUTPUT);
}

void loop() {
  digitalWrite(Relay1,HIGH);
  digitalWrite(Relay2,HIGH);
  digitalWrite(Relay3,HIGH);
  digitalWrite(Relay4,HIGH);
  delay(Delay);
  digitalWrite(Relay1,LOW);
  digitalWrite(Relay2,LOW);
  digitalWrite(Relay3,LOW);
  digitalWrite(Relay4,LOW);
  delay(Delay);
}
