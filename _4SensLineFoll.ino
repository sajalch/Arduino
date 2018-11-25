int rightmotor1=11;
int leftmotor1=10;
int rightmotor2=3;
int leftmotor2=4;

int sensorleft1=7;
int sensorleft2=8;
int sensorright2=12;
int sensorright1=13;
 int en1=5,en2=6;
int l1=1;
int l2=1;
int l3=1;
int l4=1;

int f1=0;
int f2=0;
int f3=0;
int f4=0;

void setup() {
  // put your setup code here, to run once:
 pinMode(rightmotor1,OUTPUT);
 pinMode(leftmotor1,OUTPUT);
 pinMode(en1,OUTPUT);
 pinMode(en2,OUTPUT);
 digitalWrite(rightmotor1,HIGH);
 digitalWrite(en2,HIGH);
 pinMode(rightmotor2,OUTPUT);
 pinMode(leftmotor2,OUTPUT);

 pinMode(sensorleft1,INPUT);
 pinMode(sensorleft2,INPUT);
 pinMode(sensorright2,INPUT);
 pinMode(sensorright1,INPUT);
 digitalWrite(rightmotor2,LOW);
 digitalWrite(leftmotor2,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  l1=digitalRead(sensorleft1);
  l2=digitalRead(sensorleft2);
  l3=digitalRead(sensorright2);
  l4=digitalRead(sensorright1);

  if(l1==0&&l2==0&&l3==0&&l4==0)   //feedback when comes all sensor on white
{
/*l1=f1;
l2=f2;
l3=f3;
l4=f4;*/
digitalWrite(rightmotor1,HIGH);
  //digitalWrite(rightmotor2,LOW);
  digitalWrite(leftmotor1,HIGH);
  //digitalWrite(leftmotor2,LOW);

}

////////////////////////////////////////////////////////////////////////////
if(l1==1&&l2==1&&l3==0&&l4==0||l1==1&&l2==0&&l3==0&&l4==0||l1==1&&l2==1&&l3==1&&l4==0)   //left turn
{
  digitalWrite(rightmotor1,HIGH);
 // digitalWrite(rightmotor2,LOW);
  digitalWrite(leftmotor1,LOW);
  //digitalWrite(leftmotor2,LOW);
}
else
if(l1==0&&l2==0&&l3==1&&l4==1||l1==0&&l2==0&&l3==0&&l4==1||l1==0&&l2==1&&l3==1&&l4==1)  //right turn
{
  digitalWrite(rightmotor1,LOW);
  //digitalWrite(rightmotor2,LOW);
  digitalWrite(leftmotor1,HIGH);
  //digitalWrite(leftmotor2,LOW);
}
else
if(l1==0&&l2==1&&l3==1&&l4==0||l1==0&&l2==1&&l3==0&&l4==0||l1==0&&l2==0&&l3==1&&l4==0)  //go forward straight
{
  digitalWrite(rightmotor1,HIGH);
  //digitalWrite(rightmotor2,LOW);
  digitalWrite(leftmotor1,HIGH);
  //digitalWrite(leftmotor2,LOW);
}
else
if(l1==1&&l2==1&&l3==1&&l4==1) //stop
{
  digitalWrite(rightmotor1,LOW);
  //digitalWrite(rightmotor2,LOW);
  digitalWrite(leftmotor1,LOW);
  //digitalWrite(leftmotor2,LOW);
}

/*//////////////////////////////////////////////////////////////////
f1=l1;
f2=l2;
f3=l3;  
f4=l4;    //memory variables
///////////////////////////////////////////////////////////////////*/


}
