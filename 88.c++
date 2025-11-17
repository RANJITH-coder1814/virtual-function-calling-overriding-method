#include<iostream>
using namespace std;
class base{
    public:
   virtual void fun(){
        cout<<"Display the base";
    }
};
class Derived:public base{
    void fun(){
        cout<<"Derived class display";
    }
};
int main(){
    Derived d;
    base *p=&d;
    p->fun();
}