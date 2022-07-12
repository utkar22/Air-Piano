const int buzzer = 10;  //buzzer to arduino pin 10
// #define T_C 2093
// #define T_D 2349.300
// #define T_E 2637.000
// #define T_F 2793.800
// #define T_G 3136.000
// #define T_A 3520.000
// #define T_B 3951.100
// #define T_CC 4186.00

#define T_C 1046.5
#define T_D 1174.66
#define T_E 1318.51
#define T_F 1396.91     //final freq ( nice one :D )
#define T_G 1567.98
#define T_A 1760.00
#define T_B 1975.53
#define T_CC 2093.00


// #define T_C 1047
// #define T_CD 1109
// #define T_D 1175
// #define T_DE 1245
// #define T_E 1319
// #define T_F 1397
// #define T_FG 1480 
// #define T_G 1568
// #define T_GA 1661
// #define T_A 1760
// #define T_B 1976
// #define T_CC 2093


#define echoPin 2 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 3 //attach pin D3 Arduino to pin Trig of HC-SR04

// defines variables
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement

//mary had a little lamb------------------------------------------------------------------------------------------------

void mary(){

// Play 'Mary Had a Little Lamb' with variables for notes, tone duration, and rest length

//Create the notes in the song as variables to speed up the coding process
int C = 1046; 
int D = 1174;
int E = 1318;
int G = 1567;
int lednos[]={14,15,16,17,18,19,4,5};
  


int note = 500; //the duration of the tone that is playing
int rest = 20;  //the duration of the rest between the same notes in the song

  	//C is 14, D is 15, E is 16, G is 18
    digitalWrite(16,HIGH);
    tone(buzzer,E); //E
 	  delay(note);
  	digitalWrite(16,LOW);
    digitalWrite(15,HIGH);
    tone(buzzer,D); //D
    delay(note);
    digitalWrite(15,LOW);
    digitalWrite(14,HIGH);
    tone(buzzer,C); //C
    delay(note);
    digitalWrite(14,LOW);
    digitalWrite(15,HIGH);
    tone(buzzer,D); //D
    delay(note);
    digitalWrite(15,LOW);

    digitalWrite(16,HIGH);
    tone(buzzer,E); //E
    delay(note);
    digitalWrite(16,LOW);
    noTone(buzzer);   //Pause between the same 2 notes so it sounds more like pressing the key again
    delay(rest);
    digitalWrite(16,HIGH);
    tone(buzzer,E); //E
    delay(note);
    digitalWrite(16,LOW);
    noTone(buzzer);   //Pause between the same 2 notes so it sounds more like pressing the key again
    delay(rest);
    digitalWrite(16,HIGH);
    tone(buzzer,E); //E
    delay(note);
    digitalWrite(16,LOW);
    
    digitalWrite(15,HIGH);
    tone(buzzer,D); //D
    delay(note);
    digitalWrite(15,LOW);
    noTone(buzzer);   //Pause between the same 2 notes so it sounds more like pressing the key again
    delay(rest);
    digitalWrite(15,HIGH);
    tone(buzzer,D); //D
    delay(note);
    digitalWrite(15,LOW);
    noTone(buzzer);   //Pause between the same 2 notes so it sounds more like pressing the key again
    delay(rest);
    digitalWrite(15,HIGH);
    tone(buzzer,D); //D
    delay(note);
    digitalWrite(15,LOW);

    digitalWrite(16,HIGH);
    tone(buzzer,E); //E
    delay(note);
    digitalWrite(16,LOW);
    digitalWrite(18,HIGH);
    tone(buzzer,G); //G
    delay(note);
    digitalWrite(18,LOW);
    noTone(buzzer);   //A pause between the same 2 notes makes it sound more like pressing the key again
    delay(rest);
    digitalWrite(18,HIGH);
    tone(buzzer,G); //G
    delay(note);
    digitalWrite(18,LOW);
    
    digitalWrite(16,HIGH);
    tone(buzzer,E); //E
    delay(note);
    digitalWrite(16,LOW);
    digitalWrite(15,HIGH);
    tone(buzzer,D); //D
    delay(note);
    digitalWrite(15,LOW);
    digitalWrite(14,HIGH);
    tone(buzzer,C); //C
    delay(note);
    digitalWrite(14,LOW);
    digitalWrite(15,HIGH);
    tone(buzzer,D); //D
    delay(note);
    digitalWrite(15,LOW);
    digitalWrite(16,HIGH);
    tone(buzzer,E); //E
    delay(note);
    digitalWrite(16,LOW);
    noTone(buzzer);   //Pause between the same 2 notes so it sounds more like pressing the key again
    delay(rest);
    digitalWrite(16,HIGH);
    tone(buzzer,E); //E
    delay(note);
    digitalWrite(16,LOW);
    noTone(buzzer);   //Pause between the same 2 notes so it sounds more like pressing the key again
    delay(rest);
    digitalWrite(16,HIGH);
    tone(buzzer,E); //E
    delay(note);
    digitalWrite(16,LOW);
    noTone(buzzer);   //Pause between the same 2 notes so it sounds more like pressing the key again
    delay(rest);
    digitalWrite(16,HIGH);    
    tone(buzzer,E); //E
    delay(note);
    digitalWrite(16,LOW);
    digitalWrite(15,HIGH);
    tone(buzzer,D); //D
    delay(note);
    digitalWrite(15,LOW);
    noTone(buzzer);   //Pause between the same 2 notes so it sounds more like pressing the key again
    delay(rest);
    digitalWrite(15,HIGH);
    tone(buzzer,D); //D
    delay(note);
    digitalWrite(15,LOW);
    digitalWrite(16,HIGH);
    tone(buzzer,E); //E
    delay(note);
    digitalWrite(16,LOW);
    digitalWrite(15,HIGH);
    tone(buzzer,D); //D
    delay(note);
    digitalWrite(15,LOW);
    digitalWrite(14,HIGH);
    tone(buzzer,C); //C
    delay(note);
    digitalWrite(14,LOW);
    noTone(buzzer);   
}



