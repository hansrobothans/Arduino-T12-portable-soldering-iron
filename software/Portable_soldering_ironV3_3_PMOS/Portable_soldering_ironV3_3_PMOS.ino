/*ELECTRONOOBS portable soldering iron V3.0 | Changed on 15/11/2018 by ELECTRONOOBS
Tutorial here: https://www.electronoobs.com/eng_arduino_tut49.php
Scheamtic here: https://www.electronoobs.com/eng_arduino_tut49_sch1.php 
Code: https://www.electronoobs.com/eng_arduino_tut49_code1.php 
Gerber files: https://www.electronoobs.com/eng_arduino_tut49_gerber1.php
3D case: https://www.electronoobs.com/eng_arduino_tut49_stl1.php  
*/

//This are the bytes for the EN logo
static const unsigned char PROGMEM  logo_EN[] =
{ 
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00111111, B11111111, B00000000, B00011110, B00011111, B00111111, B11001111, B11110011, B10000001, B11100000, B01111111, B10011111, B11000111, B00111100, B11001111, B11110000,
B00110011, B11111111, B11000000, B01111110, B00011111, B00111111, B11001111, B11110011, B10000001, B11110000, B01111111, B10011000, B01100111, B00111100, B11001100, B11110000,
B00110001, B11111111, B11000000, B11111110, B00011111, B00110000, B00001100, B00110011, B10000001, B10111000, B01110000, B00011000, B01100111, B00111100, B11001100, B00000000,
B00110011, B11111111, B11000000, B11111110, B00010001, B00110000, B00001100, B00110011, B10000001, B10011100, B01110000, B00011000, B11000111, B00110010, B11001100, B00000000,
B00111111, B11111111, B00000000, B11111110, B00010001, B00111111, B11001100, B00110011, B10000001, B10001110, B01111111, B10011111, B00000111, B00110010, B11001100, B00000000,
B00111111, B00000000, B00000000, B11111110, B00011001, B00111111, B11001100, B00110011, B10000001, B10001110, B01111111, B10011011, B00000111, B00110001, B11001100, B11110000,
B00111111, B00000000, B00000000, B11111011, B00011111, B00000000, B11001100, B00110011, B00000001, B10011100, B01110000, B00011011, B10000111, B00110001, B11001100, B11110000,
B00111111, B00000000, B00000000, B11111011, B00011111, B00000000, B11001100, B00110011, B10000001, B10110000, B01110000, B00011001, B11000111, B00110001, B11001100, B00110000,
B00111111, B00000000, B00000000, B11111011, B00011111, B00111111, B11001111, B11110011, B11111001, B11110000, B01111111, B10011000, B11000111, B00110000, B11001100, B11110000,
B00111111, B00000000, B00000000, B11111011, B00011111, B00111111, B11001111, B11110011, B11111001, B11100000, B01111111, B10011000, B01100111, B00110000, B11001111, B11110000,
B00111111, B11111111, B00000000, B11111011, B00011111, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00111111, B11111111, B11000000, B11111011, B00011111, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00111111, B10011111, B11000000, B11111011, B00011111, B00000000, B00000000, B00000000, B00011100, B11111111, B00111111, B11001111, B00110000, B00000000, B00000000, B00000000,
B00111111, B10011111, B11000000, B11111000, B11011111, B00000000, B00000000, B00000000, B00011100, B11111111, B00111111, B11001111, B00110000, B00000000, B00000000, B00000000,
B00111111, B11111111, B11000000, B11111000, B11011111, B00000000, B00000000, B00000000, B00011100, B11000011, B00110000, B11001111, B00110000, B00000000, B00000000, B00000000,
B00111111, B11111111, B00000000, B11111000, B11011111, B00000000, B00000000, B00000000, B00011100, B11000011, B00110000, B11001111, B10110000, B00000000, B00000000, B00000000,
B00111111, B00000000, B00000000, B11111000, B11011111, B00000000, B00000000, B00000000, B00011100, B11001110, B00110000, B11001111, B10110000, B00000000, B00000000, B00000000,
B00111111, B00000000, B00000000, B11111000, B11011111, B00000000, B00000000, B00000000, B00011100, B11111000, B00110000, B11001111, B01110000, B00000000, B00000000, B00000000,
B00111111, B00000000, B00000000, B10001000, B11011111, B00000000, B00000000, B00000000, B00011100, B11111000, B00110000, B11001111, B01110000, B00000000, B00000000, B00000000,
B00111111, B00000000, B00000000, B10001000, B00011111, B00000000, B00000000, B00000000, B00011100, B11001100, B00110000, B11001111, B00110000, B00000000, B00000000, B00000000,
B00111111, B00000000, B00000000, B10011000, B01111111, B00000000, B00000000, B00000000, B00011100, B11000110, B00111111, B11001111, B00110000, B00000000, B00000000, B00000000,
B00111111, B11111111, B00000000, B11111000, B01111111, B00000000, B00000000, B00000000, B00011100, B11000011, B00111111, B11001111, B00110000, B00000000, B00000000, B00000000,
B00110011, B10000011, B11000000, B11111000, B01111111, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00100011, B10000011, B11000000, B11111000, B01111111, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00001111, B11000111, B11000000, B11111000, B01111111, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00111111, B11111111, B00000000, B11111000, B00011111, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000
  };


