#include<iostream>
using namespace std;
int  main(){
    int ar[5]={12,11,13,5,6};
    int n = sizeof(ar)/sizeof(ar[0]);
    
    for(int i = 1; i<n ; i++)
    {
        int key =ar[i];
        int j = i-1;
        while(j>=0 && ar[j]>key)
        {
          ar[j+1]=ar[j];
          j--;
        }
        ar[j+1]=key;
         
    }
     for (int i = 0; i < n; i++) {
        cout << ar[i] << " ";
    }
    return 0;
}