//twinkle-----------------------------------------------------------------------------------------------------

int TwinkleLength = 15; // the number of notes

//twinkle twinkle little star
char twinklenotes[] = "ccggaag ffeeddc ggffeed ggffeed ccggaag ffeeddc "; // a space represents a rest
int twinklebeats[] = { 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 4 };
int twinkletempo = 300;

void playTwinkleTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(buzzer, HIGH);
    delayMicroseconds(tone);
    digitalWrite(buzzer, LOW);
    delayMicroseconds(tone);
  }
}

void playTwinkleNote(char note, int duration) {
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
  int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 };
  int lednos[]={14,15,16,17,18,19,4,5};
  
  // play the tone corresponding to the note name
  for (int i = 0; i < 8; i++) {
    if (names[i] == note) {
      digitalWrite(lednos[i],HIGH);
      playTwinkleTone(tones[i], duration);
      digitalWrite(lednos[i],LOW);
    }
  }
}

void twinkle() {
  for (int i = 0; i < TwinkleLength; i++) {
    if (twinklenotes[i] == ' ') {
      delay(twinklebeats[i] * twinkletempo); // rest
    } else {
      playTwinkleNote(twinklenotes[i], twinklebeats[i] * twinkletempo);
    }
    
    // pause between notes
    delay(twinkletempo / 2); 
  }
}

// happy birthday ----------------------------------------------------------------------------



int BdayLength = 28; // the number of notes
char Bdaynotes[] = "GGAGcB GGAGdc GGxecBA yyecdc";
int Bdaybeats[] = {2,2,8,8,8,16,1,2,2,8,8,8,16,1,2,2,8,8,8,8,16,1,2,2,8,8,8,16};
int Bdaytempo = 200;// time delay between notes 

void playBdayTone(int tone, int duration) {
for (long i = 0; i < duration * 1000L; i += tone * 2) {
   digitalWrite(buzzer, HIGH);
   delayMicroseconds(tone);
   digitalWrite(buzzer, LOW);
   delayMicroseconds(tone);
}
}

void playBdayNote(char note, int duration) {
char names[] = {'C', 'D', 'E', 'F', 'G', 'A', 'B',           

                 'c', 'd', 'e', 'f', 'g', 'a', 'b',

                 'x', 'y' };
 int lednos[]={14,15,16,17,18,19,4,5};

int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014,

                 956,  834,  765,  593,  468,  346,  224,

                 655 , 715 };

int SPEE = 5;

// play the tone corresponding to the note name

for (int i = 0; i < 17; i++) {

   if (names[i] == note) {
     digitalWrite(lednos[i]%7,HIGH);
     int newduration = duration/SPEE;
     playBdayTone(tones[i], newduration);
     digitalWrite(lednos[i]%7,LOW);
   }
}
}


void bday() {
for (int i = 0; i < BdayLength; i++) {
   if (Bdaynotes[i] == ' ') {
     delay(Bdaybeats[i] * Bdaytempo); // delay between notes
   } else {
     playBdayNote(Bdaynotes[i], Bdaybeats[i] * Bdaytempo);
   }
   // time delay between notes
   delay(Bdaytempo);
}
}

// jingle bells ----------------------------------------------------------------------------


int Jinglelength = 26;
char Jinglenotes[] = "eeeeeeegcde fffffeeeeddedg";
int Jinglebeats[] = { 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2};
int Jingletempo = 300;

