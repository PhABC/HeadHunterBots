//Kim
#include <LiquidCrystal.h> //Inclut biblio LCD

//Initialise l'écran avec les bonnes broches
LiquidCrystal lcd(8,9,4,5,6,7);

//Steup : ne se fait qu'une seule fois
void setup()
{
  
//Message d'acceuil sur l'écran (1/2 sec)
  lcd.begin(16,2); //utilisation d'un écran 16 colonnes et 2 lignes


}

void chorus1()

{
  
    lcd.print("Hello from the");
    lcd.setCursor (0,1);
      lcd.print("other side I");
  delay(4000);
  lcd.clear();
  lcd.setCursor (0,0);
lcd.print("must have called");
    lcd.setCursor (0,1);
      lcd.print("a thousand times");
  delay(4000);
  lcd.clear();
  lcd.setCursor (0,0);
  lcd.print("To tell you I'm");
    lcd.setCursor (0,1);
      lcd.print("sorry for");
  delay(4000);
  lcd.clear();
  lcd.setCursor (0,0);
  lcd.print("everything that");
    lcd.setCursor (0,1);
      lcd.print("I've done But");
  delay(4000);
  lcd.clear();
  lcd.setCursor (0,0);
    lcd.print("when I call you");
    lcd.setCursor (0,1);
      lcd.print("never seem to be");
  delay(4000);
  lcd.clear();
  lcd.setCursor (0,0);
    lcd.print("home");
  delay(4000);
  lcd.clear();
  lcd.setCursor (0,0);

}

void chorus2()

{
 lcd.print("Hello from");
    lcd.setCursor (0,1);
      lcd.print("the outside At");
  delay(4000);
  lcd.clear();
  lcd.setCursor (0,0);
    lcd.print("least I can say");
    lcd.setCursor (0,1);
      lcd.print("that I've tried");
  delay(4000);
  lcd.clear();
  lcd.setCursor (0,0);
    lcd.print("To tell you I'm");
    lcd.setCursor (0,1);
      lcd.print("sorry for");
  delay(4000);
  lcd.clear();
  lcd.setCursor (0,0);
    lcd.print("breaking your");
    lcd.setCursor (0,1);
      lcd.print("heart But it");
  delay(4000);
  lcd.clear();
  lcd.setCursor (0,0);
     lcd.print("don't matter it");
    lcd.setCursor (0,1);
      lcd.print("clearly doesn't");
  delay(4000);
  lcd.clear();
  lcd.setCursor (0,0);
     lcd.print("tear you apart");
    lcd.setCursor (0,1);
      lcd.print("anymore");
  delay(4000);
  lcd.clear();
  lcd.setCursor (0,0);
}



