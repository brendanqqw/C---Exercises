/* Write a Program in C++ to find the first 10 natural numbers.
Sample output:
The natural numbers are:
1 2 4 5 6 7 8 9 10 */

#include <iostream> 
using namespace std;

int main(){

    cout << "Find the first 10 natural numbers." << endl;
    cout << "----------------------------------" << endl;
    cout << "The natural numbers are:" << endl;

    for(int i = 1; i <= 10; i++){
        cout << i << " ";
    }
    return 0;
}