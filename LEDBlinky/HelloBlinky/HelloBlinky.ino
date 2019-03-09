int Yellow1 = 7;
int Yellow2 = 6;
int Orange1 = 3;
int Green1 = 15;
int Green2 = 16;

void setup () {
 pinMode(Yellow1, OUTPUT);
 pinMode(Yellow2, OUTPUT);
 pinMode(Orange1, OUTPUT);
 pinMode(Green1, OUTPUT);
 pinMode(Green2, OUTPUT);
}

void loop() {
 digitalWrite(Yellow1, HIGH);    // turn the LED off by making the voltage HIGH
 digitalWrite(Yellow2, HIGH);    // turn the LED off by making the voltage HIGH
 digitalWrite(Orange1, HIGH);    // turn the LED off by making the voltage HIGH
 digitalWrite(Green1, HIGH);    // turn the LED off by making the voltage HIGH
 digitalWrite(Green2, HIGH);    // turn the LED off by making the voltage HIGH
  delay(1000);                       // wait for a second
 digitalWrite(Yellow1, LOW);    // turn the LED off by making the voltage LOW
 digitalWrite(Yellow2, LOW);    // turn the LED off by making the voltage LOW
 digitalWrite(Orange1, LOW);    // turn the LED off by making the voltage LOW
 digitalWrite(Green1, LOW);    // turn the LED off by making the voltage LOW
 digitalWrite(Green2, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
