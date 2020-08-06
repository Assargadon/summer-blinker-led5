boolean buttonWasUp1 = true;
boolean ledEnabled1 = false;
boolean buttonWasUp2 = true;
boolean ledEnabled2 = false;
boolean buttonWasUp3 = true;
boolean ledEnabled3 = false;
boolean buttonWasUp4 = true;
boolean ledEnabled4 = false;
boolean buttonWasUp5 = true;
boolean ledEnabled5 = false;

void setup() {
  pinMode(10, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  pinMode(12, OUTPUT);
  pinMode(3, INPUT_PULLUP);
  pinMode(11, OUTPUT);
  pinMode(4, INPUT_PULLUP);
  pinMode(9, OUTPUT);
  pinMode(5, INPUT_PULLUP);
  pinMode(7, OUTPUT);
  pinMode(6, INPUT_PULLUP);
}
 
void loop() {

   
   // узнаем, отпущена ли кнопка сейчас
   boolean buttonIsUp1 = digitalRead(2);
   
   // если кнопка была отпущена и не отпущена сейчас
   if (buttonWasUp1 && !buttonIsUp1) {

      // исключаем дребезг контактов тактовой кнопки
      delay(10);

    // и считываем сигнал с кнопки снова
    buttonIsUp1 = digitalRead(2);

      // если кнопка нажата, то переворачиваем сигнал светодиода
      if (!buttonIsUp1) {
         ledEnabled1 = !ledEnabled1;
         digitalWrite(10, ledEnabled1);
      }
   }
 
   // запоминаем состояние кнопки для новой итерации
   buttonWasUp1 = buttonIsUp1;

   //2 knopka
   boolean buttonIsUp2 = digitalRead(3);
   // если кнопка была отпущена и не отпущена сейчас
   if (buttonWasUp2 && !buttonIsUp2) {
    
       // исключаем дребезг контактов тактовой кнопки
       delay(10);
    
     // и считываем сигнал с кнопки снова
     buttonIsUp2 = digitalRead(3);
    
       // если кнопка нажата, то переворачиваем сигнал светодиода
       if (!buttonIsUp2) {
          ledEnabled2 = !ledEnabled2;
          digitalWrite(12, ledEnabled2);
       }
    }
     
    // запоминаем состояние кнопки для новой итерации
    buttonWasUp2 = buttonIsUp2;

    //3 knopka
    boolean buttonIsUp3 = digitalRead(4);
   // если кнопка была отпущена и не отпущена сейчас
   if (buttonWasUp3 && !buttonIsUp3) {
    
       // исключаем дребезг контактов тактовой кнопки
       delay(10);
    
     // и считываем сигнал с кнопки снова
     buttonIsUp3 = digitalRead(4);
    
       // если кнопка нажата, то переворачиваем сигнал светодиода
       if (!buttonIsUp3) {
          ledEnabled3 = !ledEnabled3;
          digitalWrite(11, ledEnabled3);
       }
    }
     
    // запоминаем состояние кнопки для новой итерации
    buttonWasUp3 = buttonIsUp3;
    
   //4 knopka
     // узнаем, отпущена ли кнопка сейчас
   boolean buttonIsUp4 = digitalRead(5);
   
   // если кнопка была отпущена и не отпущена сейчас
   if (buttonWasUp4 && !buttonIsUp4) {

      // исключаем дребезг контактов тактовой кнопки
      delay(10);

    // и считываем сигнал с кнопки снова
    buttonIsUp4 = digitalRead(5);

      // если кнопка нажата, то переворачиваем сигнал светодиода
      if (!buttonIsUp4) {
         ledEnabled4 = !ledEnabled4;
         digitalWrite(9, ledEnabled4);
      }
   }
 
   // запоминаем состояние кнопки для новой итерации
   buttonWasUp4 = buttonIsUp4;
   
   //5 knopka
     // узнаем, отпущена ли кнопка сейчас
   boolean buttonIsUp5 = digitalRead(6);
   
   // если кнопка была отпущена и не отпущена сейчас
   if (buttonWasUp5 && !buttonIsUp5) {

      // исключаем дребезг контактов тактовой кнопки
      delay(10);

    // и считываем сигнал с кнопки снова
    buttonIsUp5 = digitalRead(6);

      // если кнопка нажата, то переворачиваем сигнал светодиода
      if (!buttonIsUp5) {
         ledEnabled5 = !ledEnabled5;
         digitalWrite(7, ledEnabled5);
      }
   }
 
   // запоминаем состояние кнопки для новой итерации
   buttonWasUp5 = buttonIsUp5;
}
