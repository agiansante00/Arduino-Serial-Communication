
int fsr_analog_pin = 0;
int fsr_reading;
String analogValue;

void setup() {
Serial.begin(19200);
}
void loop() {
fsr_reading = analogRead(fsr_analog_pin);

if (fsr_reading > 2){
String analogValue = String(fsr_reading);
Serial.println(analogValue);
delay (5);
}
}
