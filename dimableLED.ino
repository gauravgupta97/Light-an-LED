int LEDpin=9;//declare led pin to be arduino pin 9
int potpin=A0;// declare potpin to be analog pin A0
int readvalue;
float writevalue;
void setup() {
 Serial.begin(9600);
 pinMode(LEDpin,OUTPUT);
 pinMode(potpin,INPUT);
 
}

void loop() {
  readvalue=analogRead(potpin);
  writevalue=(255./1023.)*readvalue;
  analogWrite(LEDpin,writevalue);
  Serial.print("You are writing a value of ");
  Serial.println(writevalue);

}
