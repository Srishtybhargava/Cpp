//Write a program in C to display the multiplication table of a given integer
#include<bits/stdc++.h>
using namespace std ;
// Write a program in C to display the multiplication table of a given integer

int main()
{
int table, x  ; 
cout <<" enter a number";
cin >> x ;
cout << "table is " << endl; 
for(int n=1 ; n <= x ;n++)
{
for(int i=1 ; i<=10 ;i++)
{
    table = n * i ;
    cout << n << "*" << i << " is " << table << endl;
}}

}