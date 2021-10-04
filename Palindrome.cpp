#include <iostream> 
#include <cstring>
using namespace std;

int main() {
  char input[81];
  char converter[81];
  char checker[81];
  int convertercounter = 0;
  int finalcheck = 0;
  cout << "Enter a string" << endl;
  cin.get(input, 81);

  for (int i = 0; i < strlen(input); i++) {
    if (isalpha(input[i]) != 0) {
      converter[convertercounter] = toupper(input[i]);
      convertercounter++;
    }
  }

  for (int i = 0; i < strlen(converter); i++) {
    checker[i] = converter[strlen(converter)-1-i];
  }

   for (int i = 0; i < strlen(converter); i++) {
     if (checker[i] == converter[i]) {
	finalcheck++;
      }
    }

    if (finalcheck == strlen(converter)) {
      cout << "PALINDROME. \n";
      cout << "Your string after conversion. \n";
      cout << converter;
    }
    else {
      cout << "NOT a PALINDROME. \n";
      cout << "Your string after conversion. \n";
      cout << converter;
    }
    return 0;
}
