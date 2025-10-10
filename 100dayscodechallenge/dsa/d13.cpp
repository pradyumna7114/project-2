#include <iostream>
#include <string>
using namespace std;

int main()
{

    std::string myString = "A man , a plan , a canal : Panama";
    std::string cleanString;
    //   for(int i=0;  i<myString.length(); i++)
    //   {
    //     if(myString[i]>='A'&& myString[i]<='Z')
    //     {
    //       newString += (myString[i] - 'A'+'a');
    //     }

    //     else
    //     newString+=myString[i];
    //   } without predefined fuction

    // for(int i =0; i<myString.length(); i++)
    // {
    //     newString+= tolower(myString[i]);
    // }//with predefined function

    // for(int i=0; i<newString.length(); i++)
    // {
    //     if(newString[i] >='a' && newString[i]<='z')
    //     {
    //         cleanString+= newString[i];
    //     }
    // }

    // best way to write it
    for (int i = 0; i < myString.length(); i++)
    {
        char ch = myString[i];

        ch = (ch >= 'A' && ch <= 'Z') ? (ch - 'A' + 'a') : ch;
        if (ch >= 'a' && ch <= 'z')
        {
            cleanString += ch;
        }
    }

    int s = 0, e = cleanString.length() - 1;
    bool isPalindrome = true;

    while (s <= e)
    {
        if (cleanString[s] != cleanString[e])
        {
            isPalindrome = false;
            break;
        }

        s++;
        e--;
    }
    if (isPalindrome)
        cout << "The string is a palindrome" << endl;
    else
        cout << "The string is not a palindrome" << endl;

    cout << "clean string" << cleanString << endl;
    return 0;
}