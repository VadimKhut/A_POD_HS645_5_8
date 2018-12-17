//=============================================================================

//comment if terminal monitor is not required

//#define DEBUG_IOPINS
//#define SaveToEEPROM
//#define DEBUG_ULTRASONIC
//#define ERROR_LED
#define ReadAdrFromEEPROM
#ifdef DEBUG_IOPINS
  #define DebugToggle(pin)         {digitalWrite(pin, !digitalRead(pin));}
  #define DebugWrite(pin, state)   {digitalWrite(pin, state);}
#else
  #define DebugToggle(pin)         {;}
  #define DebugWrite(pin, state)   {;}
#endif 

#define OPT_TERMINAL_MONITOR  
#ifdef OPT_TERMINAL_MONITOR           // turning off terminal monitor will turn these off as well...
  #define OPT_SSC_FORWARDER           // only useful if terminal monitor is enabled
  //#define OPT_FIND_SERVO_OFFSETS    // Only useful if terminal monitor is enabled
#endif


#define   DBGSerial         Serial
#ifdef    DBGSerial
  #define   DEBUG
#endif
#define   SSCSerial         Serial1
#define   DEBUG_BAUD        57600     // 57600, Serial DEBUG_BAUD rate
#define   cSSC_BAUD         115200    // 38400 Old; Serial1 SSC32_BAUD rate

//#define   OPT_GPPLAYER
#define   USEPS2
#define   USE_SSC32
#define	  cSSC_BINARYMODE	  1         // Define if SSC-32 card supports binary mode.
#define   MonitorFSR
#define   ApodCode
//#define   DEBUG_Abdom


#define   cTurnOffVol         1
#define   cTurnOnVol          1
#define   cVoltagePin
#define   cTurnOffVol1         840       // MIN Voltage 8.4V for TurnOff
#define   cTurnOnVol1          860       // MIN Voltage 8.6V for TurnOn
#define   cTurnOffVol2         560       // MIN Voltage 7V 0r 9V for TurnOff
#define   cTurnOnVol2          580       // MIN Voltage 7V 0r 9V for TurnOn
#define   MAX_Count_Voltage    10        // MAX counter failure voltage


//==================================================================================
// A-Pod
//==================================================================================

// Pin Arduino defines
#define   Eyes_p          4      // OUTPUT
#define   Buzz_p          5      // OUTPUT
#define   PS2_DAT_p       6      // INPUT	green
#define   PS2_CMD_p       7      // OUTPUT	blue
#define   PS2_SEL_p       8      // OUTPUT	purple
#define   PS2_CLK_p       9      // OUTPUT	gray
#define   ECHO_p          10     // INPUT
#define   TRIG_p          11     // OUTPUT

#define   V_Bat1_p        A0     // A-INPUT
#define   V_Bat2_p        A1     // A-INPUT
#define   FSR_p           A2     // A-INPUT


#define   JUMPER_p        22     // INPUT
#define   JUMPER1_p       23     // INPUT

#define   Led_GREEN_p     44     // OUTPUT
#define   Led_RED_p       45     // OUTPUT
#define   Led_YELL_p      46     // OUTPUT
#define   MUTE_p          47     // INPUT / OUTPUT
#define   EOM_p           48     // INPUT
#define   SS_p            49     // OUTPUT
#define   MOSO_p          50     // OUTPUT
#define   MOSI_p          51     // INPUT
#define   SCLK_p          52     // OUTPUT



//--------------------------------------------------------------------

//====================================================================
//[SSC PIN NUMBERS]
#define cRRCoxaPin      0   //Right Rear leg Hip Horizontal
#define cRRFemurPin     1   //Right Rear leg Hip Vertical
#define cRRTibiaPin     2   //Right Rear leg Knee

#define cRMCoxaPin      4   //Right Middle leg Hip Horizontal
#define cRMFemurPin     5   //Right Middle leg Hip Vertical
#define cRMTibiaPin     6   //Right Middle leg Knee

#define cRFCoxaPin      8   //Right Front leg Hip Horizontal
#define cRFFemurPin     9   //Right Front leg Hip Vertical
#define cRFTibiaPin     10  //Right Front leg Knee

