/*
 *      Author: Jared Neisel
 *        Date: April 4, 2019
 * Description: Write a function that counts the number of occurrences of a substring in a line
 * of text. The function should work for both upper and lowercase characters.
 */

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <iomanip>
#include <string>

using namespace std;
//function prototypes

int main()
{
//declaring strings
string readableInputString;
string findableString;
int substringCounter = 0;

//prompts the user to enter in readable string
cout << endl << "Enter in the string you want to be read by this program: ";
cin >> readableInputString;

//prompts the user to enter in the substring to be found in the string above
cout << "Enter in the substring that you want to be found above: ";
cin >> findableString;

//reads through the string array and searches for the substring prompted above 
int npos = readableInputString.find(findableString, 0);
    while (npos != string::npos){
        //increments the number of times the substring is found
        substringCounter = substringCounter + 1;
        npos = readableInputString.find(findableString, npos + 1);
    }

//outputs the given number of times the substring was found within the string (count)
cout << endl << endl << "The substring " << findableString << " was found a total of " << substringCounter << " times within the given string!" << endl << endl;

    return 0;
}


