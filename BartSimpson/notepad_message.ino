/*
 * Generated with <3 by Dckuino.js, an open source project !
 */

#include "Keyboard.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(10000);

  // Lock Me 0.3 - Script opens Notepad and types a message concerning locking the computer - by SurfKahuna (RJC)
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print(F("notepad.exe"));

  typeKey(KEY_RETURN);

  delay(300);

  Keyboard.print(F("          , ,\\ ,'\\,'\\ ,'\\ ,\\ ,"));
  typeKey(KEY_RETURN);
  Keyboard.print(F("    ,  ,\\/ \\' `'     `   '  /|"));
  typeKey(KEY_RETURN);
  Keyboard.print(F("    |\\/                      |"));
  typeKey(KEY_RETURN);
  Keyboard.print(F("    :                        |"));
  typeKey(KEY_RETURN);
  Keyboard.print(F("    :                        |"));
  typeKey(KEY_RETURN);
  Keyboard.print(F("     |                       |"));
  typeKey(KEY_RETURN);
  Keyboard.print(F("     |                       |"));
  typeKey(KEY_RETURN);
  Keyboard.print(F("     :               -.     _|"));
  typeKey(KEY_RETURN);
  Keyboard.print(F("     :                \\     `."));
  typeKey(KEY_RETURN);
  Keyboard.print(F("     |         ________:______\\"));
  typeKey(KEY_RETURN);
  Keyboard.print(F("     :       ,'o       / o    ,"));
  typeKey(KEY_RETURN);
  Keyboard.print(F("     :       \\       ,'-----./"));
  typeKey(KEY_RETURN);
  Keyboard.print(F("      \\_      `--.--'        )"));
  typeKey(KEY_RETURN);
  Keyboard.print(F("     ,` `.              ,---'|"));
  typeKey(KEY_RETURN);
  Keyboard.print(F("     : `                     |"));
  typeKey(KEY_RETURN);
  Keyboard.print(F("      `,-'                   |"));
  typeKey(KEY_RETURN);
  Keyboard.print(F("      /      ,---.          ,'"));
  typeKey(KEY_RETURN);
  Keyboard.print(F("   ,-'            `-,------'"));
  typeKey(KEY_RETURN);
  Keyboard.print(F("   `.        ,--'"));
  typeKey(KEY_RETURN);
  Keyboard.print(F("     `-.____/"));
  typeKey(KEY_RETURN);
  Keyboard.print(F("            \\"));
  typeKey(KEY_RETURN);
  typeKey(KEY_RETURN);

  Keyboard.print(F("I will learn to lock my computer."));
  typeKey(KEY_RETURN);
  Keyboard.print(F("I will learn to lock my computer."));
  typeKey(KEY_RETURN);
  Keyboard.print(F("I will learn to lock my computer."));
  typeKey(KEY_RETURN);
  Keyboard.print(F("I will learn to lock my computer."));
  typeKey(KEY_RETURN);
  Keyboard.print(F("I will learn to lock my computer."));
  typeKey(KEY_RETURN);
  Keyboard.print(F("I will learn to lock my computer."));
  typeKey(KEY_RETURN);
  Keyboard.print(F("I will learn to lock my computer."));
  typeKey(KEY_RETURN);
  Keyboard.print(F("I will learn to lock my computer."));
  typeKey(KEY_RETURN);
  Keyboard.print(F("I will learn to lock my computer."));
  typeKey(KEY_RETURN);
  Keyboard.print(F("I will learn to lock my computer."));
  typeKey(KEY_RETURN);

  typeKey(KEY_RETURN);

  Keyboard.print(F("There, just like Bart Simpson."));

  typeKey(KEY_RETURN);
  typeKey(KEY_RETURN);

  Keyboard.print(F("Please remember to lock your computer when you step away from your desk."));

  typeKey(KEY_RETURN);

  typeKey(KEY_RETURN);

  Keyboard.print(F("Thank you."));

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  Keyboard.print(F("x"));

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
