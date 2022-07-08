#include <stdio.h>
#include <string.h>
#include <errno.h>

#include <wiringPi.h>
#include <lcd.h>

#define LCD_RS  26    // Register select pin
#define LCD_E   19    // Enable Pin
#define LCD_D0  21    // Data pin D0
#define LCD_D1  20    // Data pin D1
#define LCD_D2  16    // Data pin D2
#define LCD_D3  12    // Data pin D3
#define LCD_D4  13    // Data pin D4
#define LCD_D5  6     // Data pin D5
#define LCD_D6  5     // Data pin D6
#define LCD_D7  11    // Data pin D7

int main(int argc, char *argv[]) {
  int lcd;
  wiringPiSetupGpio();
  lcd = lcdInit(2, 16, 8, LCD_RS, LCD_E, LCD_D0, LCD_D1, LCD_D2, LCD_D3, LCD_D4, LCD_D5, LCD_D6, LCD_D7);

  lcdPosition(lcd, 0, 0);
  lcdPrintf(lcd, "Pot: %d pc", 85);
  lcdPosition(lcd, 0, 1);
  lcdPrintf(lcd, "Pausing for 5s");

  delay(5000);
  lcdClear(lcd);

  lcdPosition(lcd, 0, 0);
  lcdPrintf(lcd, "Finished");
  lcdPosition(lcd, 0, 1);
  lcdPrintf(lcd, "Execution");

  return 0;
}
