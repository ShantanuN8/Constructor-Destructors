/* constructor overloading 
Name-Shantanu Nawathey
PRN-22070123107
Exp_13
*/
#include<iostream>
using namespace std;
class demo
{
    int a;
    public:
demo() //default constructor
{
 a = 10;
}
demo(int x) //parameterized constructor
{
    a = x;
}
demo(demo&aa) //copy constructor
{
    a=aa.a;
}
void putdata()
{
    cout<<"\nA="<<a;
}
};
int main()
{
    demo aa;
    demo bb(20);
    demo cc(aa);

    aa.putdata();
    bb.putdata();
    cc.putdata();
    return 0;
} 
/*OUTPUT
A=10
A=20
A=10
*/

/*Name-Shantanu Nawathey
PRN-22070123107
Exp-13(Part-B)*/
#include<iostream>
using namespace std;

class area 
{
private:
    float length;
    float width;
    
public:
    area() : length(10), width(20)
    {
        int ar = length * width;
        cout << "the area of room is: " << ar << endl;
    }

    area(float l, float b) : length(l), width(b)
    {
        float ar = length * width;
        cout << "the area of room is: " << ar << endl;
    }
};

int main()
{ 
    area A1;
    area A2(11.52, 20);
    area A3(15.20, 20.20);

    return 0;
}

/*OUTPUT
the area of room is: 200
the area of room is: 230.4
the area of room is: 307.04
*/

/*Name-Shantanu Nawathey
PRN-22070123107
Exp-13(Part-C)*/
#include<iostream>
using namespace std;

class construct
{
public:
    int a, b; // Member variables

    // Default constructor
    construct()
    {
        a = 10;
        cout << "a: " << a << endl;
    }

    // Constructor with one int argument
    construct(int x)
    {
        a = 29;
        cout << "x: " << x << endl;
    }

    // Constructor with two int arguments
    construct(int a_val, int b_val)
    {
        a = a_val;
        b = b_val;
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
    }

    // Constructor with int and float arguments
    construct(int a_val, float b_val)
    {
        a = a_val;
        cout << "a: " << a << endl;
        cout << "b: " << b_val << endl;
    }
};

int main()
{
    construct obj1;                    // Default constructor
    construct obj2(42);                // Constructor with one int argument
    construct obj3(20, 30);            // Constructor with two int arguments
    construct obj4(123, 12.22f);       // Constructor with int and float arguments

    return 0;
}

/*OUTPUT
a: 10
x: 42
a: 20
b: 30
a: 123
b: 12.22
*/


