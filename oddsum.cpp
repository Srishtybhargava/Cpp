#include<bits/stdc++.h>
using namespace std ; 

int main()
{
    int n, sum =0 ; 
    cout << "enter a number ";
    cin >> n ; 
 
    // for ( int i = 1 ; i <= 2*n ; i++){

    // if(!(i % 2 == 0))
    //  {
    //     cout<<  i << " \t";
    //     sum = sum + i ; 
    //  }

    // }
    for (int i = 1 ; i<=2*n; i=i+2)
    {
       cout<< i << "\t";
        sum = sum+ i;
    }
    cout << "sum is " << sum ; 
    
}