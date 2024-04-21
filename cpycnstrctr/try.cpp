#include <bits/stdc++.h>
using namespace std;

class A{ 
    int a;
    public: 
    A(){
        a = 10;
    }
    void seta(int no) {
        this->a = no;
    }
    void geta() {
        cout<<this->a;
    }
    A(A &obj) {
        this->a = obj.a;
    }
};

int main()
{
    A ob1;
    ob1.seta(20);
    A ob2;
    ob2.geta();
    ob2 = ob1;
    ob2.geta();
    return 0;
}
