// https://wokwi.com/projects/345978602245849682

void setup() {
  // put your setup code here, to run once:

  // Potentiometer
  pinMode(0, OUTPUT);
  pinMode(A5, INPUT);

  // LED
  pinMode(2, OUTPUT);
}

int wait_time = 0;
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(0, HIGH);
  double volt = analogRead(A5);
  if (volt == 0) {
    digitalWrite(2, LOW);
  } else {
    wait_time = 100000 / volt;

    digitalWrite(2, HIGH);
    delay(wait_time);
    digitalWrite(2, LOW);
    delay(wait_time);
  }
}
