// void reverseArray(vector<int> &arr , int m) {
//     int s = m + 1; int e =arr.size()-1 ;
//     while(s<e)
//     {
//        swap(arr[s],arr[e]);
//        s++; e--;
//     }

//}//https://www.naukri.com/code360/problems/reverse-
// the-array_1262298?leftPanelTabValue=SUBMISSION

// 123 is num1 256 is num 2. op should be 122356 . returned by num1. 
// means no extra array
#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {

    int i = 0, j = 0;
    int k = 0;
    while( i<n && j<m) {
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
        
    }

    //copy first array k element ko
    while(i<n) {
        arr3[k++] = arr1[i++];
    }

    //copy kardo second array k remaining element ko
    while(j<m) {
        arr2[k++] = arr2[j++];
    }
}

void print(int ans[], int n) {
    for(int i=0; i<n; i++) {
        cout<< ans[i] <<" ";
    }
    cout << endl;
}

int main() {

    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};

    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);

    print(arr3, 8);


    return 0;
}