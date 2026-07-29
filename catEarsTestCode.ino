#include <Servo.h>
Servo myservo;
void setup() {
  // put your setup code here, to run once:
    myservo.attach(2);  
    myservo.write(90);
    delay(1000);
    Serial.begin(9800);
    myservo.write(135);
    delay(500);
    myservo.write(45);
    delay(500);
}
long temp=90; //todo: make name
boolean add=true;
void loop() {
  // put your main code here, to run repeatedly:
    myservo.write(temp);
    if(add){
      temp++;
    }else{
      temp--;
    }
    if(temp>=135){
      add=false;
    }
    if(temp<=45){
      add=true;
    }
    delay(20);
    // temp=random(-1,2);
    // Serial.println(temp);
    // if(temp>0){
    //   myservo.write(random(45,70));
    // }else{
    //   myservo.write(random(110,135));
    // }
    // delay(random(100,250));
    // myservo.write(90);
    // delay(random(5000, 10000));

}
