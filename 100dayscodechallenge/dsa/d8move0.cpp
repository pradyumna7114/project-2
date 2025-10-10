//sort zeros to the end without using new array`
#include<iostream>
using namespace std;
void cal(int ar[], int m, int k)
{
   // int s=0; int e=m-1;
    //while(s<e)
    //{
    //     if(ar[s]==k) brute force
    //     {
    //         swap(ar[s],ar[k]);
    //         s++;e--;
    //     }
    //     else s++;
    // }
  
    int nonZero=0;
    for(int i = 0 ; i<m; i++)
{
    if(ar[i]!=0)
    {
        swap(ar[i],ar[nonZero]);
        nonZero++;
    }
}
       for(int i =0; i<m ; i++)
     {
       cout<<ar[i];
     }
    
}// the best part is that this preserves order making it stable solution
int main(){
    int a[5]={0,1,0,3,12};
    int n=sizeof(a)/sizeof(a[0]);
    int key=0;
    cal(a,n,key);
    return 0;
}