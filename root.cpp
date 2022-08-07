// . Write a C program to calculate the root of a Quadratic Equation

// b d a c :  root b2 - 4ac = d ; -b +- d (root ) / 2a = roots 

#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int a , b ,c , d;
    float root1 , root2;

    cout << "enter the values of a , b , c ,d "; // sqrt()
    cin >> a >> b >> c ;

    d = b*b- 4 *a *c;

  d = sqrt(d);

  root1 = ((-1)*b + d ) / (2 * a );

  root2 = ((-1)*b - d ) / (2 * a );

  cout<< root1 << " " << root2 ;

}


