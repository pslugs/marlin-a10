#pragma once

/**
 * GT2560_V4.0 for PETER A10
 */

#if NOT_TARGET(__AVR_ATmega1280__, __AVR_ATmega2560__)
  #error "Oops! Select 'Arduino/Genuino Mega or Mega 2560' in 'Tools > Board.'"
#endif

#ifndef BOARD_INFO_NAME
  #define BOARD_INFO_NAME "GT2560 V4.0 PETER"
#endif

//
// Servos
//
#define SERVO0_PIN                            11  //13 untested  3Dtouch

//
// Limit Switches
//
#ifndef X_STOP_PIN
  #ifndef X_MIN_PIN
    #define X_MIN_PIN                         24
  #endif
  #ifndef X_MAX_PIN
    #define X_MAX_PIN                         22
  #endif
#endif
#ifndef Y_STOP_PIN
  #ifndef Y_MIN_PIN
    #define Y_MIN_PIN                         28
  #endif
  #ifndef Y_MAX_PIN
    #define Y_MAX_PIN                         26
  #endif
#endif
#ifndef Z_STOP_PIN
  #ifndef Z_MIN_PIN
    #define Z_MIN_PIN                         30
  #endif
  #ifndef Z_MAX_PIN
    #define Z_MAX_PIN                         32
  #endif
#endif

//
// Z Probe (when not Z_MIN_PIN)
//
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN                     32
#endif

//
// Runout Sensor
//
#ifndef FIL_RUNOUT_PIN
  #define FIL_RUNOUT_PIN                      66
#endif
#ifndef FIL_RUNOUT2_PIN
  #define FIL_RUNOUT2_PIN                     67
#endif

//
// Power Recovery
//
#define POWER_LOSS_PIN                        69  // Pin to detect power loss
#define POWER_LOSS_STATE                     LOW

//
// Steppers
//
#define X_STEP_PIN                            37
#define X_DIR_PIN                             39
#define X_ENABLE_PIN                          35

#define Y_STEP_PIN                            31
#define Y_DIR_PIN                             33
#define Y_ENABLE_PIN                          29

#define Z_STEP_PIN                            25
#define Z_DIR_PIN                             23
#define Z_ENABLE_PIN                          27

#define E0_STEP_PIN                           46
#define E0_DIR_PIN                            44
#define E0_ENABLE_PIN                         12

#define E1_STEP_PIN                           49
#define E1_DIR_PIN                            47
#define E1_ENABLE_PIN                         48

#define E2_STEP_PIN                           43
#define E2_DIR_PIN                            45
#define E2_ENABLE_PIN                         41

//
// Temperature Sensors
//
#define TEMP_0_PIN                            11  // Analog Input
#define TEMP_1_PIN                             9  // Analog Input
#define TEMP_2_PIN                             8  // Analog Input
#define TEMP_BED_PIN                          10  // Analog Input
#define TEMP_PROBE_PIN TEMP_1_PIN // PETER INDUCTIVE PROBE
#define TEMP_CHAMBER_PIN TEMP_2_PIN // PETER

//
// Heaters / Fans
//
#define HEATER_0_PIN                          10
#define HEATER_1_PIN                           3
#define HEATER_2_PIN                           2
#define HEATER_BED_PIN                         4
#define FAN_PIN                                9
//#define FAN1_PIN                               8 // PETER
//#define FAN2_PIN                               7 // PETER

//
// Misc. Functions
//
#define SD_DETECT_PIN                         38
#define SDSS                                  53
#define LED_PIN                               13  // Use 6 (case light) for external LED. 13 is internal (yellow) LED.
#define PS_ON_PIN                             12
#define SUICIDE_PIN                           54  // This pin must be enabled at boot to keep power flowing

#ifndef CASE_LIGHT_PIN
  #define CASE_LIGHT_PIN                       6  // 21
#endif

//
// LCD Controller
//
#define BEEPER_PIN                            18

#ifndef LCD_PINS_RS
  #define LCD_PINS_RS                         20
#endif
#ifndef LCD_PINS_ENABLE
  #define LCD_PINS_ENABLE                     17
#endif
#ifndef LCD_PINS_D4
  #define LCD_PINS_D4                         16
#endif
#ifndef LCD_PINS_D5
  #define LCD_PINS_D5                         21
#endif
#ifndef LCD_PINS_D6
  #define LCD_PINS_D6                          5
#endif
#ifndef LCD_PINS_D7
  #define LCD_PINS_D7                         36
#endif

#if ENABLED(NEWPANEL)
  #ifndef BTN_EN1
    #define BTN_EN1                           42
  #endif
  #ifndef BTN_EN2
    #define BTN_EN2                           40
  #endif
  #ifndef BTN_ENC
    #define BTN_ENC                           19
  #endif
#endif
