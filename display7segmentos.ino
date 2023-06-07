//AULA 13 - DISPLAY 7 SEGMENT0S
//ESTUDO: LARISSA RAMOS

int segE = 7;
int segD = 8;
int segC = 9;
int segB = 13;
int segA = 12;
int segF = 13;
int segG = 10; 
int pot = A0;

void setup() {
pinMode (segE, OUTPUT);
pinMode (segD, OUTPUT);
pinMode (segC, OUTPUT);
pinMode (segB, OUTPUT);
pinMode (segA, OUTPUT);
pinMode (segF, OUTPUT);
pinMode (segG, OUTPUT);
pinMode (pot, INPUT);
}


void acende0()
{
 digitalWrite (segE, HIGH);
 digitalWrite (segD, HIGH);
 digitalWrite (segC, HIGH);
 digitalWrite (segB, HIGH);
 digitalWrite (segA, HIGH);
 digitalWrite (segF, HIGH);
 digitalWrite (segG, LOW);
}
void acende1()
{
 digitalWrite (segE, LOW);
 digitalWrite (segD, LOW);
 digitalWrite (segC, HIGH);
 digitalWrite (segB, HIGH);
 digitalWrite (segA, LOW);
 digitalWrite (segF, LOW);
 digitalWrite (segG, LOW);
}
void acende2()
{
 digitalWrite (segE, HIGH);
 digitalWrite (segD, HIGH);
 digitalWrite (segC, LOW);
 digitalWrite (segB, HIGH);
 digitalWrite (segA, HIGH);
 digitalWrite (segF, LOW);
 digitalWrite (segG, HIGH);
}
void acende3()
{
 digitalWrite (segE, LOW);
 digitalWrite (segD, HIGH);
 digitalWrite (segC, HIGH);
 digitalWrite (segB, HIGH);
 digitalWrite (segA, HIGH);
 digitalWrite (segF, LOW);
 digitalWrite (segG, HIGH);
}
void acende4()
{
 digitalWrite (segE, LOW);
 digitalWrite (segD, LOW);
 digitalWrite (segC, HIGH);
 digitalWrite (segB, HIGH);
 digitalWrite (segA, LOW);
 digitalWrite (segF, HIGH);
 digitalWrite (segG, HIGH);
}
void acende5()
{
 digitalWrite (segE, LOW);
 digitalWrite (segD, HIGH);
 digitalWrite (segC, HIGH);
 digitalWrite (segB, LOW);
 digitalWrite (segA, HIGH);
 digitalWrite (segF, HIGH);
 digitalWrite (segG, HIGH);
}
void acende6()
{
 digitalWrite (segE, HIGH);
 digitalWrite (segD, HIGH);
 digitalWrite (segC, HIGH);
 digitalWrite (segB, LOW);
 digitalWrite (segA, HIGH);
 digitalWrite (segF, HIGH);
 digitalWrite (segG, HIGH);
}
void acende7()
{
 digitalWrite (segE, LOW);
 digitalWrite (segD, LOW);
 digitalWrite (segC, HIGH);
 digitalWrite (segB, HIGH);
 digitalWrite (segA, HIGH);
 digitalWrite (segF, LOW);
 digitalWrite (segG, LOW);
}
void acende8()
{
 digitalWrite (segE, HIGH);
 digitalWrite (segD, HIGH);
 digitalWrite (segC, HIGH);
 digitalWrite (segB, HIGH);
 digitalWrite (segA, HIGH);
 digitalWrite (segF, HIGH);
 digitalWrite (segG, HIGH);
}
void acende9()
{
 digitalWrite (segE, LOW);
 digitalWrite (segD, HIGH);
 digitalWrite (segC, HIGH);
 digitalWrite (segB, HIGH);
 digitalWrite (segA, HIGH);
 digitalWrite (segF, HIGH);
 digitalWrite (segG, HIGH);
}
void loop() {
  int potRead = analogRead(pot);
  int potMap = (potRead, 0, 1023, 0, 9);

  switch (potMap){
    case 0:
      acende0() ;
      break;
    case 1:
      acende1();
      break;
    case 2:
      acende2();
      break;
    case 3:
      acende3() ;
      break;
    case 4:
      acende4();
      break;
    case 5:
      acende5();
      break;
    case 6:
      acende6() ;
      break;
    case 7:
      acende7();
      break;
    case 8:
      acende8();
      break;
    case 9:
      acende9() ;
      break;
    }

}
