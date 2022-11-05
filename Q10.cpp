#include<iostream>
using namespace std;
class shape{
    protected:
double base,height;
public:
void getdata_p(){
    cout<<"enter base and hight ";
    cin>>base>>height;
}
void getdata_s(){
cout<<"enter side: ";
cin>>base;
}
virtual void display()=0;
};
class square:public shape{
public:
void display(){
cout<<"area of square : "<<base*base<<endl;
}
};
class paralleogram:public shape{
public:
void display(){
cout<<"area of parallelogram : "<<base*height<<endl;
}
};
int main(){
    shape *s1,*s2;
    square s;
    s1=&s;
    s1->getdata_s();
    s1->display();

    paralleogram p;
    s2=&p;
    s2->getdata_p();
    s2->display();
    return 0;
}
