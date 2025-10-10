#include<iostream>
using namespace std;
char maxOcc(string s){

    int ar[26]={0};
    for(int i=0; i<s.length(); i++)
    {
        char ch= s[i];
        int number=0;
        if(ch >='a' && ch<='z')
        {
            number= ch - 'a';
        }
        else{
            number= ch - 'A';
        }
        ar[number]++;
    }

    int max=-1;  int ans=0;
    for(int i=0; i<26; i++)
    {
        if(max<ar[i])
        {
            ans=i; 
            max=ar[i];
        }
    }
    char finalAns= 'a'+ ans;
    for(int i=0; i<s.length(); i++)
    {
     char ch=0;
     if(s[i]==' ')
     {
        
     }
    }

    return finalAns;
}
int  main()
{
    string s;
    cin>>s;
    char ans=maxOcc(s);
    cout<<" "<< ans << endl;
    return 0;
}