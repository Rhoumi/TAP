/* TAP CODE TEENSY 3.2 */

/*Created by Ralt144MI, feel free to stole it*/
#include <MIDI.h>

/* Motors pins */
int motor1pin1 = 18;
int motor1pin2 = 19;
int motor2pin1 = 20;
int motor2pin2 = 21;
/*Moto Speed*/
int motorspeed = 20;
/*Ratio Speed*/
int speedratio = 1;


/* Midi socket // 
MIDI_CREATE_INSTANCE(HardwareSerial, Serial1, MIDI);
*/

void OnNoteOn(byte channel, byte statOn, byte velocity)
{
    //Motor Speed for every note
    if (statOn == 0 or statOn == 12 or statOn == 24 or statOn == 36 or statOn == 48 or statOn == 60 or statOn == 72 or statOn == 84 or statOn == 96 or statOn == 108 or statOn == 120){ // your note number here
        speedratio = 1; //C0-10
        digitalWrite(motor1pin1, HIGH);
        digitalWrite(motor1pin2, LOW);
        analogWrite(A9, motorspeed*speedratio*2); 
        analogWrite(A8, motorspeed*speedratio*2); 
    }
    if (statOn == 1 or statOn == 13 or statOn == 25 or statOn == 37 or statOn == 49 or statOn == 61 or statOn == 73 or statOn == 85 or statOn == 97 or statOn == 109 or statOn == 121){ // your note number here
        speedratio = (1+(1/12)); //C#0-10
        digitalWrite(motor1pin1, HIGH);
        digitalWrite(motor1pin2, LOW);
        analogWrite(A9, motorspeed*speedratio); 
        analogWrite(A8, motorspeed*speedratio); 
    }
    if (statOn == 2 or statOn == 14 or statOn == 26 or statOn == 38 or statOn == 50 or statOn == 62 or statOn == 74 or statOn == 86 or statOn == 98 or statOn == 110 or statOn == 122){ // your note number here
        speedratio = (1+(2/12)); //D0-10
        digitalWrite(motor1pin1, HIGH);
        digitalWrite(motor1pin2, LOW);
        analogWrite(A9, motorspeed*speedratio); 
        analogWrite(A8, motorspeed*speedratio); 
    }
    if (statOn == 3 or statOn == 15 or statOn == 27 or statOn == 39 or statOn == 51 or statOn == 63 or statOn == 75 or statOn == 87 or statOn == 99 or statOn == 111 or statOn == 123){ // your note number here
        speedratio = (1+(3/12)); //D#0-10
        digitalWrite(motor1pin1, HIGH);
        digitalWrite(motor1pin2, LOW);
        analogWrite(A9, motorspeed*speedratio); 
        analogWrite(A8, motorspeed*speedratio); 
    }
    if (statOn == 4 or statOn == 16 or statOn == 28 or statOn == 40 or statOn == 52 or statOn == 64 or statOn == 76 or statOn == 88 or statOn == 100 or statOn == 112 or statOn == 124){ // your note number here
        speedratio = (1+(4/12)); //E0-10
        digitalWrite(motor1pin1, HIGH);
        digitalWrite(motor1pin2, LOW);
        analogWrite(A9, motorspeed*speedratio); 
        analogWrite(A8, motorspeed*speedratio); 
    }
    if (statOn == 5 or statOn == 17 or statOn == 29 or statOn == 41 or statOn == 53 or statOn == 65 or statOn == 77 or statOn == 89 or statOn == 101 or statOn == 113 or statOn == 125){ // your note number here
        speedratio = (1+(5/12)); //F0-10
        digitalWrite(motor1pin1, HIGH);
        digitalWrite(motor1pin2, LOW);
        analogWrite(A9, motorspeed*speedratio); 
        analogWrite(A8, motorspeed*speedratio); 
    }
    if (statOn == 6 or statOn == 18 or statOn == 30 or statOn == 42 or statOn == 54 or statOn == 66 or statOn == 78 or statOn == 90 or statOn == 102 or statOn == 114 or statOn == 126){ // your note number here
        speedratio = (1+(6/12)); //F#0-10
        digitalWrite(motor1pin1, HIGH);
        digitalWrite(motor1pin2, LOW);
        analogWrite(A9, motorspeed*speedratio); 
        analogWrite(A8, motorspeed*speedratio); 
    }
    if (statOn == 7 or statOn == 19 or statOn == 31 or statOn == 43 or statOn == 55 or statOn == 67 or statOn == 79 or statOn == 91 or statOn == 103 or statOn == 115 or statOn == 127){ // your note number here
        speedratio = (1+(7/12)); //G0-10
        digitalWrite(motor1pin1, HIGH);
        digitalWrite(motor1pin2, LOW);
        analogWrite(A9, motorspeed*speedratio); 
        analogWrite(A8, motorspeed*speedratio); 
    }
    if (statOn == 8 or statOn == 20 or statOn == 32 or statOn == 44 or statOn == 56 or statOn == 68 or statOn == 80 or statOn == 92 or statOn == 104 or statOn == 116){ // your note number here
        speedratio = (1+(8/12)); //G#0-9
        digitalWrite(motor1pin1, HIGH);
        digitalWrite(motor1pin2, LOW);
        analogWrite(A9, motorspeed*speedratio); 
        analogWrite(A8, motorspeed*speedratio); 
    }
    if (statOn == 9 or statOn == 21 or statOn == 33 or statOn == 45 or statOn == 57 or statOn == 69 or statOn == 81 or statOn == 93 or statOn == 105 or statOn == 117){ // your note number here
        speedratio = (1+(9/12)); //A0-9
        digitalWrite(motor1pin1, HIGH);
        digitalWrite(motor1pin2, LOW);
        analogWrite(A9, motorspeed*speedratio); 
        analogWrite(A8, motorspeed*speedratio); 
    }
    if (statOn == 10 or statOn == 22 or statOn == 34 or statOn == 46 or statOn == 58 or statOn == 70 or statOn == 82 or statOn == 94 or statOn == 106 or statOn == 118){ // your note number here
        speedratio = (1+(10/12)); //A#0-9
        digitalWrite(motor1pin1, HIGH);
        digitalWrite(motor1pin2, LOW);
        analogWrite(A9, motorspeed*speedratio); 
        analogWrite(A8, motorspeed*speedratio); 
    }
    if (statOn == 11 or statOn == 23 or statOn == 35 or statOn == 47 or statOn == 59 or statOn == 71 or statOn == 83 or statOn == 95 or statOn == 107 or statOn == 119){ // your note number here
        speedratio = (1+(11/12)); //B0-9
        digitalWrite(motor1pin1, HIGH);
        digitalWrite(motor1pin2, LOW);
        analogWrite(A9, motorspeed*speedratio); 
        analogWrite(A8, motorspeed*speedratio); 
    }
}

void OnNoteOff(byte channel, byte note, byte velocity) {
  digitalWrite(motor1pin1, LOW);  //Réflechir à si c'est pertinent ?
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, LOW);  // Any Note-Off turns off the motors
  analogWrite(A9, motorspeed); //Reset Speed
  analogWrite(A8, motorspeed); //Reset Speed
}

void setup() {
 /*MIDI
  MIDI.begin(MIDI_CHANNEL_OMNI);
  Serial.begin(57600);
  Serial.println("MIDI Input Test");
 */ 
 usbMIDI.setHandleNoteOn(OnNoteOn);
 usbMIDI.setHandleNoteOff(OnNoteOff);
 //MOTORS
  // Motors pins
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
  //(Motor Speed Control pins
  pinMode(A9, OUTPUT); 
  pinMode(A8, OUTPUT);
 //
 
}

void loop() {
  usbMIDI.read();  //reading...
  /*
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  delay(3000);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);
  delay(3000);
  */
}
