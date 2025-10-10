#include<iostream>
using namespace std;
char toLowerCase(char ch)
{
    if(ch>='a'&& ch<='z')
    {
        return ch;
    }
    else{
        char temp= ch - 'A' + 'a';
        return temp;
    }
}
int getLength(char arr[]){
  int  count = 0;
  for(int i =0; arr[i]!='\0'; i++)
  {
    count++;
  }
  return count;
}
void reverse(char nam[], int n)
{
  int s=0, e=n-1;
  while(s<e)
  {
    swap(nam[s++],nam[e--]);
  }
   
}
bool checkPalindrome(char a[], int m)
{
  int s=0, e=m-1;
  while(s<=e)
  {
    if(a[s]!=a[e])
    {

        return 0;
    }
            s++; e--;
  }
      return  1 ;
}


int main()

{
    char name[20];
    cin >> name;
    cout << "your name is : "<<name<<endl;
    int len = getLength(name);
    cout<<" length of the string is : " << len <<endl;
    reverse(name,len);
    cout<<" your  reverse name is : "<<name<< endl;
    cout<<" palindrome or not"<<  checkPalindrome(name,len)<< endl;
    cout<<"character to lowercase"<<toLowerCase('b')<< endl;
    return 0;
}