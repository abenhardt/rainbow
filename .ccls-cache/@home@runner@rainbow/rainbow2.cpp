// Practicing functions, switch statements, enums
#include <iostream>
#include <string>

// typedef unsigned short int usint_t;

enum Color_t {RED, ORANGE, YELLOW, GREEN, BLUE, INDIGO, VIOLET};

std::string PrintColor(Color_t colorIdx) {
  std::string returnString = "";
  
  switch (colorIdx)
    {
      case 0: returnString = "Red"; break;
      case 1: returnString = "Orange"; break;
      case 2: returnString = "Yellow"; break;
      case 3: returnString = "Green"; break;
      case 4: returnString = "Blue"; break;
      case 5: returnString = "Indigo"; break;
      case 6: returnString = "Violet"; break;
      default: returnString = "Invalid Color"; break;
    }
  
  return returnString;
}

int main(){
  int colorIndex = 0;
  Color_t colorValue = RED;
  Color_t wiegandColor = YELLOW; //Dr. Wiegand likes yellow today
  
  std::cout<< "What is your favorite color of the rainbow?" << std::endl
    << "0 - Red" << std::endl
    << "1 - Orange" << std::endl
    << "2 - Yellow" << std::endl
    << "3 - Green" << std::endl
    << "4 - Blue" << std::endl
    << "5 - Indigo" << std::endl
    << "6 - Violet" << std::endl;
  std::cout << "Enter index: ";
  std::cin >> colorIndex;
  colorIndex = colorValue;

  std::cout << "You like: " << PrintColor(colorValue) << std::endl;
  std::cout << "Dr. Wiegand likes: " << PrintColor(wiegandColor) << std::endl;
  
  return 0;
}