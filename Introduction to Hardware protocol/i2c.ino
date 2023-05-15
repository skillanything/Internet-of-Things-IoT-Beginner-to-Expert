// ------------------------------------------------------------
// Hello World! Demo - Updated for PCBoard.ca 2020-08-20
//
// This sketch displays a simple message to the LCD screen
// ------------------------------------------------------------

#include LiquidCrystal_I2C.h; // Driver Library for the LCD Module

// Wiring: Connect SDA pin to A4 and SCL pin to A5
// Connects to LCD via I2C, at address 0x27 (A0-A2 not jumpered)

LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27,16,2); // Adjust to (0x27,20,4) for 20x4 LCD

void setup() {
  // Initiate the LCD and turn on the backlight
  lcd.init();          // Initiate the LCD module
  lcd.backlight();     // Turn on the backlight
}

void loop() {
  // Print 'Hello World!' on the first line of the LCD
  lcd.setCursor(0, 0);          // Set the cursor on the first column and first row.
  lcd.print("Hello World!");    // Print the string "Hello World!"
  
  lcd.setCursor(1, 1);          //Set cursor to 2nd column and 2nd row (counting starts at 0)
  lcd.print("IoT is fun");
}
