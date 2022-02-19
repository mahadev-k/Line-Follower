int switchstate = 0;
int m1 = 6;
int m2 = 9;
int m3 = 10;
int m4 = 11;
float s1, s2, s3, s4, s5, s6, s7, s8;
int sr1, sr2, sr3, sr4, sr5, sr6, sr7, sr8, n;
int sp = 0; float r;
float integral = 0; float diff = 0; float e_prev = 0;
int e, u, k, s;
int calcr()
{
  sr1 = digitalRead(2);
  sr2 = digitalRead(3);
  sr3 = digitalRead(4);
  sr4 = digitalRead(5);
  sr5 = digitalRead(7);
  sr6 = digitalRead(8);
  sr7 = digitalRead(12);
  //sr8=digitalRead(14);
  s1 = -3 * sr1;
  s2 = -2 * sr2;
  s3 = -1 * sr3;
  s4 = 0 * sr4;
  s5 = 1 * sr5;
  s6 = 2 * sr6;
  s7 = 3 * sr7;
  r = (s1 + s2 + s3 + s4 + s5 + s6 + s7);
  return r;
}

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(12, INPUT);
  pinMode(6, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(14, INPUT);
  pinMode(13, OUTPUT);
}
void loop()
{

  sr1 = digitalRead(2);
  sr2 = digitalRead(3);
  sr3 = digitalRead(4);
  sr4 = digitalRead(5);
  sr5 = digitalRead(7);
  sr6 = digitalRead(8);
  sr7 = digitalRead(12);
  // sr8=digitalRead(14);
  s1 = -3 * sr1;
  s2 = -2 * sr2;
  s3 = -1 * sr3;
  s4 = 0 * sr4;
  s5 = 1 * sr5;
  s6 = 2 * sr6;
  s7 = 3 * sr7;
  // s8=3*sr8;
  r = (s1 + s2 + s3 + s4 + s5 + s6 + s7);
  digitalWrite(m2, LOW);
  digitalWrite(m3, LOW);
  s = r;
  if (r <= 0 && r >= 0)
  {
    sr4 = digitalRead(5);
    if (sr4 == 0)
    {
      digitalWrite(13, HIGH);
      digitalWrite(m1, HIGH);
      digitalWrite(m4, HIGH);
      digitalWrite(m2, LOW);
      digitalWrite(m3, LOW);
    }
    else
    {
      s = n;
    }
  }
  while (s < 0)
  {
    digitalWrite(13, HIGH);
    digitalWrite(m4, LOW);
    digitalWrite(m1, HIGH);
    sr4 = digitalRead(5);
    if (sr4 == 0)
    {
      s = calcr();
    }
  }
  s = calcr();
  while (s > 0)
  {
    digitalWrite(m4, HIGH);
    digitalWrite(13, LOW);
    digitalWrite(m1, LOW);
    sr4 = digitalRead(5);
    if (sr4 == 0)
    {
      s = calcr();
    }
  }
  n = s;
}