//Bytes for the sleep mode icon toggle with START icon
static const unsigned char PROGMEM  press_logo[] =
{ 
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B11111001, B11110011, B11100111, B10001111, B10000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B10000000, B01000010, B00100100, B01000010, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B10000000, B01000010, B00100100, B01000010, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B11111000, B01000011, B11100111, B10000010, B00111111, B11111111, B11111111, B11111111, B11111100, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00001000, B01000010, B00100101, B00000010, B00000000, B00000000, B00000000, B00000000, B00000010, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00001000, B01000010, B00100100, B10000010, B00000000, B00000000, B00000000, B00000000, B00000001, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B11111000, B01000010, B00100100, B01000010, B00000000, B00000000, B00000000, B00000000, B00000000, B10000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B11000000, B11000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B01100001, B10000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00111111, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00001100, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00111110, B00000000, B00000000, B00000000, B00000000, B00011111, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11100000,
B00000000, B00000000, B00111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, 
B00000000, B00000001, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, 
B00000000, B00000000, B00111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11100000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11100000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00111110, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000
  };
  
//Bytes for the sleep mode icon toggle with CONFIG icon
static const unsigned char PROGMEM no_press_logo[] =
{ 
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00111110, B00000000, B00000000, B00000000, B00000000, B00011111, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11100000,
B00000000, B00000000, B00111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, 
B00000000, B00000001, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, 
B00000000, B00000000, B00111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11100000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11100000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00111110, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00001100, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00111111, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B11111001, B11110010, B00100111, B11001001, B11110000, B00000000, B00000000, B00000000, B00000000, B01100001, B10000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B10000001, B00010011, B00100100, B00001001, B00000000, B00000000, B00000000, B00000000, B00000000, B11000000, B11000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B10000001, B00010011, B00100111, B10001001, B00000000, B00000000, B00000000, B00000000, B00000000, B10000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B10000001, B00010010, B10100100, B00001001, B00000000, B00000000, B00000000, B00000000, B00000001, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B10000001, B00010010, B01100100, B00001001, B00110011, B11111111, B11111111, B11111111, B11111110, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B10000001, B00010010, B01100100, B00001001, B00010000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B11111001, B11110010, B00100100, B00001001, B11110000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000
};



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////YOU COULD CHANGE THIS VALUES IF YOU NEED TO//////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Editable Variables (change these values below to fit your project)
String Version = "Version 3.3";
float min_temp = 200;                            //This is the minimum temperature that the iron could get
float max_temp = 500;                            //This is the maximum temperature that the iron could get
float Delay=300;                                 //Refresh rate. This is the time in ms the loop runs (PID+temperature read)
int   setpoint = 280;                            //Temperature setpoint initial value
int   sleeptime = 1;                             //Wait to enter into sleep mode. Time in minutes
int   max_sleeptime = 10;                          //This is the maximum sleep time you could set the iron
int   sleeptime_adress = 2;
int   setpoint_adress_low = 3;
int   setpoint_adress_mid = 4;
int   setpoint_adress_high = 5;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//First include libraries
#include "max6675.h"              //Downlaod it here: https://www.electronoobs.com/eng_arduino_max6675.php
#include <SPI.h>                   
#include <Wire.h>
#include <Adafruit_GFX.h>         //Downlaod it here: https://www.electronoobs.com/eng_arduino_Adafruit_GFX.php
#include <Adafruit_SSD1306.h>     //Downlaod it here: https://www.electronoobs.com/eng_arduino_Adafruit_SSD1306.php
#include <FastPID.h>              //Dwonload it here: https://www.electronoobs.com/eng_arduino_FastPID.php
#include <EEPROM.h>
#include <math.h> 

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//OLED setup
#define OLED_RESET 8
Adafruit_SSD1306 display(OLED_RESET);
#define NUMFLAKES 5
#define XPOS 0
#define YPOS 1
#define DELTAY 2
#if (SSD1306_LCDHEIGHT != 32)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Inputs and outputs
int MOSFET_pin = 3;     //Pin that goes to the BJT that drives the n-MSOFET gate
int increase_pin = 7;   //Top button of the board (temperature increase)
int decrease_pin = 4;   //Bottomop button of the board (temperature decrease)
int vibrate = A1;       //Input from the vibrations sensor
int temp_sense = A0;    //Input from OPAMP (temperature read from thermocouple) My OPAMP gain is 201 (R1 = 1k, R2 = 200k)
int buzzer = 5;         //Pin for the buzzer

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*PID variables. Fine tune this values. Start with P=1 and D and I = 0. Start increasing till you get good results*/
float Kp=7.58, Ki=0.050, Kd=0.86, Hz=10;          /*My values: Kp=7.98, Ki=0.055, Kd=0.86, Hz=10;*/
int output_bits = 8;                              //With 8 bits, maximum PID output is 255, and that's waht we need for analogWrite
bool output_signed = false;
FastPID myPID(Kp, Ki, Kd, Hz, output_bits, output_signed);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Other variables used in the code
float temperature_read;
int logo_slide =128;
int temp_to_print = 0;
int i = 0;
int i_prev = 0;
bool set_temp_made = false;
bool sleep_time_set = false;
bool sleep_enabeled = true;
unsigned long sleep_time_detect = 0;   


