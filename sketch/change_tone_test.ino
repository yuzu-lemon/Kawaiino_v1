void setup () {
}

void loop () {
  long value = 0;
  for (int i = 0; i < 100; i++) {
    value += analogRead(14);
  }
  tone(3, value);
}
