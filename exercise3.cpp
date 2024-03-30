/* Write a program in C++ to display n terms of natural
numbers and their sum. */

#include <iostream>
using namespace std;

int main(){

    int i, n, sum = 0;

    cout << "Input a number of terms : ";
    cin >> n;
    cout << "The natural numbers upto 7th terms are: " << endl;

    for(i = 1; i <= n; i++){
        cout << i << " ";

        sum = sum + i;
    }
    cout << "\nThe sum of the natural numbers is: " << sum << endl;
    
    return 0;
}