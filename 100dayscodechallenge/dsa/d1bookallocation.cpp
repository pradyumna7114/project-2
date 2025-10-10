// maximum number of pages given to the student must be mini. no student
// should be left everyone should have pages
#include <iostream>
using namespace std;
bool isPossible(int ar[], int n , int s, int pc )
{
    int cp=0,sc=1;
 for(int i = 0; i < n ; i++)
 {
    if(ar[i]>pc)
    return false;
    if(cp+ar[i]>pc)
    { 
        sc++;
        cp=ar[i];
    }
    else
    cp+=ar[i];
    
 }
  return sc<=s;
}
int bs(int arr[], int n,int students)
{ 
    int totalPage=0;
    for(int i = 0 ; i < n ; i++)
    {
        totalPage+=arr[i];
    }

    int s = 0, e = totalPage, mid = -1, ans = -2;
    
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (isPossible(arr,n, students,mid))
        {
            ans=mid;
            e = mid - 1;
        }
        else
        s = mid + 1;
    }
    return ans;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50}; // 5 books with pages
    int length = sizeof(arr) / sizeof(arr[0]);
    int students=3;
    int total = bs(arr, length,students);
    cout << " " << total << endl;
    return 0;
}