#include <iostream>
using namespace std;

class Construct
{

public:
    float area;

    Construct()
    {
        area = 0;
    }

    Construct(int a, int b)
    {
        area = a * b;
    }

    void disp()
    {
        cout << area << endl;
    }
};

int main()
{
    Construct o;
    Construct o2(10, 20);

    o.disp();
    o2.disp();
    return 1;
}