void loop()
{
 lcd.print("Hello, it's me");
 lcd.setCursor (0,1);
 lcd.print("I was wondering");
 delay(5000);
 lcd.clear();
 lcd.setCursor (0,0);
  
 lcd.print("if after all");
 lcd.setCursor (0,1);
 lcd.print("these years");
 delay(4000);
 lcd.clear();
 lcd.setCursor (0,0);
 
 lcd.print("you'd like to");
 lcd.setCursor (0,1);
 lcd.print("meet To go over");
 delay(4000);
 lcd.clear();
 lcd.setCursor (0,0);
 
  lcd.print("everything They");
 lcd.setCursor (0,1);
 lcd.print("say that time's");
 delay(4000);
 lcd.clear();
 lcd.setCursor (0,0);
 
  lcd.print("supposed to heal");
 lcd.setCursor (0,1);
 lcd.print("ya But I ain't");
 delay(4000);
 lcd.clear();
 lcd.setCursor (0,0);
 
  lcd.print("done much");
 lcd.setCursor (0,1);
 lcd.print("healing Hello,");
 delay(4000);
 lcd.clear();
 lcd.setCursor (0,0);
 
 lcd.print("can you hear me");
 lcd.setCursor (0,1);
 lcd.print("I'm in");
 delay(4000);
 lcd.clear();
 lcd.setCursor (0,0);
 
 lcd.print("California");
 lcd.setCursor (0,1);
 lcd.print("dreaming about");
 delay(4000);
 lcd.clear();
 lcd.setCursor (0,0);
 
 lcd.print("who we used to");
 lcd.setCursor (0,1);
 lcd.print("be When we were ");
 delay(4000);
 lcd.clear();
 lcd.setCursor (0,0);

  lcd.print("younger and free");
 lcd.setCursor (0,1);
 lcd.print("I've forgotten");
 delay(4000);
 lcd.clear();
 lcd.setCursor (0,0);

 lcd.print("how it felt");
 lcd.setCursor (0,1);
 lcd.print("before the world");
 delay(4000);
 lcd.clear();
 
 lcd.setCursor (0,0);
 lcd.print("fell at our feet");
 lcd.setCursor (0,1);
 lcd.print("There's such a");
 delay(4000);
 lcd.clear();
 lcd.setCursor (0,0);
 
  lcd.print("difference");
 lcd.setCursor (0,1);
 lcd.print("between us And a");
 delay(4000);
 lcd.clear();
 lcd.setCursor (0,0);
 
   lcd.print("million miles");
 delay(6500);
 lcd.clear();
 lcd.setCursor (0,0);






 chorus1();
 chorus2();
 
 lcd.print("Hello, how are");
 lcd.setCursor (0,1);
 lcd.print("you It's so");
 delay(4000);
 lcd.clear();
 lcd.setCursor (0,0);
 
  lcd.print("typical of me to");
 lcd.setCursor (0,1);
 lcd.print("talk about");
 delay(4000);
 lcd.clear();
 lcd.setCursor (0,0);
 
  lcd.print("myself I'm sorry");
 lcd.setCursor (0,1);
 lcd.print("I hope that ");
 delay(4000);
 lcd.clear();
 lcd.setCursor (0,0);

 lcd.print("you're well Did");
 lcd.setCursor (0,1);
 lcd.print("you ever make it");
 delay(4000);
 lcd.clear();
 lcd.setCursor (0,0);
 
  lcd.print("out of that town");
 lcd.setCursor (0,1);
 lcd.print("where nothing");
 delay(4000);
 lcd.clear();
 lcd.setCursor (0,0);
 
  lcd.print("ever happened");
 lcd.setCursor (0,1);
 lcd.print("It's no secret");
 delay(4000);
 lcd.clear();
 lcd.setCursor (0,0);
 
  lcd.print("that the both of");
 lcd.setCursor (0,1);
 lcd.print("us Are running");
 delay(4000);
 lcd.clear();
 lcd.setCursor (0,0);
 
   lcd.print("out of time So");
 lcd.setCursor (0,1);
 lcd.print("hello from the");
 delay(4000);
 lcd.clear();
 lcd.setCursor (0,0);
 
   lcd.print("other side I");
 lcd.setCursor (0,1);
 lcd.print("must have called");
 delay(4000);
 lcd.clear();
 lcd.setCursor (0,0);
 
   lcd.print("a thousand times");
 lcd.setCursor (0,1);
 lcd.print("To tell you I'm");
 delay(4000);
 lcd.clear();
 lcd.setCursor (0,0);
 
    lcd.print("sorry for");
 lcd.setCursor (0,1);
 lcd.print("everything that");
 delay(4000);
 lcd.clear();
 lcd.setCursor (0,0);
 
    lcd.print("I've done But");
 lcd.setCursor (0,1);
 lcd.print("when I call you");
 delay(4000);
 lcd.clear();
 lcd.setCursor (0,0);
 
    lcd.print("never seem to be");
 lcd.setCursor (0,1);
 lcd.print("home");
 delay(4000);
 lcd.clear();
 lcd.setCursor (0,0);
 
 chorus2();

 chorus1();
 chorus2();
 }
