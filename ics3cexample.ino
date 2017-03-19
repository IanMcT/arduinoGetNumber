String incomingText; //variable to store input
int myNumber; //variable to convert it
char enterKey = 13; //13 is the key code for the Enter key
//Setup function - runs at start
void setup() {
  Serial.begin(9600);//Start serial input
}
//loop continually runs
void loop() {
  // send data only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming input:
    incomingText = Serial.readStringUntil(enterKey);
    // say what you got:
    Serial.print("I received: ");
    Serial.println(incomingText);
    myNumber = incomingText.toInt(); //convert to int
    Serial.println(myNumber);  //output as number
    Serial.println(String(myNumber+1) + " after adding 1");
  }
}
