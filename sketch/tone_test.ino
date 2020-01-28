int speakerPin = 3;

int tones[] = {
  523, // ド
  587, // レ
  659, // ミ
  698, // ファ
  783, // ソ
  880, // ラ
  987, // シ
  1046 // ド
};

void setup () {
}

void loop () {
  for (int i = 0; i <= 7; i++) {
    tone(speakerPin, tones[i]);
    delay(500);
  }
  for (int i = 7; i >= 0; i--) {
    tone(speakerPin, tones[i]);
    delay(500);
  }
}
