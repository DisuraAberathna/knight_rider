int d = 150;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  // pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH);
  delay(d);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(d);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(d);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(d);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(d);
  digitalWrite(6, LOW);
  digitalWrite(6, HIGH);
  delay(d);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  delay(d);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  delay(d);
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  delay(d);
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
  delay(d);
  digitalWrite(2, LOW);

  // digitalWrite(7, HIGH);
  // delay(d);
  // digitalWrite(7, LOW);
}