#define cLRCoxaPin      16   //Left Front leg Hip Horizontal
#define cLRFemurPin     17   //Left Front leg Hip Vertical
#define cLRTibiaPin     18   //Left Front leg Knee

#define cLMCoxaPin      20   //Left Middle leg Hip Horizontal
#define cLMFemurPin     21   //Left Middle leg Hip Vertical
#define cLMTibiaPin     22   //Left Middle leg Knee

#define cLFCoxaPin      24   //Left Rear leg Hip Horizontal
#define cLFFemurPin     25   //Left Rear leg Hip Vertical
#define cLFTibiaPin     26   //Left Rear leg Knee

#define cMandPin        27   //Mandible
#define cHeadTiltPin    14   //Head Tilt (up and down)
#define cHeadPanPin     13   //Head Panorate (side to side)
#define cHeadRotPin     12   //Head Rotate

#define cAbdomPanPin    3    //Abdomen Panorate (tail side to side)
#define cAbdomTiltPin   19   //Abdomen Tilt (tail up and down)

//---------------------------------------------------------------------------
//[MIN/MAX ANGLES] - for checks the mechanical limits of the servos
//Right
//Mechanical limits of the Right Rear Leg
#define cRRCoxaMin1     -430              // PWM=1046
#define cRRCoxaMax1     500               // PWM=2292
#define cRRFemurMin1    -900
#define cRRFemurMax1    900
#define cRRTibiaMin1    -900
#define cRRTibiaMax1    756               // PWM=2299

//Mechanical limits of the Right Middle Leg
#define cRMCoxaMin1     -400              // PWM=1077
#define cRMCoxaMax1     400               // PWM=1923
#define cRMFemurMin1    -900
#define cRMFemurMax1    900
#define cRMTibiaMin1    -900
#define cRMTibiaMax1    801               // PWM=2346

//Mechanical limits of the Right Front Leg
#define cRFCoxaMin1     -500              // PWM=613      
#define cRFCoxaMax1     380               // PWM=1902
#define cRFFemurMin1    -900
#define cRFFemurMax1    900
#define cRFTibiaMin1    -900
#define cRFTibiaMax1    731               // PWM=2272

// Left 
//Mechanical limits of the Left Rear Leg
#define cLRCoxaMin1     -430              // PWM=1046
#define cLRCoxaMax1     500               // PWM=2292
#define cLRFemurMin1    -900
#define cLRFemurMax1    900
#define cLRTibiaMin1    -900
#define cLRTibiaMax1    745               // PWM=2287

//Mechanical limits of the Left Middle Leg
#define cLMCoxaMin1     -400              // PWM=1077
#define cLMCoxaMax1     400               // PWM=1923
#define cLMFemurMin1    -900
#define cLMFemurMax1    900
#define cLMTibiaMin1    -900
#define cLMTibiaMax1    815               // PWM=2361

//Mechanical limits of the Left Front Leg
#define cLFCoxaMin1     -500              // PWM=613
#define cLFCoxaMax1     380               // PWM=1902
#define cLFFemurMin1    -900
#define cLFFemurMax1    900
#define cLFTibiaMin1    -900
#define cLFTibiaMax1    731               // PWM=2272



//Mechanical limits of Head Rotate                     (12)
#define cHeadRotMAX1    800               // PWM=2345
#define cHeadRotMIN1    -800              // PWM=665

//Mechanical limits of Head Panorate (side to side)    (13)
#define cHeadPanMAX1    380               // PWM=1909   
#define cHeadPanMIN1    -380              // PWM=1091

//Mechanical limits of Head Tilt (up and down)         (14)
#define cHeadTiltMAX1   420               // PWM=1947
#define cHeadTiltMIN1   -800              // PWM=665

//Mechanical limits of Mandible                        (27)
#define cMandMAX1       -47               // PWM=1495
#define cMandMIN1       -530              // PWM=940

//

