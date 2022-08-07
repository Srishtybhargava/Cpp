#include<bits/stdc++.h>
using namespace std ; 
// Write a program in C to display the pattern like right angle triangle using an asterisk
int main()
{
for(int j = 5; j >=1; j--)
{

  for (int i = j ; i >=1 ; i--)
  {
    cout << "*" << " " ; // 5= 5 ; 

  }
  cout << endl; //i=row , j = colmn  1 col
}
}
