/**************************************************************************************
    Easy calibration for Otto DIY - Adapted for Wemos D1
    Javier Isabel, 02/06/2015
    VERY IMPORTANT only calibrate one time per board!to avoid damage EEPROM memory
**************************************************************************************/


#include <Otto.h>
#include <Servo.h>
#include <Oscillator.h>
#include <EEPROM.h>

#define YL_BODYLEFT   D5
#define YR_BODYRIGHT  D6
#define RL_FOOTLEFT   D7
#define RR_FOOTRIGHT  D8
#define NOISESENSOR   -1
#define BUZZER        D4

Otto Otto;

void setup()
{
  Serial.begin(9600);

  delay(500);

  Serial.println("");
  Serial.println("## Otto Easy Calibration #########################");

  Serial.println("Otto.init");
  bool load_calibration = false;
  Otto.init(YL_BODYLEFT, YR_BODYRIGHT, RL_FOOTLEFT, RR_FOOTRIGHT, load_calibration, NOISESENSOR, BUZZER);
  Otto.sing(S_connection); //Otto wake up!

  Serial.println("Otto.setTrims");
  Otto.setTrims(-7, -4, -4, 7); //change Trim "offset values" gradually until Otto is completely straight (90º)

  // Otto.saveTrimsOnEEPROM(); //use only after completely straight(90º), delete this line after for further programming
}


void loop()  //test comparing before & after function
{
  Serial.println("Otto.home");
  Otto.home();

  delay(4000);
  /*
  Otto.updown(6, 500, BIG);
  delay(2000);
  
  Otto.walk(4,1800);
  delay(2000);
  */
}
