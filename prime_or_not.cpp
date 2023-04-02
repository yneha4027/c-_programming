#include<iostream>
using namespace std;
int is_Prime(int n)
{


// 1 is not a prime number
if (n == 1||n==0) {
        return false;
    }

// Check for divisibility by numbers from 2 to n-1
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

// If the function has not returned yet, n is a prime number
    return true;
}

int main() {
    int n;
    cout<< "Enter a number: ";
    cin >> n;

    if (is_Prime(n)) {
        cout << n << " is a prime number" << endl;
    } else {
       cout << n << " is not a prime number" << endl;
    }

    return 0;
}

