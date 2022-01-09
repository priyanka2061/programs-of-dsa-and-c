// HOW TO USE CLASS
#include<bits/stdc++.h>
using namespace std;
class priyanka
{
    public:
    string name;
    int age;
    int hight;
    void get()
    {
       cout<<" enter your name";
       cin>>name;
       cout<<"\n enter your age and hight";
       cin>>age>>hight;
    } 
    
    void display();
};
    void priyanka:: display() 
  {   
      cout<<"\n"<<name;
      cout<<"\n"<<age<<" "<<hight;

    } 
int main()
{
    priyanka p;
    p.get();
    p.display();
}