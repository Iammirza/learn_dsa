#include <iostream>
using namespace std;

int main()
{

    int row, col;
    cout << "Enter the Row and Column" << endl;
    cin >> row >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << "New Pattern Start with Previous Input" << endl;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == row){
                 cout << "*";
            }
            else if(j == 1 || j == col){
                cout << "*";
            }
            else{
                cout<<" ";
            }
           
        }
        cout<<endl;
    }

    int n;
    cout<<"Enter the Number Half Inverted Payramids"<<endl;
    cin>>n;
 
        for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    int m;
    cout<<"Enter the Number for Next Payramids"<<endl;
    cin>>m;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(j <= m-i){
                cout<<"  ";
            } else{
                cout<<"* ";
            }
            
        }
        cout << endl;
    }

        for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(j <= m-i){
                cout<<"  ";
            } else{
                cout<<j<< " ";
            }
            
        }
        cout << endl;
    }


}