// *******************************
//    Teensy3.2 Twitter Post
//        Ismail Tasdelen
// *******************************

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
    
    delay(5000);
    

    Keyboard.print("cmd /c \"start http://www.twitter.com\"");

    Keyboard.set_key1(KEY_ENTER);

    Keyboard.send_now();

    Keyboard.set_key1(0);

    Keyboard.send_now();
    
    delay(5000);
   
    
    for (int tab = 1; tab <=6; tab++) {
      Keyboard.set_key1(KEY_TAB);
  
      Keyboard.send_now();
  
      Keyboard.set_key1(0);
  
      Keyboard.send_now();
  }
    
    Keyboard.set_key1(KEY_ENTER);

    Keyboard.send_now();

    Keyboard.set_key1(0);

    Keyboard.send_now();
    delay(6000);
    

    Keyboard.print(" Teensy Test #test ");
    
    delay(3000);
    
    for (int tab = 1; tab <=5; tab++) {
      
      Keyboard.set_key1(KEY_TAB);
  
      Keyboard.send_now();
  
      Keyboard.set_key1(0);
  
      Keyboard.send_now();
  }
    
    delay(3000);
    Keyboard.set_key1(KEY_ENTER);

    Keyboard.send_now();

    Keyboard.set_key1(0);

    Keyboard.send_now();
    
    }

    void loop()

    {

    }
