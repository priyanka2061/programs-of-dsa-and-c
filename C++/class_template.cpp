//TEMPLATE CLASS
#include<bits/stdc++.h>
using namespace std;
template<class x>
 class math
 {
     public:
     x addition(x a,x b)
     {
         cout<<" \n addition of two  variable"<<" "<<a+b;
         return a+b;
     } 
     void division( x a, x b)
     {
         cout<<" \n divison of two "<<" "<<a/b;
     }


 }; 
 main()
 {
     math <int>m;
     m.addition( 3,8);
     m.division(8,2);
     math<float>m2;
     m2.addition(8.9,8.9);
     m2. division(5.8,4.7);

 }