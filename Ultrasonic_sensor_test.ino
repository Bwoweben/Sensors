const int trigPin = 8;
const int echoPin = 7;
// defines variables
long duration;
int distance;
void setup() {
  // put your setup code here, to run once:
  
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication

}

void loop() {
  // put your main code here, to run repeatedly:
  // Clears the trigPin
digitalWrite(trigPin, LOW);
delay(2000);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delay(10000);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);

}
