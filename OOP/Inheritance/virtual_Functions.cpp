#include<iostream>
#include<string>

using namespace std;

class Shape{
    public:

    //virtual function
    virtual void calculate(){
        cout<<"Area of your Shape";
    }

    //virtual destructor
    virtual ~Shape(){
        cout<<"Shape Distructor Called"<<endl;
    }
    virtual void display();
};

void Shape::display(){
    cout<<"The display function called";
}

class Rectangle: public Shape{
    public:
        int width,hight,area;

        void calculate(){
          width = 20;
          hight = 10;
          area = width * hight;
        }

        void display(){
            cout<<"Area: "<<area<<endl;
        }
        ~Rectangle(){
            cout<<"Rectangle Distructor Called"<<endl;
        }
};

class Square:public Shape{
    public:
    int side, area;

    void calculate();
    void display();
    ~Square(){
        cout<<"Square Distructor Called"<<endl;
    }
};
void Square::calculate(){
    side = 7;
    area = side*side;
}

void Square::display(){
    cout<<"Area: "<<area<<endl;
}


int main() {
Shape* S;


Rectangle r;
S = &r;
S->calculate();
S->display();


Square q;
S = &q;
S->calculate();
S->display();
}