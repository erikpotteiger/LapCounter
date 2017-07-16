int lane2pin = 5;
int lane2state = 0;
int lane2laps = 0;

int lane1pin = 4;
int lane1state = 0;
int lane1laps = 0;

int lapstowin = 20;


void setup() {
  // put your setup code here, to run once:
  pinMode(lane2pin, INPUT);
  pinMode(lane1pin, INPUT);
  Serial.begin(115200);
  
}

void loop() {

  lane2state = digitalRead(lane2pin);
  // put your main code here, to run repeatedly:
  if (lane2state == HIGH)
  {
    lane2laps++;
    Serial.print("Lane 2 Lap:");
    Serial.println(lane2laps);
  }

  lane1state = digitalRead(lane1pin);
  // put your main code here, to run repeatedly:
  if (lane1state == HIGH)
  {
    lane1laps++;
    Serial.print("Lane 1 Lap:");
    Serial.println(lane1laps);
  }

  if (lane1laps >= lapstowin)
  {
    Serial.println("LANE 1 WINS!!!!! LANE 1 WINS!!!!!!! LANE 1 WINS!!!!!!!!");
    Serial.println("LANE 1 WINS!!!!! LANE 1 WINS!!!!!!! LANE 1 WINS!!!!!!!!");
    Serial.println("LANE 1 WINS!!!!! LANE 1 WINS!!!!!!! LANE 1 WINS!!!!!!!!");
    Serial.println("LANE 1 WINS!!!!! LANE 1 WINS!!!!!!! LANE 1 WINS!!!!!!!!");
    Serial.println("LANE 1 WINS!!!!! LANE 1 WINS!!!!!!! LANE 1 WINS!!!!!!!!");
    Serial.println("LANE 1 WINS!!!!! LANE 1 WINS!!!!!!! LANE 1 WINS!!!!!!!!");
    Serial.println("LANE 1 WINS!!!!! LANE 1 WINS!!!!!!! LANE 1 WINS!!!!!!!!");
    Serial.println("LANE 1 WINS!!!!! LANE 1 WINS!!!!!!! LANE 1 WINS!!!!!!!!");
    lane1laps = 0;
    lane2laps = 0;
  }
    if (lane2laps >= lapstowin)
  {
    Serial.println("LANE 2 WINS!!!!! LANE 2 WINS!!!!!!! LANE 2 WINS!!!!!!!!");
    Serial.println("LANE 2 WINS!!!!! LANE 2 WINS!!!!!!! LANE 2 WINS!!!!!!!!");
    Serial.println("LANE 2 WINS!!!!! LANE 2 WINS!!!!!!! LANE 2 WINS!!!!!!!!");
    Serial.println("LANE 2 WINS!!!!! LANE 2 WINS!!!!!!! LANE 2 WINS!!!!!!!!");
    Serial.println("LANE 2 WINS!!!!! LANE 2 WINS!!!!!!! LANE 2 WINS!!!!!!!!");
    Serial.println("LANE 2 WINS!!!!! LANE 2 WINS!!!!!!! LANE 2 WINS!!!!!!!!");
    Serial.println("LANE 2 WINS!!!!! LANE 2 WINS!!!!!!! LANE 2 WINS!!!!!!!!");
    Serial.println("LANE 2 WINS!!!!! LANE 2 WINS!!!!!!! LANE 2 WINS!!!!!!!!");
    lane2laps = 0;
    lane1laps = 0;
  }
  delay(3);

}
