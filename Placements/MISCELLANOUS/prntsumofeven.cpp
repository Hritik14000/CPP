#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the n";
    cin >> n;
    int sum = 0;
    // int i = 0;
    // while(i <= n) {
    //     if(i%2 == 0) {
    //         sum += i;
    //     }
    //     i += 2;
    // }

    for(int i = 0; i <= n; i += 2) {
        sum += i;
    }

    cout << "The sum is: " << sum << endl;
  
}