#include<bits/stdc++.h>
using namespace std ;
// Write a program in C to display the multiplication table of a given integer

int main()
{
int n , table  ; 
cout <<" enter a number";
cin >> n ;
cout << "table is " << endl; 
for(int i=1 ; i<=10 ;i++)
{
    table = n * i ;
    cout << n << "*" << i << " is " << table << endl;
}

}