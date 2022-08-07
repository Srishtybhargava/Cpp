#include<bits/stdc++.h>
using namespace std ; 
//write a program to find prime number or not .
// prime number = 2 , 3 , 5 , 7 , 11, ....
//prime number are the number that divisible only with their number .


int main()
{
int x ;
cout << " enter the number ";
cin >> x ;

// i to x / iterative i , operative x

for (int i=1; i <= x ; i++)
{
   if( x % i == 0)//not prime 
   {
    cout<<"non - prime"; 
   }
   else
   {
   cout<<"prime number";
   }
}

    

 }   
    



