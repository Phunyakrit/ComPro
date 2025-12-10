#include<iostream>
using namespace std;

int main(){
    int num;
    int even = 0;
    int odd = 0;

    while(true){
        cout << "Enter an integer: ";
        cin >> num;

        if (num == 0) {
            break; 
        }

        if (num % 2 == 0) {
            even++; 
        } else {
            odd++;  
        }
    }

    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd << endl;
    return 0;
}