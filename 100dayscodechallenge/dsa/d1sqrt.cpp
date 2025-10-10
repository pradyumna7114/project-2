#include<iostream>
using namespace std;
int bs(int a){
    int s= 0 , e = a - 1 , mid = -1, ans = -2; 
    while(s<=e)
    {
        mid = s+(e-s)/2;
        if((mid*mid)>= a )
        {
          e=mid-1;
        }
        else 
        ans=mid;
        s=mid+1;

    }
    return ans;
}
int main(){
    int a=6;
    int result= bs(a);
    cout<<" "<< result;
    return 0;
}