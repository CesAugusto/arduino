#define pinSensorA A0
#define pinSensorD 2
#define pinSolenoide 5

void setup() {
  Serial.begin(9600);
  pinMode(pinSensorD, INPUT);
  pinMode(pinSolenoide, OUTPUT);
}

void loop() {

  if (analogRead(pinSensorA) > 700) {
     digitalWrite(pinSolenoide, LOW);
     Serial.println(digitalRead(pinSolenoide));
  } else {
     digitalWrite(pinSolenoide, HIGH);
     Serial.println(digitalRead(pinSolenoide));
  }
}
