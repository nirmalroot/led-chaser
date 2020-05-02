void setup() {
  Serial.begin (9600);
  for (int a = 7 ; a < 12 ; a++)
  {
    pinMode (a, OUTPUT);
  }
}
void loop() {
  for (int b = 45 ; b > 5 ; b--){
  for (int a = 7 ; a < 12 ; a++)
  {
    delay(b);
    digitalWrite (a, HIGH);
    delay (b);
    digitalWrite (a, LOW);
    delay (b);
  }    
  for (int a =12 ; a > 7 ; a--)
  {
    delay (b);
    digitalWrite (a, HIGH);
    delay (b);
    digitalWrite (a, LOW);
    delay (b);
  }   }
}
