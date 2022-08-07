#include<bits/stdc++.h>
using namespace std;
int main()
{

    float buyingamnt , saleamnt , calc ; 
    cout<< " enter buy amount and sale amount ";
    cin>> buyingamnt >> saleamnt ; 
    calc = saleamnt - buyingamnt ;
    
    if(calc>0)
    {
        cout<< "you are in profit of " << calc ; 
    }

    else if(calc == 0)
    {
        cout<<" you are in not in profit nor in loss";
    }
     
     else
     {
        cout<< "youre in loss of " << calc ;
     }



}