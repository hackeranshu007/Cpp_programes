#include <iostream>
using namespace std;
class complex
{

    int a, b;

public:
    // Below line means that sumComplex function is allowed do anything with private members;
    friend complex sumComplex(complex o1, complex o2);
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setNumber(2, 5);
    c1.printNumber();

    c2.setNumber(4, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}