#include<bits/stdc++.h>
using namespace std;

class shape {
    public:
     void draw(){
        cout<<"drawing ";
    }
};

class circle : public shape{
    void draw() {
        shape::draw();
        cout<<"a cirlce"<<endl;
    }
};

class triangle : virtual public shape{
    void draw() {
        shape::draw();
        cout<<"a triangle"<<endl;
    }
};

class rectangle : virtual public shape{
    void draw() {
        shape::draw();
        cout<<"a rectangle"<<endl;
    }
};
int main() {

    vector<shape*> shapes;
     shapes.push_back(new circle);
     shapes.push_back(new triangle);
     shapes.push_back(new rectangle);

    for(shape *sh:shapes) {
        sh->draw();
    }
    return 0;
}