int settings = 0;

     
/*Time counters*/
int sleep_out_count = 0;
unsigned int temp_change_count = 0;
int both_pressed_count = 0;
int sleeplogo_count = 0;
unsigned long sleepmode_vibrate_counter = 0;
unsigned long previousMillis_sleep = 0;
unsigned long currentMillis = 0;
unsigned long previousMillis = 0; 
int set_temp_slide_counter = 32;
int set_temp_slide_counter_up = -32;
int setpoint_high = 0;
int setpoint_mid = 0;
int setpoint_low = 0;
/*MODES*/
bool sleepmode = true;
bool temp_change = false;
bool sleepmode_vibrate = false;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ADC sampling variables
double CurrentTemp;
int adc = 0;
#define ADC_MULTISAMPLING 5
#define ADC_MULTISAMPLING_SAMPLES (1 << ADC_MULTISAMPLING)
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void setup() {
  if( EEPROM.read(1) != 1)
  {
    EEPROM.write(sleeptime_adress, sleeptime);
    write_setpoint_to_EEPROM();    
    EEPROM.write(1, 1);
  }
  
  pinMode(MOSFET_pin,OUTPUT);
  pinMode(increase_pin,INPUT);
  pinMode(decrease_pin,INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(vibrate,INPUT);
  pinMode(temp_sense,INPUT);
  /*Port C of the ATMEGA328 is for pins A0 to A5 so we eneable port C to be able to generate interrupts
  With PCMSK1 |= B00000010; we set PCINT12 (pin A1) to generate interruptions at pin state change. The vibrations
  sensor will give a low pulse each time it vibrates*/
  PCICR |= B00000010;    //enable port C o have interrupts                                                 
  PCMSK1 |= B00000010;  //Set pin A1 (vibration sensor) trigger an interrupt on state change.

  digitalWrite(MOSFET_pin,LOW);     //With LOW we turn OFF the BJT so the P-Channel MOSFET is OFF
  digitalWrite(buzzer,LOW);         //Start with buzzer turned OFF 
  
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // initialize with the I2C addr 0x3C (for the 128x32)  
  delay(200);
  /*Make a small buzzer beep*/
  analogWrite(buzzer,200);
  delay(100);
  analogWrite(buzzer,LOW);
  
  display.clearDisplay();
  while(logo_slide >= 0)  //Here we slide the ELECTRONOOBS logo from right to left
  {
    display.clearDisplay();
    display.drawBitmap(logo_slide, 0,  logo_EN, 128, 32, 1);
    display.display();
    logo_slide = logo_slide-8;
    delayMicroseconds(700);
  }
  display.drawBitmap(0, 0,  logo_EN, 128, 32, 1);
  display.display();
  delay(800);


  display.clearDisplay();             //Clear the display
  display.setTextSize(1);             //Set text size
  display.setTextColor(WHITE);        //Choose color
  display.setCursor(25,11);           //Select where to print
  /*Now we print the version*/
  display.print(Version);           
  display.display();        
  delay(800);

  display.clearDisplay();
  display.drawBitmap(0, 0,  no_press_logo, 128, 32, 1);
  display.display();  

  sleepmode_vibrate_counter = millis();

  sleeptime = EEPROM.read(sleeptime_adress);
  setpoint_high = EEPROM.read(setpoint_adress_low);
  setpoint_mid = EEPROM.read(setpoint_adress_mid);
  setpoint_low = EEPROM.read(setpoint_adress_high);
  setpoint = setpoint_high + setpoint_mid + setpoint_low;
  
}//end of setup loop

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////VOID LOOP STARTS//////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void loop() {  
  
  if(sleeptime == 0)
  {
    sleep_enabeled = false;
  }
  sleep_time_detect = sleeptime * 60000;
  currentMillis = millis(); //First, we save the current elapsed time in milliseconds
  /*This below is the main loop where the PID and temeperature read are done*/
  if(  (currentMillis - previousMillis >= Delay) &&  (!sleepmode && !temp_change && !sleepmode_vibrate))
  { 
    previousMillis += Delay;  
    digitalWrite(MOSFET_pin, LOW);          //With LOW we turn OFF the BJT so the P-Channel MOSFET is OFF
    delayMicroseconds(300);                 //Add a small delay so the voltage drop settles      
    temperature_read = read_temperature();  //Use read_temperature function (find function below) to read temperature

    /*PID part*/
    uint32_t before, after;
    before = micros();
    uint8_t output = myPID.step(setpoint, temperature_read);  
    after = micros();
    /*END of PID part*/
    
    analogWrite(MOSFET_pin, output);       /*Finally we write the PWM signal to the n-MOSFET
    Since we have a BJT driver at the n-MOSFET gate, we invert the signal (255 - output) where
    output is the PWM value from the PID control*/
      
    temp_to_print = map_temp_to_print(temperature_read); /*This function is only for visual effect
    The temperature oscillates a lot a few degrees (2-3ºC), so this function will only print values 
    with 5 to 5 degrees steps*/
    if(temp_to_print < 500)
    {
    display.clearDisplay();             //Clear the display
    display.setTextSize(2);             //Set text size
    display.setTextColor(WHITE);        //Choose color
    display.setCursor(10,0);            //Select where to print
    /*Now we print the setpoint and real temperature on the OLED screen*/
    display.print("Set: ");             
    display.setCursor(70,0);
    display.print(setpoint,1);        //Print setpoint
    display.setCursor(10,18);
    display.print("Temp: ");
    display.setCursor(70,18);
    display.print(temp_to_print,1);   //Print real temperature
    display.display();                //This functions will display the data
    }

    if(temp_to_print > 500)
    {
      display.clearDisplay();           //Clear the display
    display.setTextSize(2);             //Set text size
    display.setTextColor(WHITE);        //Choose color
    display.setCursor(10,0);            //Select where to print
    /*Now we print the setpoint and real temperature on the OLED screen*/
    display.print("Set: ");             
    display.setCursor(70,0);
    display.print(setpoint,1);        //Print setpoint
    display.setCursor(10,18);
    display.print("Tip ERROR");   
    display.display();                //This functions will display the data
    }
    
    
  
  }//end of PID and temperature read loop






  
  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  /*Now we detect push buttons and get out of sleep mode*/
  if((digitalRead(increase_pin)) &&  (sleepmode || sleepmode_vibrate) && settings == 0)
  {
    previousMillis_sleep = currentMillis; /*We reset the vibration sleep counter just in case
    If any button is pressed, that means we don't want sleep mode*/
    if(sleep_out_count > 800)
    {
      analogWrite(buzzer,200);
      delay(70);
      analogWrite(buzzer,LOW);
      sleepmode = false;
      sleepmode_vibrate = false;
      sleepmode_vibrate = false;
      sleep_out_count = 0;
      delay(100);
    }
    sleep_out_count = sleep_out_count + 1;      
  }//end of dig read of buttons and SLEEPMODE activated





  
  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  /*If decrease pin is low and increase is high, we add 10 to setpoint*/
  if(digitalRead(increase_pin)  &&  !digitalRead(decrease_pin) && !sleepmode  && !sleepmode_vibrate)
  {
    previousMillis_sleep = currentMillis; /*We reset the vibration sleep counter just in case
    If any button is pressed, that means we don't want sleep mode*/
    if(sleep_out_count > 1000)
    {
      digitalWrite(MOSFET_pin,LOW);      //With LOW we turn OFF the BJT so the P-Channel MOSFET is OFF
      setpoint = setpoint + 10;
      slide_set_temp_down(setpoint);
      temp_change = true;
      sleep_out_count = 0;
      if (setpoint > max_temp)
      {
       setpoint = max_temp;  
      }      
      display.clearDisplay();
      display.setTextSize(3);
      display.setTextColor(WHITE);
      display.setCursor(35,4);
      display.print(setpoint); 
      display.display();   
    }
    sleep_out_count = sleep_out_count + 1;      
  }//increase temp





  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  /*If decrease pin is high and increase is low, we substract 10 to setpoint*/
  if(!digitalRead(increase_pin)  && digitalRead(decrease_pin) && !sleepmode && !sleepmode_vibrate)
  {
    previousMillis_sleep = currentMillis; /*We reset the vibration sleep counter just in case
    If any button is pressed, that means we don't want sleep mode*/
    if(sleep_out_count > 1000)
    {
      digitalWrite(MOSFET_pin,LOW);     //With LOW we turn OFF the BJT so the P-Channel MOSFET is OFF     
      setpoint = setpoint - 10;
      slide_set_temp_up(setpoint);
      temp_change = true;      
      sleep_out_count = 0;
      
      if (setpoint < min_temp)
      {
        setpoint = min_temp;  
      }
      display.clearDisplay();
      display.setTextSize(3);
      display.setTextColor(WHITE);
      display.setCursor(35,4);
      display.print(setpoint);   
      display.display(); 
    }
    sleep_out_count = sleep_out_count + 1;      
  }//decrease temp






  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  /*If both buttons are LOW, we wait and then EXIT the temp change mode*/
  if(!digitalRead(increase_pin) && !digitalRead(decrease_pin) && temp_change)
  {
    if(temp_change_count > 15000)
    {
      temp_change = false;
      temp_change_count = 0;
      set_temp_made = false;
      previousMillis_sleep = currentMillis;
    }
    temp_change_count = temp_change_count + 1;
  }



  
  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  /*If both buttons are HIGH for a while, we enter sleep mode*/
  if(digitalRead(increase_pin) && digitalRead(decrease_pin) && !sleepmode)
  {
    if(both_pressed_count > 5000)
    {
      analogWrite(buzzer,200);
      delay(70);
      analogWrite(buzzer,LOW);
      sleepmode=true;
      digitalWrite(MOSFET_pin,LOW);
      display.clearDisplay();
      display.setTextSize(3);
      display.setTextColor(WHITE);
      display.setCursor(20,4);
      display.print("SLEEP");   
      display.display(); 
      delay(2000);
      both_pressed_count=0;
    }
    both_pressed_count = both_pressed_count +1;
  }



  

  ////////////////////////////////////////////////////Sleep logo toggle////////////////////////////////////////////////////////////////
  if((sleepmode || sleepmode_vibrate) && settings == 0)
  { 
    adc = 0;
    previousMillis_sleep = currentMillis;
    if(sleeplogo_count > 5000 && sleeplogo_count < 5005)
    {
      display.clearDisplay();
      display.drawBitmap(0, 0,  press_logo, 128, 32, 1);
      display.display();        
    }
    if(sleeplogo_count > 10000 && sleeplogo_count < 10005)
    {
      display.clearDisplay();
      display.drawBitmap(0, 0,  no_press_logo, 128, 32, 1);
      display.display();
      sleeplogo_count = 0;       
    }
    sleeplogo_count = sleeplogo_count + 1;         
  }//end sleepmode


  



  //////////////////////////////////////No movement Sleep mode///////////////////////////////////////////////////////////////////////////
  if( ( (currentMillis - previousMillis_sleep >= sleep_time_detect) && sleepmode_vibrate == false) && sleep_enabeled)
  {
    sleepmode_vibrate = true;
    settings = 0;
    previousMillis_sleep = currentMillis;
    digitalWrite(MOSFET_pin,LOW);
    display.clearDisplay();
    display.setTextSize(3);
    display.setTextColor(WHITE);
    display.setCursor(20,4);
    display.print("SLEEP");   
    display.display(); 
    analogWrite(buzzer,200);
    delay(70);
    analogWrite(buzzer,LOW);
    delay(1000);
   }







  /////////////////////////////////////Enter sleep time change///////////////////////////////////////////////////////////////////////////
  if( ( (digitalRead(decrease_pin)) &&  sleepmode) && settings == 0)
  {
    previousMillis_sleep = currentMillis; /*We reset the vibration sleep counter just in case
    If any button is pressed, that means we don't want sleep mode*/
    if(sleep_out_count > 800)
    {
      temp_change_count = 0;
      digitalWrite(MOSFET_pin, LOW);         //With LOW we turn OFF the BJT so the P-Channel MOSFET is OFF
      analogWrite(buzzer,200);
      delay(70);
      analogWrite(buzzer,LOW);
      settings = 1;
      sleep_out_count = 0;
      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(21,22);
      display.print("Set Sleep Time");
      display.display();
      delay(40);
      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(21,16);
      display.print("Set Sleep Time");
      display.display();
      delay(40);
      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(21,11);
      display.print("Set Sleep Time");
      display.display();
      delay(40);
      
    }
    sleep_out_count = sleep_out_count + 1;      
  }//end of dig read of buttons and SLEEPMODE activated

 




  ////////////////////////////////////Increase sleep time change////////////////////////////////////////////////////////////////////////
  if(!digitalRead(increase_pin)  &&  digitalRead(decrease_pin) && settings == 1)
  {
    previousMillis_sleep = currentMillis; /*We reset the vibration sleep counter just in case
    If any button is pressed, that means we don't want sleep mode*/
    if(sleep_out_count > 800)
    {
      temp_change_count = 0;
      digitalWrite(MOSFET_pin, LOW);         //With LOW we turn OFF the BJT so the P-Channel MOSFET is OFF
      analogWrite(buzzer,200);
      delay(70);
      analogWrite(buzzer,LOW);
      settings = 2;
      sleep_out_count = 0;
      slide_set_temp_down(sleeptime);  
      delay(100);          
    }
    sleep_out_count = sleep_out_count + 1;      
  }//increase temp






////////////////////////////////////Enter sleep time change////////////////////////////////////////////////////////////////////////
  if(digitalRead(increase_pin)  &&  !digitalRead(decrease_pin) && settings == 1)
  {
    previousMillis_sleep = currentMillis; /*We reset the vibration sleep counter just in case
    If any button is pressed, that means we don't want sleep mode*/
    if(sleep_out_count > 800)
    {
      temp_change_count = 0;
      digitalWrite(MOSFET_pin, LOW);         //With LOW we turn OFF the BJT so the P-Channel MOSFET is OFF
      analogWrite(buzzer,200);
      delay(70);
      analogWrite(buzzer,LOW);
      settings = 3;
      sleep_out_count = 0;
      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(21,22);
      display.print("Pre-set temp");
      display.display();
      delay(40);
      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(21,16);
      display.print("Pre-set temp");
      display.display();
      delay(40);
      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(21,11);
      display.print("Pre-set temp");
      display.display();
      delay(40);     
            
    }
    sleep_out_count = sleep_out_count + 1;      
  }//increase temp





  ////////////////////////////////////Enter sleep time change////////////////////////////////////////////////////////////////////////
  if(digitalRead(increase_pin)  &&  !digitalRead(decrease_pin) && settings == 3)
  {
    previousMillis_sleep = currentMillis; /*We reset the vibration sleep counter just in case
    If any button is pressed, that means we don't want sleep mode*/
    if(sleep_out_count > 800)
    {
      
      digitalWrite(MOSFET_pin, LOW);         //With LOW we turn OFF the BJT so the P-Channel MOSFET is OFF
      analogWrite(buzzer,200);
      delay(70);
      analogWrite(buzzer,LOW);
      settings = 1;
      sleep_out_count = 0;
      temp_change_count = 0;
      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(21,22);
      display.print("Set Sleep Time");
      display.display();
      delay(40);
      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(21,16);
      display.print("Set Sleep Time");
      display.display();
      delay(40);   
      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(WHITE);
      display.setCursor(21,11);
      display.print("Set Sleep Time");
      display.display();
      delay(40);                 
    }
    sleep_out_count = sleep_out_count + 1;      
  }//increase temp










  



   ////////////////////////////////////Increase sleep time change////////////////////////////////////////////////////////////////////////
  if(!digitalRead(increase_pin)  &&  digitalRead(decrease_pin) && settings == 3)
  {
    previousMillis_sleep = currentMillis; /*We reset the vibration sleep counter just in case
    If any button is pressed, that means we don't want sleep mode*/
    if(sleep_out_count > 800)
    {      
      digitalWrite(MOSFET_pin, LOW);         //With LOW we turn OFF the BJT so the P-Channel MOSFET is OFF
      analogWrite(buzzer,200);
      delay(70);
      analogWrite(buzzer,LOW);
      settings = 4;
      sleep_out_count = 0;
      temp_change_count = 0;
      slide_set_temp_down(setpoint);  
      delay(300);          
    }
    sleep_out_count = sleep_out_count + 1;      
  }//increase temp









  ////////////////////////////////////Increase sleep time change////////////////////////////////////////////////////////////////////////
  if(digitalRead(increase_pin)  &&  !digitalRead(decrease_pin) && settings == 2)
  {
    previousMillis_sleep = currentMillis; /*We reset the vibration sleep counter just in case
    If any button is pressed, that means we don't want sleep mode*/
    if(sleep_out_count > 1000)
    {
      
      digitalWrite(MOSFET_pin,LOW);      //With LOW we turn OFF the BJT so the P-Channel MOSFET is OFF
      sleep_out_count = 0;
      temp_change_count = 0;
      sleeptime = sleeptime + 1;
      EEPROM.write(sleeptime_adress, sleeptime);
      temp_change_count = 0;  
      if (sleeptime > max_sleeptime)
      {
       sleeptime = 0;  
       EEPROM.write(sleeptime_adress, sleeptime);
       display.clearDisplay();
       display.setTextSize(3);
       display.setTextColor(WHITE);
       display.setCursor(35,4);
       display.print("OFF"); 
       display.display();
       sleep_enabeled = false;       
      }      
      else
      {
        slide_set_temp_down(sleeptime);  
        sleep_enabeled = true;
      }
    }
    sleep_out_count = sleep_out_count + 1;      
  }//increase temp





  /////////////////////////////////////Decrease sleep time change////////////////////////////////////////////////////////////////////////
  if(!digitalRead(increase_pin)  &&  digitalRead(decrease_pin) && settings == 2)
  {
    previousMillis_sleep = currentMillis; /*We reset the vibration sleep counter just in case
    If any button is pressed, that means we don't want sleep mode*/
    if(sleep_out_count > 1000)
    {
      
      digitalWrite(MOSFET_pin,LOW);      //With LOW we turn OFF the BJT so the P-Channel MOSFET is OFF
      sleep_out_count = 0;
      temp_change_count = 0;
      sleeptime = sleeptime - 1;
      EEPROM.write(sleeptime_adress, sleeptime);
      temp_change_count = 0;  
      if (sleeptime < 1)
      {
       sleeptime = 0;  
       EEPROM.write(sleeptime_adress, sleeptime);
       display.clearDisplay();
       display.setTextSize(3);
       display.setTextColor(WHITE);
       display.setCursor(35,4);
       display.print("OFF"); 
       display.display();
       sleep_enabeled = false;
      }      
      else
      {
        slide_set_temp_up(sleeptime);  
        sleep_enabeled = true;
      }
    }
    sleep_out_count = sleep_out_count + 1;      
  }//increase temp






////////////////////////////////////Increase sleep time change////////////////////////////////////////////////////////////////////////
  if(digitalRead(increase_pin)  &&  !digitalRead(decrease_pin) && settings == 4)
  {
    previousMillis_sleep = currentMillis; /*We reset the vibration sleep counter just in case
    If any button is pressed, that means we don't want sleep mode*/
    if(sleep_out_count > 1000)
    {      
      digitalWrite(MOSFET_pin,LOW);      //With LOW we turn OFF the BJT so the P-Channel MOSFET is OFF
      setpoint = setpoint + 10;
      write_setpoint_to_EEPROM();
      slide_set_temp_down(setpoint);
      temp_change = true;
      sleep_out_count = 0;
      temp_change_count = 0;
      if (setpoint > max_temp)
      {
       setpoint = max_temp;  
       write_setpoint_to_EEPROM();
      }      
      display.clearDisplay();
      display.setTextSize(3);
      display.setTextColor(WHITE);
      display.setCursor(35,4);
      display.print(setpoint); 
      display.display(); 
      
    }
    sleep_out_count = sleep_out_count + 1;      
  }//increase temp





  /////////////////////////////////////Decrease sleep time change////////////////////////////////////////////////////////////////////////
  if(!digitalRead(increase_pin)  &&  digitalRead(decrease_pin) && settings == 4)
  {
    previousMillis_sleep = currentMillis; /*We reset the vibration sleep counter just in case
    If any button is pressed, that means we don't want sleep mode*/
    if(sleep_out_count > 1000)
    {      
      digitalWrite(MOSFET_pin,LOW);     //With LOW we turn OFF the BJT so the P-Channel MOSFET is OFF    
      setpoint = setpoint - 10;
      write_setpoint_to_EEPROM();
      slide_set_temp_up(setpoint);
      temp_change = true;      
      sleep_out_count = 0;
      temp_change_count = 0;      
      if (setpoint < min_temp)
      {
        setpoint = min_temp;  
        write_setpoint_to_EEPROM();
      }
      display.clearDisplay();
      display.setTextSize(3);
      display.setTextColor(WHITE);
      display.setCursor(35,4);
      display.print(setpoint);   
      display.display(); 
    }
    sleep_out_count = sleep_out_count + 1;      
  }//increase temp


  /*If both buttons are LOW, we wait and then EXIT the temp change mode*/
  if(!digitalRead(increase_pin) && !digitalRead(decrease_pin) && settings != 0)
  {
    if(temp_change_count > 25000)
    {
      settings = 0;
      temp_change_count = 0;      
      previousMillis_sleep = currentMillis;
      display.clearDisplay();
      display.setTextSize(3);
      display.setTextColor(WHITE);
      display.setCursor(16,4);
      display.print("SAVED"); 
      display.display();
      delay(1000);
     }
    temp_change_count = temp_change_count + 1;
  }

 
































   

   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////  
}//end of void loop







