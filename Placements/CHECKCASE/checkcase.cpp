#include<iostream>
using namespace std;

int main(){
 char v;
    cin>>v;
if(v>='A' && v<= 'Z'){
    cout<<"1"<<endl;
}
    else if(v>='a' && v<='z'){
        cout<<"0"<<endl;
    }
        else{
            cout<<"-1"<<endl;
        }
    
    }
