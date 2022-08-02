#include<iostream>
using namespace std;

int main() {
  int n; cin >> n;

  int sum_even = 0, sum_odd = 0;

  while(n > 0) {  // 1234
    int digit = n % 10; // digit = 4
    if(digit % 2 == 0) {
      sum_even += digit;  //sum_even = 0
    } else {
      sum_odd += digit; //sum_odd = 5
    }
    n = n / 10; // n = 1234
  }

  cout << sum_even << " " << sum_odd << endl;

  return 0;
}