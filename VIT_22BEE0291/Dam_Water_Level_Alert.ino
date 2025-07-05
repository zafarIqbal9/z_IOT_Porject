
#include <LiquidCrystal_I2C.h>

#define trigPin 9
#define echoPin 8
#define buzzer 7
#define redLED 6
#define greenLED 5

LiquidCrystal_I2C lcd(0x27, 16, 2);

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("DAM MONITOR SYS");
  delay(2000);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Level: ");
  lcd.print(distance);
  lcd.print(" cm");

  if (distance < 30) {
    digitalWrite(buzzer, HIGH);
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
    lcd.setCursor(0, 1);
    lcd.print("DANGER!!!");
  } else {
    digitalWrite(buzzer, LOW);
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);
    lcd.setCursor(0, 1);
    lcd.print("SAFE");
  }

  delay(1000);
}
