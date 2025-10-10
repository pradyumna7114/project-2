//check if the array is sorted and rotated
#include<iostream>
using namespace std;
void check(int ar[], int n)
{ 
    int iCount=0;
    for(int i =0; i<n ; i++)
    {
        if(ar[i]>ar[i+1])
        {
            iCount++;
            cout<<"i count in loop"<<iCount;
        }
        cout<<" "<<iCount;
    }
}
int main(){
    int a[5]={3,4,5,1,2};
    int m= sizeof(a)/sizeof(a[0]);
    check(a,m);
    return 0;
}