//Mechanical limits of Abdomen Tilt (tail up and down) (19)
#define cAbdomTiltMAX1 	620               // PWM=2161
#define cAbdomTiltMIN1 	-580              // PWM=885

//Mechanical limits of Abdomen Panorate (tail side to side) (3)
#define cAbdomPanMAX1	400              // PWM=1950
#define cAbdomPanMIN1	-400             // PWM=1050

//--------------------------------------------------------------------
//[LEG DIMENSIONS]
//Universal dimensions for each leg in mm
#define cXXCoxaLength     56    // 
#define cXXFemurLength    85
#define cXXTibiaLength    115

#define cRRCoxaLength     cXXCoxaLength	    //Right Rear leg
#define cRRFemurLength    cXXFemurLength
#define cRRTibiaLength    cXXTibiaLength

#define cRMCoxaLength     cXXCoxaLength	    //Right middle leg
#define cRMFemurLength    cXXFemurLength
#define cRMTibiaLength    cXXTibiaLength

#define cRFCoxaLength     cXXCoxaLength	    //Rigth front leg
#define cRFFemurLength    cXXFemurLength
#define cRFTibiaLength    cXXTibiaLength

#define cLRCoxaLength     cXXCoxaLength	    //Left Rear leg
#define cLRFemurLength    cXXFemurLength
#define cLRTibiaLength    cXXTibiaLength

#define cLMCoxaLength     cXXCoxaLength	    //Left middle leg
#define cLMFemurLength    cXXFemurLength
#define cLMTibiaLength    cXXTibiaLength

#define cLFCoxaLength     cXXCoxaLength	    //Left front leg
#define cLFFemurLength    cXXFemurLength
#define cLFTibiaLength    cXXTibiaLength


//--------------------------------------------------------------------
//[BODY DIMENSIONS]
#define cRRCoxaAngle1    -450    //Default Coxa setup angle, decimals = 1
#define cRMCoxaAngle1    0       //Default Coxa setup angle, decimals = 1
#define cRFCoxaAngle1    450     //Default Coxa setup angle, decimals = 1
#define cLRCoxaAngle1    -450    //Default Coxa setup angle, decimals = 1
#define cLMCoxaAngle1    0       //Default Coxa setup angle, decimals = 1
#define cLFCoxaAngle1    450     //Default Coxa setup angle, decimals = 1

#define cRROffsetX       -70     //Distance X from center of the body to the Right Rear coxa
#define cRROffsetZ       85      //Distance Z from center of the body to the Right Rear coxa
#define cRMOffsetX       -70     //Distance X from center of the body to the Right Middle coxa
#define cRMOffsetZ       0       //Distance Z from center of the body to the Right Middle coxa
#define cRFOffsetX       -70     //Distance X from center of the body to the Right Front coxa
#define cRFOffsetZ       -85     //Distance Z from center of the body to the Right Front coxa

#define cLROffsetX       70      //Distance X from center of the body to the Left Rear coxa
#define cLROffsetZ       85      //Distance Z from center of the body to the Left Rear coxa
#define cLMOffsetX       70      //Distance X from center of the body to the Left Middle coxa
#define cLMOffsetZ       0       //Distance Z from center of the body to the Left Middle coxa
#define cLFOffsetX       70      //Distance X from center of the body to the Left Front coxa
#define cLFOffsetZ       -85     //Distance Z from center of the body to the Left Front coxa

//--------------------------------------------------------------------
//[START POSITIONS FEET]
#define cHexInitXZ		 114     // Distance X for Middle legs
#define CHexInitXZCos45          85      // Cos45 Distance X for Right and Front legs
#define CHexInitXZSin45          85      // Sin45 Distance Y for Right and Front legs
#define CHexInitY		 25      // Global start hight

#define CNT_HEX_INITS    3
#define MAX_BODY_Y       120


  const byte g_abHexIntXZ[] PROGMEM = {cHexInitXZ, 99, 86};
  const byte g_abHexMaxBodyY[] PROGMEM = {20, 50, 90};

#define   cRRInitPosX     CHexInitXZCos45      //Start positions of the Right Rear leg
#define   cRRInitPosY     CHexInitY
#define   cRRInitPosZ     CHexInitXZSin45

