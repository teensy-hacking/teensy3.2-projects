include <Keyboard.h>

void setup() {
Keyboard.begin();
Keyboard.press(KEY_LEFT_GUI);
delay(500);
Keyboard.press('r');
Keyboard.releaseAll();
delay(200);
Keyboard.print("cmd");
delay(200);
Keyboard.releaseAll();
Keyboard.press(KEY_RETURN);
delay(200);
Keyboard.print("notepad");
delay(200);
Keyboard.releaseAll();
Keyboard.press(KEY_RETURN);
delay(200);
Keyboard.print("Ismail Tasdelen");
}

void loop() {}
void typeKey(int key) {
Keyboard.press(key);
delay(100);
Keyboard.release(key);
}
