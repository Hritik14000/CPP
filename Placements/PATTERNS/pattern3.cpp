#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int k;
    for(int i=1;i<=n;i++){
        k=i;
        for(int j=1;j<=i;j++){
          cout<<k++;  
        }
        cout<<endl;
    }

     return 0; 
}
