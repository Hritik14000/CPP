#include<iostream>
using namespace std;

int main() {
  int S,E,W;
  cin>>S>>E>>W;
  for(int i=S;i<=E;i=i+W){
      int c=(i-32)*5/9;
      cout<<i<<" "<<c<<endl;
  }
  return 0;
}