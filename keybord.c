// jianpan.ino
int val1, val2, val3, val4, val5, val6, val7, val8, val9, val10, val11, val12, val13;
void setup() {
  for (int i = 2; i < 14; i++)
  {
    pinMode(i, INPUT_PULLUP);
  }
  Keyboard.begin();

}

void loop() {

  val2 = digitalRead(2);
  val3 = digitalRead(3);
  val4 = digitalRead(4);
  val5 = digitalRead(5);
  val6 = digitalRead(6);
  val7 = digitalRead(7);
  val8 = digitalRead(8);
  val9 = digitalRead(9);
  val10 = digitalRead(10);
  val11 = digitalRead(11);
  val12 = digitalRead(12);
  val13 = digitalRead(13);

  if (val2 == 0)
  {
    Keyboard.print("digitalWrite");
    delay(250);
  }

  if (val3 == 0)
  {
    Keyboard.print("digitalRead");

    delay(250);
  }


  if (val4 == 0)
  {
    Keyboard.print("void setup()");
    delay(250);
  }

  if (val5 == 0)
  {
    Keyboard.print("void loop()");
    delay(250);
  }

  if (val6 == 0)
  {
    Keyboard.print("pinMode");
    delay(250);
  }

  if (val7 == 0)
  {
    Keyboard.print("delay");
    delay(250);
  }

  if (val8 == 0)
  {
    Keyboard.print("Serial");
    delay(250);
  }

  if (val9 == 0)
  {
    Keyboard.println("{ ");
    Keyboard.println(" ");
    Keyboard.println(" } ");
    delay(250);
  }

  if (val10 == 0)
  {
    Keyboard.println("switch(){");
    Keyboard.println("case :");
    Keyboard.println("     ");
    Keyboard.println("break;");
    Keyboard.println("case :");
    Keyboard.println("     ");
    Keyboard.println("break;");
    Keyboard.println(" } ");
    Keyboard.releaseAll();
    delay(250);
  }

  if (val11 == 0)
  {

    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.print("t");
    delay(1000);
    Keyboard.releaseAll();

  }

  if (val12 == 0)
  {

    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.print("r");
    delay(1000);
    Keyboard.releaseAll();

  }


  if (val13 == 0)
  {

    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.print("u");
    delay(1000);
    Keyboard.releaseAll();
  }


}

