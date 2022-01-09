#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    char button;
    cout<< "Enter the First Number"<<endl;
    cin>>n1;
    cout<<"Enter the Second Number"<<endl;
    cin>>n2;
     cout << "Enter the Action Operator" << endl;
    cin >> button;

    switch (button)
    {
    case '+':
        cout << "Sum of Two Number : " << n1 + n2;
        break;
    case '-':
        cout << "Subtract of Two Numbers" << n1 - n2;
        break;
    case '*':
        cout << "Product of Two Numbers" << n1 * n2;
        break;
    case '/':
        cout << "Dividant of Two Numbers" << n1 / n2;
        break;
    case '%':
        cout << "Reminder of Two Numbers" << n1 % n2;
        break;
    }
}
