// Practicing functions, switch statements, typedef
#include <iostream>
#include <string>

typedef unsigned short int usint_t;

std::string PrintColor(usint_t colorIdx) {
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

  usint_t colorIndex = 0;
  usint_t wiegandColor = 2; //Dr. Wiegand likes yellow today

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

  std::cout << "You like: " << PrintColor(colorIndex) << std::endl;
  std::cout << "Dr. Wiegand likes: " << PrintColor(wiegandColor) << std::endl;

  return 0;
}