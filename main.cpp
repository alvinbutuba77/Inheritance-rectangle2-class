#include <iostream>
using namespace std;

class Rectangle
{//declarations
protected:
    int length, height, answer;

public:
    void input();
    void calculate();
    void output();
};//end class

//derived class triangle
class triangle:public Rectangle
{
public:
    void input();
    void calculate();
    void output();

};

//derived class square
class square:public Rectangle
{
public:
    void input();
    void calculate();
    void output();
};

//member function definitions
//for class rectangle
void Rectangle::input()
{
    cout << "enter length of the rectangle"<<endl;
    cin >>length;
    cout << "enter width of the rectangle"<<endl;
    cin >> height;
}

void Rectangle::calculate()
{
answer = length * height;
}
void Rectangle::output()
{
cout<<"The area of the rectangle is:"<<answer<<endl<<endl;
cout<<"******************************************************"<<endl;
}

//for class triangle
void triangle::input()
{
cout<<"enter length of the triangle"<<endl;
cin>>length;
cout<<"enter the height of the triangle"<<endl;
cin>>height;
}

void triangle::calculate()
{
answer = 0.5 * length * height;
}

void triangle::output()
{
cout<<"The area of the triangle is:"<<answer<<endl;
cout<<"******************************************************"<<endl;
}

//for class square
void square::input()
{
cout<<"enter the length of the square"<<endl;
cin>>length;
cout<<"enter the height of the square"<<endl;
cin>>height;
}

void square::calculate()
{
answer = length * height;
}

void square::output()
{
cout<<"The area of the square is:"<<answer<<endl<<endl;
cout<<"******************************************************"<<endl;
}


int main()
{
    Rectangle r; //object r of class rectangle

    //use of object to access class member functions
    r.input();
    r.calculate();
    r.output();

    triangle r2;
    r2.input();
    r2.calculate();
    r2.output();

    square r3;
    r3.input();
    r3.calculate();
    r3.output();

    return 0;
}
