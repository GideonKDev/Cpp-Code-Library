#include<iostream>
#include<string>

using namespace std;

class Polygon{
protected:
    int width;
    int len;

public:
    Polygon();
    void getDimensions();
    virtual void getArea()=0;//will be overridden by the sub classes
};

Polygon::Polygon(){
    cout<<"Length: ";
    cin>>len;

    cout<<"Width: ";
    cin>>width;

}
void Polygon::getDimensions(){
    cout<<"Length: "<<len<<endl;
    cout<<"Width: "<<width<<endl;
}

class Rectangle: public Polygon{
public:
    Rectangle(){}
    void getArea(){
        float area = len*width;
        cout<<"Area: "<<area<<endl;
    }
};

class Triangle: public Polygon{
public:
    Triangle(){}
    void getArea(){
        float area = len*width*0.5;
        cout<<"Area: "<<area<<endl;
    }
};

int main(){
    cout<<"Enter the Rectangle Dimensions: "<<endl;
    Rectangle r;
    r.getArea();

    cout<<"Enter the Triangle Dimensions: "<<endl;
    Triangle tr;
    tr.getArea();

    cout<<"Enter the General polygon Dimensions: "<<endl;
   // Polygon p;
    //p.getArea();

    return 0;

}
