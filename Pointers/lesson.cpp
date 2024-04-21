#include<iostream>
using namespace std;

class B {
    public:

         virtual void show() {
            cout<<"Class B"<<endl;
        }

         void check() {
            cout<<"Check"<<endl;
        }
        
};

class D : public B {
    public:
        void show() {
            cout<<"class D"<<endl;
        }
        void other() {
            cout<<"other";
        }

         void check() {
            cout<<"Check2"<<endl;
        }
};

int main()
{
    D *ptr;
    D b;
    ptr = &b;

    ptr->show();
    ptr->check();
    return 0;
}