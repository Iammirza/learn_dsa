#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i + 1; j++){

            cout<<i<<" ";
        }
        cout<<endl;
    }

    cout<<"Floyd's Pyramids"<<endl;
    int number = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){

            cout<<number<<" ";
            number++;
        }
        cout<<endl;
    }
}