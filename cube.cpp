#include<bits/stdc++.h>
using namespace std ;
//Write a program in C to display the cube of the number upto given an integer
int main()
{
    int n , cube; 
    cout << " enter nummber";
    cin >> n;

    for(int i=1 ; i <=n; i++)
    {
     cube = i *i*i;
     cout << " cube of " << i <<" is "<< cube << endl ;
    }
}