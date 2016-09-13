int buttonState = 0;

void setup() {
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  buttonState = digitalRead(2);
  
  if(buttonState == LOW){
    // Default state, button is not pressed
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }else{
    // Whenever the button gets pressed
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    
    // Lights effect using delay func
    delay(250);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250);   
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    delay(750);   
    
  }
}