#define   cRMInitPosX     cHexInitXZ           //Start positions of the Right Middle leg
#define   cRMInitPosY     CHexInitY
#define   cRMInitPosZ     0

#define   cRFInitPosX     CHexInitXZCos45      //Start positions of the Right Front leg
#define   cRFInitPosY     CHexInitY
#define   cRFInitPosZ     -CHexInitXZSin45

#define   cLRInitPosX     CHexInitXZCos45      //Start positions of the Left Rear leg
#define   cLRInitPosY     CHexInitY
#define   cLRInitPosZ     CHexInitXZSin45

#define   cLMInitPosX     cHexInitXZ           //Start positions of the Left Middle leg
#define   cLMInitPosY     CHexInitY
#define   cLMInitPosZ     0

#define   cLFInitPosX     CHexInitXZCos45      //Start positions of the Left Front leg
#define   cLFInitPosY     CHexInitY
#define   cLFInitPosZ     -CHexInitXZSin45

//-------------------------------------------------------------------------------------------
//[MAX/MIN FSR torque]
//FSR connected to analog input: A2
//Use a 10k resistor between GND and ADIN. Connect FSR between ADIN and VCC(+5v)
//
#define  cMandibleFSRmaxTorque  750  //Set the upper limit for how hard the grippers can pinch
#define  cMandibleFSRminTorque  370  //Minimum torque level
#define  cMandibleContact       350   //readings lower than this means that the mandibles probably don't touch anything
#define  cTorqueMultiFactor     ((cMandibleFSRmaxTorque - cMandibleFSRminTorque) * c2DEC / 255) // (=176)

//--------------------------------------------------------------------
//[Servo PWM MIN/MAX values]
//Mandible
#define   cMandClosedPWM    1495
#define   cMandOpenPWM      890

//--------------------------------------------------------------------
//[Servo PWM MIN/MAX values] - for calculate step deg
//Right Leg
#define cPwmRRCoxaMin     550      //
#define cPwmRRCoxaMax     2450
#define cPwmRRFemurMin    550
#define cPwmRRFemurMax    2450
#define cPwmRRTibiaMin    550
#define cPwmRRTibiaMax    2450

#define cPwmRMCoxaMin     550      //
#define cPwmRMCoxaMax     2450
#define cPwmRMFemurMin    550
#define cPwmRMFemurMax    2450
#define cPwmRMTibiaMin    550
#define cPwmRMTibiaMax    2450

#define cPwmRFCoxaMin     550      //
#define cPwmRFCoxaMax     2450
#define cPwmRFFemurMin    550
#define cPwmRFFemurMax    2450
#define cPwmRFTibiaMin    550
#define cPwmRFTibiaMax    2450

// Left Leg 
#define cPwmLRCoxaMin     550      //
#define cPwmLRCoxaMax     2450
#define cPwmLRFemurMin    550
#define cPwmLRFemurMax    2450
#define cPwmLRTibiaMin    550
#define cPwmLRTibiaMax    2450

#define cPwmLMCoxaMin     550      //
#define cPwmLMCoxaMax     2450
#define cPwmLMFemurMin    550
#define cPwmLMFemurMax    2450
#define cPwmLMTibiaMin    550
#define cPwmLMTibiaMax    2450

#define cPwmLFCoxaMin     550      //
#define cPwmLFCoxaMax     2450
#define cPwmLFFemurMin    550
#define cPwmLFFemurMax    2450
#define cPwmLFTibiaMin    550
#define cPwmLFTibiaMax    2450

//Head Abdomen Max/Min
#define cPwmHeadRotMin    550
#define cPwmHeadRotMax    2450

#define cPwmHeadPanMin    550
#define cPwmHeadPanMax    2450

#define cPwmHeadTiltMin   550
#define cPwmHeadTiltMax   2450

#define cPwmAbdomTiltMin  550
#define cPwmAbdomTiltMax  2450

#define cPwmAbdomPanMin	  550
#define cPwmAbdomPanMax	  2450



