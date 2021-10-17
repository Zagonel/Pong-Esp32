const int PinVrx = 36;
int valorVrx = 0;

void setup() {

  pinMode(PinVrx, INPUT);
  Serial.begin(9600);
}

void loop() {
  valorVrx = analogRead(PinVrx);
  if (valorVrx < 2700) {
    Serial.println("ui_up");
  }]
  if (valorVrx > 3100) {
    Serial.println("ui_down");
  }
  if(valorVrx > 2700 && valorVrx < 3100){
    Serial.println("Parado");
  }
}