void playJingleTone(int tonee, int duration) {
  for (long i = 0; i < duration * 1000L; i += tonee * 2) {
    //digitalWrite(buzzer, HIGH);
    tone(buzzer,tonee);
    delayMicroseconds(tonee);
    //digitalWrite(buzzer, LOW);
    noTone(buzzer);
    delayMicroseconds(tonee);
  }
}
void playJingleNote(char note, int duration) {
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
  int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 };
  int lednos[]={14,15,16,17,18,19,4,5};
  // play the tone corresponding to the note name
  for (int i = 0; i < 8; i++) {
    if (names[i] == note) {
      digitalWrite(lednos[i],HIGH);
      playJingleTone(tones[i], duration);
      digitalWrite(lednos[i],LOW);
    }
  }
}
void jingle() {
  for (int i = 0; i < Jinglelength; i++) {
    if (Jinglenotes[i] == ' ') {
      delay(Jinglebeats[i] * Jingletempo); // rest
    } else {
      playJingleNote(Jinglenotes[i], Jinglebeats[i] * Jingletempo);
    }
    
    // pause between notes
    delay(Jingletempo / 2); 
  }
}


int buttonState1=0;
int buttonState2=0;
int buttonState3=0;

void setup() {

  pinMode(buzzer, OUTPUT);  // Set buzzer - pin 10 as an output
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  pinMode(7,INPUT);
  // initialize the LED pins as an output  
  pinMode(14,OUTPUT);
  pinMode(15,OUTPUT);
  pinMode(16,OUTPUT);
  pinMode(17,OUTPUT);
  pinMode(18,OUTPUT);
  pinMode(19,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  
  Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); // print some text in Serial Monitor
  Serial.println("with Arduino UNO R3");
  

}


void loop() {


  buttonState1 = digitalRead(7);
  buttonState2 = digitalRead(8);
  buttonState3 = digitalRead(9);
  Serial.print(buttonState1);
  Serial.print(buttonState2);
  Serial.print(buttonState3);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState1 == HIGH) {
    twinkle();
  } else if(buttonState2 == HIGH){
    jingle();
  } else if(buttonState3 == HIGH){
    mary();
  } else {

  // Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  if(distance>=70)
  {
    noTone(buzzer);
    digitalWrite(14,LOW);
    digitalWrite(15,LOW);
    digitalWrite(16,LOW);
    digitalWrite(17,LOW);
    digitalWrite(18,LOW);
    digitalWrite(19,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    
  }
  else if (distance <=7)
  {
    tone(buzzer, T_C);  // Send 1KHz sound signal...
    digitalWrite(14,HIGH);
    digitalWrite(15,LOW);
    digitalWrite(16,LOW);
    digitalWrite(17,LOW);
    digitalWrite(18,LOW);
    digitalWrite(19,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    
    
  }
  else if(distance>7 && distance<=14)
  {
    tone(buzzer, T_D);  // Send 1KHz sound signal...
    digitalWrite(14,LOW);
    digitalWrite(15,HIGH);
    digitalWrite(16,LOW);
    digitalWrite(17,LOW);
    digitalWrite(18,LOW);
    digitalWrite(19,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    
    
  }
  else if(distance>14 && distance<=21)
  {
    tone(buzzer, T_E);  // Send 1KHz sound signal...
    digitalWrite(14,LOW);
    digitalWrite(15,LOW);
    digitalWrite(16,HIGH);
    digitalWrite(17,LOW);
    digitalWrite(18,LOW);
    digitalWrite(19,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    
    
  }
  else if(distance>21 && distance<=28)
  {
    tone(buzzer, T_F);  // Send 1KHz sound signal...
    digitalWrite(14,LOW);
    digitalWrite(15,LOW);
    digitalWrite(16,LOW);
    digitalWrite(17,HIGH);
    digitalWrite(18,LOW);
    digitalWrite(19,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    
    
  }
  else if(distance>28 && distance<=35)
  {
    tone(buzzer, T_G);  // Send 1KHz sound signal...
    digitalWrite(14,LOW);
    digitalWrite(15,LOW);
    digitalWrite(16,LOW);
    digitalWrite(17,LOW);
    digitalWrite(18,HIGH);
    digitalWrite(19,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    
    
  }
  else if(distance>35 && distance<=42)
  {
    tone(buzzer, T_A);  // Send 1KHz sound signal...
    digitalWrite(14,LOW);
    digitalWrite(15,LOW);
    digitalWrite(16,LOW);
    digitalWrite(17,LOW);
    digitalWrite(18,LOW);
    digitalWrite(19,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    
    
  }
  else if(distance>42 && distance<=49)
  {
    tone(buzzer, T_B);  // Send 1KHz sound signal...
    digitalWrite(14,LOW);
    digitalWrite(15,LOW);
    digitalWrite(16,LOW);
    digitalWrite(17,LOW);
    digitalWrite(18,LOW);
    digitalWrite(19,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    
    
  }
  else if(distance>49 && distance<=56)
  {
    tone(buzzer, T_CC);  // Send 1KHz sound signal...
    digitalWrite(14,LOW);
    digitalWrite(15,LOW);
    digitalWrite(16,LOW);
    digitalWrite(17,LOW);
    digitalWrite(18,LOW);
    digitalWrite(19,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    
    
  }
  }
  delay(200);
}