void write_setpoint_to_EEPROM()
{
  if(setpoint < 250)
    {
      EEPROM.write(setpoint_adress_low, setpoint);
      EEPROM.write(setpoint_adress_mid, 0);
      EEPROM.write(setpoint_adress_high, 0);
    }
    else if (setpoint > 250 && setpoint < 500)
    {
      setpoint_high = setpoint - 255;
      setpoint_mid = 255;
      setpoint_low = 0;
      EEPROM.write(setpoint_adress_low, setpoint_low);
      EEPROM.write(setpoint_adress_mid, setpoint_mid);
      EEPROM.write(setpoint_adress_high, setpoint_high);
    }
    else 
    {
      setpoint_high = setpoint - 255;
      setpoint_mid = setpoint_high - 255;
      setpoint_low = 255 - setpoint_mid;
      EEPROM.write(setpoint_adress_low, setpoint_low);
      EEPROM.write(setpoint_adress_mid, setpoint_mid);
      EEPROM.write(setpoint_adress_high, setpoint_high);
      setpoint = setpoint_high + setpoint_mid + setpoint_low;
    }
}










//This function will slide the temperature setpoint each time we change the value with the button down
void slide_set_temp_down(int tempe)
{
  while(set_temp_slide_counter >= 4)
  {
    display.clearDisplay();
    display.setTextSize(3);
    display.setTextColor(WHITE);
    display.setCursor(36,set_temp_slide_counter);
    display.print(tempe);       
    display.display();
    set_temp_slide_counter = set_temp_slide_counter-4;
    delayMicroseconds(1);
  }
  set_temp_slide_counter = 32;
  //set_temp_made = true;
}


