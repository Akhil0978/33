#include <iostream>
#include <math.h>
using namespace std;
class volume
{
protected:
    float side, rad;

public:
    void get_data_c()
    {
        cout << "enter side : ";
        cin >> side;
    }
    void get_data_s()
    {
        cout << "enter radius : ";
        cin >> rad;
    }
    virtual void display() = 0;
};
class cube : public volume
{
    void display()
    {
        float ans = side * side * side;
        cout << "vol of cube is " << ans;
    }
};
class sphere : public volume
{
    void display()
    {
        cout << "vol of sphere is " << 1.334 * 3.14 * pow(rad, 3);
    }
};
int main()
{
    volume *v, *v1;
    sphere s;
    cube c;
    v = &s;
    v->get_data_s();
    v->display();
    v1 = &c;
    v1->get_data_c();
    v1->display();
    return 0;
}
