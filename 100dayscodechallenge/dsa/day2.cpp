#include<iostream>
using namespace std;
bool isPossible(int arrr[], int n , int c , int maxPosition)
{
    int currentPositon=arrr[0],cowCount=1;
    for(int i = 0 ; i < n ; i++)
    {
       if(arrr[i] - currentPositon>=maxPosition)
       {
        cowCount++;
        currentPositon=arrr[i];
       }
       
    }
    if(cowCount<c)
    {
        return false;
    }
   return true;
}
int bs(int arr[], int n, int c)
{
    int s=0,e=arr[n-1]-arr[0], mid=-1,ans=-2;
    while(s<=e)
    {
        mid= s+(e-s)/2;
        if(isPossible(arr,n,c,mid))
        {
            ans=mid;
            s=mid+1;
        }
        else 
        e=mid-1;
        
    }
    return ans;
}
int main(){
    int ar[5]={1,4,5,7,9};
    int length=sizeof(ar)/sizeof(ar[0]);
    int cows=3;
    int results=bs(ar,length,cows);
    cout<<" "<<results<<endl;
}