#include <iostream>
using namespace std;
// Note: No need for a separate reverse function if you fill the array from the end
void findArraySum(int a[], int n, int b[], int m) {
    int o = (n > m) ? n : m;
    int c[o + 1] = {0}; // An array for the result, with an extra space for carry

    int i = n - 1;
    int j = m - 1;
    int k = o;
    int carry = 0;

    // Step 1: Add digits from both arrays
    while (i >= 0 && j >= 0) {
        int sum = a[i] + b[j] + carry;
        c[k] = sum % 10;
        carry = sum / 10;
        i--;
        j--;
        k--;
    }

    // Step 2: Handle remaining elements of array a
    while (i >= 0) {
        int sum = a[i] + carry;
        c[k] = sum % 10;
        carry = sum / 10;
        i--;
        k--;
    }

    // Step 3: Handle remaining elements of array b
    while (j >= 0) {
        int sum = b[j] + carry;
        c[k] = sum % 10;
        carry = sum / 10;
        j--;
        k--;
    }

    // Step 4: Handle the final carry
    while (carry != 0) {
        c[k] = carry % 10;
        carry = carry / 10;
        k--;
    }
    
    // Step 5: Print the final result
    // The result is stored in c starting from index k+1
    for (int p = k + 1; p <= o; p++) {
        std::cout << c[p];
    }
    std::cout << std::endl;
}

int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {6};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    
    findArraySum(a, n, b, m);
    
    return 0;
}