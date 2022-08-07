#include <bits/stdc++.h>

using namespace std ; 

// Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene

int main ()
{
int side1 , side2 , side3 ; 
cout<< "enter side1, side2 , side3" ; 
cin>> side1 >> side2 >> side3;

if(side1==side2 && side2==side3) 
{
    cout<< " it is equialteral traingle";
}

 if(side1==side2 && side2!=side3 || side2==side3 && side1!=side2);
 {
    cout<< " it is isoceles traingle";
 }

 if(side1!=side2!=side3 || side1!= side2 )
 {
    cout<<" it is scalene traingle "; 
 }

 
}