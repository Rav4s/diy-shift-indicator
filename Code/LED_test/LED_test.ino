#define GREEN_ONE 8
#define GREEN_TWO 7
#define GREEN_THREE 6
#define YELLOW_ONE 5
#define YELLOW_TWO 4
#define RED_ONE 3
#define RED_TWO 2


void setup() {
  pinMode(GREEN_ONE, OUTPUT);
  pinMode(GREEN_TWO, OUTPUT);
  pinMode(GREEN_THREE, OUTPUT);
  pinMode(YELLOW_ONE, OUTPUT);
  pinMode(YELLOW_TWO, OUTPUT);
  pinMode(RED_ONE, OUTPUT);
  pinMode(RED_TWO, OUTPUT);
}

void loop() {
  digitalWrite(GREEN_ONE, HIGH);
  delay(500);
  digitalWrite(GREEN_ONE, LOW);
  digitalWrite(GREEN_TWO, HIGH);
  delay(500);
  digitalWrite(GREEN_TWO, LOW);
  digitalWrite(GREEN_THREE, HIGH);  
  delay(500);
  digitalWrite(GREEN_THREE, LOW);
  digitalWrite(YELLOW_ONE, HIGH);
  delay(500);
  digitalWrite(YELLOW_ONE, LOW);
  digitalWrite(YELLOW_TWO, HIGH);
  delay(500);
  digitalWrite(YELLOW_TWO, LOW);
  digitalWrite(RED_ONE, HIGH);
  delay(500);
  digitalWrite(RED_ONE, LOW);
  digitalWrite(RED_TWO, HIGH);
  delay(500);
  digitalWrite(RED_TWO, LOW);
}
