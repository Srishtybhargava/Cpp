#include<bits/stdc++.h>
 
 using namespace std ;

 int main()

 {
  int x , y;
cout << " enter the values "; 
cin >> x >> y;
  // kis quadrant mein yeh rhnege ; x, y + = 1 ;  
 if(x > 0 && y > 0 )
 {
   cout << " it is in 1st quadrant " ;
 }

 if (x < 0 && y >0)
 {
   cout << " it is in 2nd quadrant";
 }

 if (x < 0 && y < 0)
 {
   cout << "it is in 3rd quadrant";
 }

 if (x > 0 && y < 0)
 {
   cout << " it is in 4th quadrant ";
 }

 if ( x == 0 && y == 0)
 {
   cout << " origin";

 }

 }
 