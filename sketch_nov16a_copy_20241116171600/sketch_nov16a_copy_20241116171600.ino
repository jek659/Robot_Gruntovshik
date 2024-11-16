/*
2-3 right wh 1-up
4-5 left wh 0-down  
*/
byte path[14] = { 1, 2, 1, 2, 1, 1, 1, 2, 1, 2, 1, 0, 0,0 };

byte speed = 200;
void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  /*
Ход мотора
*/
  for (int i = 0; i < 14; i++) {
    switch (path[i]) {
      case 0:
        stop();
        break;
      case 1:
        up();
        break;
      case 2:
        right();
        break;
      case 3:
        left();
        break;
      case 4:
        down();
        break;
    }
  }
}
/*
down();
delay(3000);
stop();

left();
delay(3000);
stop();

right();
delay(3000);
stop();
}
*/
/*
Программирование моторов
*/
void loop() {
  // put your main code here, to run repeatedly:
}
void up() {
  digitalWrite(2, 1);
  analogWrite(3, 255 - speed);
  digitalWrite(4, 1);
  analogWrite(5, 255 - speed);
  delay(650);
}
void stop() {
  digitalWrite(2, 0);
  analogWrite(3, 0);
  digitalWrite(4, 0);
  analogWrite(5, 0);
}
void down() {
  digitalWrite(2, 0);
  analogWrite(3, speed);
  digitalWrite(4, 0);
  analogWrite(5, speed);
}
void left() {
  digitalWrite(2, 1);
  analogWrite(3, 255 - speed);
  digitalWrite(4, 0);
  analogWrite(5, speed);
}
void right() {
  digitalWrite(2, 0);
  analogWrite(3, speed);
  digitalWrite(4, 1);
  analogWrite(5, 255 - speed - 20);
  delay(400);
}
/*
void up(){
digitalWrite(2,1);
analogWrite(3,255-speed);
digitalWrite(4,1);
analogWrite(5,255-speed);
}
void stop(){
digitalWrite(2,0);
analogWrite(3,0);
digitalWrite(4,0);
analogWrite(5,0);
}
void down(){
digitalWrite(2,0);
analogWrite(3,speed);
digitalWrite(4,0);
analogWrite(5,speed);
}
void left(){
digitalWrite(2,1);
analogWrite(3,255 - speed);
digitalWrite(4,0);
analogWrite(5,speed);
}
void right(){
digitalWrite(2,0);
analogWrite(3,speed);
digitalWrite(4,1);
analogWrite(5,255 - speed);
}
*/
