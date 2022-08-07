#include<bits/stdc++.h>
using namespace std;
//sum of n natural numbers
int main()
{
int n ,sum;
cout<<"enter a number";
cin >>n;
sum = 0;
//sum = sum + i; // 1 2 3 4 5 6 7 8 9 10 11 12 13 14.................23 
for(int i=1;i <=n; i++){
    sum = sum +i ; 

}
cout << "sum is "<< sum;
}