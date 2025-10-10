#include<iostream>
using namespace std;
int main(){
    int ar[4]={5,1,6,3};
    int n= sizeof(ar)/sizeof(ar[0]);
    for(int i = 0 ; i< n-1; i++)
    {
      int minIndex=i;
     for(int j=i+1; j<n ; j++)
     {
    
        if(ar[j]<ar[minIndex])
        {
            minIndex=j;
        }

        swap(ar[i],ar[j]);
      
        }
          cout<<ar[i]<<" ";
}
    return 0;
}