//rotate an array
#include<iostream>
using namespace std;
int main(){
    int a[7]={1,2,3,4,5,6,7};
    int b[7]={};
    int n = sizeof(a)/sizeof(a[0]);
    int key= 3;
   int newIndex=-1;
 for (int i =0; i<n ;i++)
 {
    newIndex=(i+key)%n;
    b[newIndex]=a[i];
 }
 for(int i =0; i<n ; i++)
 {
    cout<<b[i];
 }
    return 0;
}