#include <iostream>
#include<climits>
using namespace std;

int rowSum(int d[3][4], int row, int col) {
	int maxi=INT_MIN;   
	int rowIndex=-1;

	for(int i=0; i<row; i++) {

		int sum=0;
		for(int j=0; j<col; j++) {

			sum = sum+d[i][j];
		}

		if(sum > maxi) {
			maxi=sum;
			rowIndex= row;
		}
		cout<< " the maxi sum is : " << maxi << endl;
		cout<< endl;
	}
	return row;

}
void printSum(int c[3][4], int row, int col ) {


	for(int i=0; i<row; i++) {

		int sum=0;
		for(int j=0; j<col; j++) {

			sum = sum+c[i][j];
		}
		cout<<" sum of row " << i <<" =" << sum<< endl;
		cout<< endl;
	}
}//for col reverse places of row and col


bool isPresent(int b[3][4], int t, int r, int c)
{

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (b[i][j]== t)
            {
                
                return true;
            }
            else
                return false;
        }
    }
}

int main()
{
    // int a[3][3]={1,2,3,4,5,6,7,8,9};

    // for(int row=0; row<3; row++){
    //     for(int col=0; col<3; col++){
    //        cin>>a[row][col];
    //     }
    // }

    // for(int row=0; row<3; row++){
    //     for(int col=0; col<3; col++){
    //        cout<< a[row][col];
    //     }
    // } simple initialization for rows and columns

    //  int a[3][4]={{1,11,111,1111},
    //              {2,22,222,2222},
    //              {3,33,333,3333}};
    //     for(int row=0; row<3; row++){
    //      for(int col=0; col<4; col++){
    //         cout<< a[row][col] << " " ;
    //     }
    //     cout<< endl;
    // } another way  of initializing

    int a[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }

    int target;
    cin >> target;
    if (isPresent(a, target, 3, 4))
    {
        cout << " the target is present" << endl;
    }   
    else
        cout << " target is  absent" << endl;

    printSum(a, 3, 4);
    cout<< " the max row index is : "<<rowSum(a,3,4)<< endl;
    return 0;
}//20 on ss