/* Write a program in C++ to find the perfect numbers between
1 and 500. The perfect numbers between 1 to 500 are: 6, 28, 496*/

#include <iostream>
using namespace std;

int main(){
    
    int i = 1, k = 1, sum = 0;
    
    while(i <= 500){
        while(k <= 500){
            if (k < i){
                if(i % k == 0)
                sum = sum + k;
            }
            k++;
        }
        if(sum == i){
            cout << i << " " << endl;
        }
        i++;
        k = 1;
        sum = 0;
    }
}