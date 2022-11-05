#include<iostream>
using namespace std;
class shape{
    protected:
int x,y;
public:
void getdata(int x,int y){
   this->x=x;
    this->y=y;
}
virtual void display_area(){
    cout<<"0";
}

};
class triangle:public shape{
void display_area(){
    cout<<"trinagle's area : "<<0.5*x*y<<endl;
}
};
class rectangle:public shape{
void display_area(){
    cout<<"rectangle's area : "<<x*y<<endl;
}
};
int main(){
    triangle t;
    shape *s,*s_r;
    s=&t;
    s->getdata(4,5);
    s->display_area();
    rectangle r;
    s_r=&r;
    s_r->getdata(5,4);
s_r->display_area();
    return 0;
}
