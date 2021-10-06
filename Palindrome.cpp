//Author: Nathan Zou
//Date: 10/10/21
//Code takes a string input from user and checks if it is a palindrome
//Memset help from Nikhil Nayak
//ASCII conversion idea from Chris Zou
#include <iostream> 
#include <cstring>
using namespace std;

int main() {
  char input[81]; //Input string  
  char str[81]; //Edited input string
  char output[81]; //Reversed input string
  int count = 0;
  memset(input, 0, 81); //Clear memory for input
  memset(str, 0, 81); //Clear memory for str
  memset(output, 0, 81); //Clear memory for ouput

  //Initialize strings
  for (int i = 0; i < 80; i++) {
    input[i] = 0;
    str[i] = 0;
    output[i] = 0;
  }

  //Read in input from user
  cout << "Enter a string." << endl;
  cin.get(input, 81);
  cin.get();

  //Edit the input string and put it into str (punctionation removed)
  for (int i = 0; i < 80; i++) {
    //if uppercase put into str
    if (input[i] >= 65 && input[i] <= 90) {
      str[count] = input[i];
      count++;
    }
    //Convert lowercase into uppercase (-32 from ASCII value) then put into str
    else if (input[i] >= 97 && input[i] <= 122) {
      str[count] = input[i] - 32;
      count++;
    }
  }

  count--;

  //Run through str backwards and put it into output
  for (int i = 0; i < 80; i++) {
    if (str[count-i] != 0) { //If str is not null add to output
      output[i] = str[count-i];
    }
  }

  //Compare strings
  if (strcmp(str, output) == 0) {
    cout << "Is a Palindrome." << endl;
  }
  else {
    cout << "Is NOT a Palindrome." << endl;
  }

  return 0; 
}
