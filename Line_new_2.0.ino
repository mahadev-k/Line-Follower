int switchstate=0;
int m1=6;
int m2=9;
int m3=10;
int m4=11;
float s1,s2,s3,s4,s5,s6,s7,s8;
int sr1,sr2,sr3,sr4,sr5,sr6,sr7,sr8;
 int sp=0; float r;
  float integral=0; float diff=0; float e_prev=0;
  int e,u,k;
void setup()
{
pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(4,INPUT);
pinMode(5,INPUT);
pinMode(7,INPUT);
pinMode(8,INPUT);
pinMode(12,INPUT);
pinMode(16,INPUT);
pinMode(15,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(14,INPUT);
pinMode(13,OUTPUT);
}
void loop()
{

  sr1=digitalRead(2);
  sr2=digitalRead(3);
  sr3=digitalRead(4);
  sr4=digitalRead(5);
  sr5=digitalRead(7);
  sr6=digitalRead(8);
  sr7=digitalRead(12);
  sr8=digitalRead(14);
  s1=-3*sr1;
  s2=-2*sr2;
  s3=-1*sr3;
  s4=-1*sr4;
  s5=1*sr5;
  s6=1*sr6;
  s7=2*sr7;
  s8=3*sr8;
  r=(s1+s2+s3+s4+s5+s6+s7+s8);
   if(r==0)
    {
      digitalWrite(13,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(11,LOW);
    }
   if(r<0)
  {
    digitalWrite(13,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
     digitalWrite(11,HIGH); 
  }
    if(r>0)
    {
     digitalWrite(10,HIGH);
     digitalWrite(13,LOW);
     digitalWrite(9,HIGH);
     digitalWrite(11,LOW);
    } 
}
    
