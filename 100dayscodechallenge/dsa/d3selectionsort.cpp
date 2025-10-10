//selection sort
#include<iostream>
using namespace std;
int main(){
    int ar[5]={64,25,12,22,11};
    int n = sizeof(ar)/sizeof(ar[0]);
    int small=ar[0];
    for(int j = 0 ; j< n ; j++)
 {
    
    for(int i=0; i<n ; i++)
    {
        if(ar[i]<small)
        small=ar[i];
        swap(small,ar[i]);
        cout<<ar[i]<<endl; 
    }
    if (ar[j]>small)
    swap(ar[j],small);
}
    
    return 0;
}