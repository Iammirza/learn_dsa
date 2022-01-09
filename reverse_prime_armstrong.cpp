#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int r;
    cout<<"Enter the Any Number You want for Reverse"<<endl;
    cin>>r;

    int reverse = 0;
    while(r>0){
        int lastdigit_r = r%10;
        reverse = (reverse * 10) + lastdigit_r;
        r = r/10;
        
    }
    cout<<reverse<<endl;

    int a;
    cout<<"Enter the Any Number You want for Get Armstrong"<<endl;
    cin>>a;
    
    
    int sum = 0;
    int original_a = a;
    while(a > 0){
        int lastdigit_a = a%10;
        sum += pow(lastdigit_a,3);
        a = a/10;
    }
    if(sum == original_a){
        cout<<"Number is Armstrong"<<sum;
    }
    else{
        cout<<"Number is not Armstrong";
    }


}

