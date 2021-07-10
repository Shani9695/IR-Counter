int IR=7;
int count=0;
boolean state = true;

void setup() {
Serial.begin(9600);
pinMode(IR, INPUT);
}

void loop() {
  
  if (!digitalRead(IR) && state){
      count++;
      state = false;
      Serial.print("Count: ");
      Serial.println(count);
      delay(100);
  }
  if (digitalRead(IR)){
     state = true;
      delay(100);
  }

}
