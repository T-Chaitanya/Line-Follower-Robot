void setup() {
  // put your setup code here, to run once:
pinMode(7,INPUT);
pinMode(6,INPUT);
pinMode(5,INPUT);
pinMode(4,INPUT);
pinMode(3,INPUT);
pinMode(2,INPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);

pinMode(13,OUTPUT);
int flag=0;
void forward();
void left();
void right();
void stop();
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(7)==LOW && digitalRead(6)==LOW && digitalRead(5)==HIGH && digitalRead(4)==HIGH && digitalRead(3)==LOW && digitalRead(2)==LOW)//straight{
void forward();
 }
else if(digitalRead(7)==LOW && digitalRead(6)==LOW && digitalRead(5)==LOW && digitalRead(4)==LOW && digitalRead(3)==LOW && digitalRead(2)==LOW)//start{
  void forward();
}
else if(digitalRead(7)==LOW && digitalRead(6)==LOW && digitalRead(5)==HIGH && digitalRead(4)==HIGH && digitalRead(3)==HIGH && digitalRead(2)==HIGH)//left turn {
 void left();
}
else if(digitalRead(7)==LOW && digitalRead(6)==HIGH && digitalRead(5)==HIGH && digitalRead(4)==HIGH && digitalRead(3)==HIGH && digitalRead(2)==HIGH)//left zigzag{
 void left();
}
else if(digitalRead(7)==HIGH && digitalRead(6)==HIGH && digitalRead(5)==HIGH && digitalRead(4)==HIGH && digitalRead(3)==HIGH && digitalRead(2)==LOW)//right zigzag{
 void right();
}
else if(digitalRead(7)==HIGH && digitalRead(6)==HIGH && digitalRead(5)==HIGH && digitalRead(4)==HIGH && digitalRead(3)==LOW && digitalRead(2)==LOW)//right turn{
 void right();
}
else if(digitalRead(7)==LOW && digitalRead(6)==LOW && digitalRead(5)==HIGH && digitalRead(4)==HIGH && digitalRead(3)==HIGH && digitalRead(2)==LOW)//semi circle right{
 void right();
}
else if(digitalRead(7)==LOW && digitalRead(6)==HIGH && digitalRead(5)==HIGH && digitalRead(4)==HIGH && digitalRead(3)==LOW && digitalRead(2)==LOW)//semi circle left{
 void left();
}
else if(digitalRead(7)==HIGH && digitalRead(6)==HIGH && digitalRead(5)==HIGH && digitalRead(4)==HIGH && digitalRead(3)==HIGH && digitalRead(2)==HIGH){
 void stop();
  digitalWrite(13,HIGH);
}
else if(digitalRead(7)==LOW && digitalRead(6)==HIGH && digitalRead(5)==HIGH && digitalRead(4)==HIGH && digitalRead(3)==HIGH && digitalRead(2)==LOW){
if (flag==1){
  flag=0;
  left();
}
else
  right();
}
else{
  stop();
  digitalWrite(13,HIGH);
}
}
void right(){
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
}
void left(){
   digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
}
void forward(){
   digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
}
void stop(){
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
  }
