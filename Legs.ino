#define LegPin 5

#define LegMinPos 0
#define LegNeutralPos 90
#define LegMaxPos 90

Servo ServoLegs;

void init_wings() {
  ServoLegs.attach(LegPin);  
  ServoLegs.write(LegNeutralPos);
  //Queue(500,EarAction,0);
  //Queue(3000,EarAction,2);
}