// Write a program in C to read 10 numbers from keyboard and find their sum and average.
#include<bits/stdc++.h>

using namespace std;

int main ()
{int i, n ;
float average , sum=0;
for(i = 1; i <= 10; i++)
{
  int n;
  cin >> n;
  sum = sum + n;
}

average = (sum)/10;
cout << " average is " << average ;
cout << " sum is "<< sum ;



}