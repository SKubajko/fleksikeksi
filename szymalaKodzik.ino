int names[10];
int namesL=0;
int chosen=0;

void chooseProgram(){
  int current=0;
  switch(namesL-current){
    case 1:
      lcd.setcursor(0,0);
      lcd.print(names[current-3]);
      lcd.setcursor(0,1);
      lcd.print(names[current-2]);
      lcd.setcursor(0,2);
      lcd.print(names[current-1]);
      lcd.setcursor(0,3);
      lcd.print("*");
      lcd.print(names[current]);
      break;
    case 2:
      lcd.setcursor(0,0);
      lcd.print(names[current-2]);
      lcd.setcursor(0,1);
      lcd.print(names[current-1]);
      lcd.setcursor(0,2);
      lcd.print("*");
      lcd.print(names[current]);
      lcd.setcursor(0,3);
      lcd.print(names[current+1]);
      break;
    case 3:
      lcd.setcursor(0,0);
      lcd.print(names[current-1]);
      lcd.setcursor(0,1);
      lcd.print("*");
      lcd.print(names[current]);
      lcd.setcursor(0,2);
      lcd.print(names[current+1]);
      lcd.setcursor(0,3);
      lcd.print(names[current+2]);
      break; 
    default:
      lcd.setcursor(0,0);
      lcd.print("*");
      lcd.print(names[current]);
      lcd.setcursor(0,1);
      lcd.print(names[current+1]);
      lcd.setcursor(0,2);
      lcd.print(names[current+2]);
      lcd.setcursor(0,3);
      lcd.print(names[current+3]);
      break; 

  }
  
  }