//This function will slide the temperature setpoint each time we change the value with the button up
void slide_set_temp_up(int tempe)
{
  while(set_temp_slide_counter_up <= 4)
  {
    display.clearDisplay();
    display.setTextSize(3);
    display.setTextColor(WHITE);
    display.setCursor(36,set_temp_slide_counter_up);
    display.print(tempe);       
    display.display();
    set_temp_slide_counter_up = set_temp_slide_counter_up+4;
    delayMicroseconds(1);
  }
  set_temp_slide_counter_up = -32;
  //set_temp_made = true;
}



//This function will pass the real temperature read to values with steps from 5 to 5 degrees
int map_temp_to_print(int temp)
{
  while (i < 800)
  {
     if(i_prev < temp && temp < i)
     {
        return i;
        i=800;
     }
     i_prev=i;
     i=i+5 ;    
  }
  i = 0;
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////  
/////////////TEMPERATURE READ FUNCTION
float read_temperature()
{
   // Filter the ADC by multisampling with the values defined at the beginning
  adc = 0;
  for (int i = 0; i < ADC_MULTISAMPLING_SAMPLES; ++i)
    adc += analogRead(temp_sense);
    adc = adc >> ADC_MULTISAMPLING; 
  //Get the linear regression equations from excel data (Graph adc/temperature) (You need to perform real measures with externam thermometer) 
  if(adc < 100)
  {
  double temp =  1.11289*adc - 8.58536; // double temp =  0.9241*adc - 51.146; (Version2) 
  CurrentTemp += (temp-CurrentTemp)*0.05;
  }
  
  if(adc > 100)
  {
  double temp =  (220.373 * (log(adc))) - 932.544; // double temp =  0.9241*adc - 51.146; (Version2) 
  CurrentTemp += (temp-CurrentTemp)*0.05;
  }
  
  return(CurrentTemp);
}


//This is the interruption vector for pin A1 where the vibrations sensor is connected.
//We deactivate the sleep mode when detected and reset the counter value
ISR(PCINT1_vect)
{
  previousMillis_sleep = currentMillis;
  sleepmode_vibrate = false;  
  delay(500);
}
