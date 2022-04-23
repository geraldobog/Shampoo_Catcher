#define dirPin 2
#define stepPin 3
//#define stepsPerRevolution 1264
#define stepsPerRevolution 200
#define maxD 6
#define IN1 1
void setup() {
  // Declare pins as output:
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
 
  
}
void loop() {
  // These four lines result in 1 step:

  if (IN1 == 0){
    
      for (int i = 0; i < stepsPerRevolution; i++) {
      digitalWrite(dirPin, LOW);
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(450);
      digitalWrite(stepPin, LOW);
      delayMicroseconds(450);
      }
  }else{
      for (int i = 0; i < stepsPerRevolution; i++) {
      digitalWrite(dirPin, HIGH);
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(450);
      digitalWrite(stepPin, LOW);
      delayMicroseconds(450);
      }
    
    }

  delay(5000);
  }
    
 
