#include<iostream>
using namespace std;

int main() {
int i, j, k ,a;
cout << "Enter n: ";
int n; cin >> n;
for(i=n;i>=1;i--)
{
    a=n-i+1;
for(j=1;j<i;j++)
{
cout<<" ";
}
for(k=1;k<=n-i+1;k++)
{
cout<<a++;
}
cout<<"\n";
}

  return 0;
}