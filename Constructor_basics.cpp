#include<iostream>
using namespace std;
class student
{
    int rollno;
    char name[50];
    double fee;

    public:
    student()
    {
        cout<<"enter the rollno:";
        cin>>rollno;
        cout<<"enter the name:";
        cin>>name;
        cout<<"enter the fee:";
        cin>>fee;
    }

void display()
{
    cout<<endl<<rollno<<"\n"<<name<<"\n"<<fee;
}
};
int main()
{
    student s;
    s.display();
    
}
/*
Output
enter the rollno:12308
enter the name:Seema
enter the fee:20000

12308
Seema
20000
*/


/*Defining the constructor inside the class*/
#include<iostream>
using namespace std;
class date
{
    int d;
    int m;
    int y;

    public:
    date()
     {
        cout<<"enter the date:";
        cin>>d;
        cout<<"enter the month:";
        cin>>m;
        cout<<"enter the year:";
        cin>>y;
    }
void display()
{
    cout<<endl<<d<<"\t"<<m<<"\t"<<y;
}
};
int main()
{
    date d2;
    d2.display();
    
}
/*Output
enter the date:24
enter the month:8
enter the year:20

24/8/20
*/

/*Defining the constructor outside the class*/
#include<iostream>
using namespace std;
class student
{
    int rollno;
    char name[50];
    double fee;

    public:
    student();
    void display();
};
student::student()
{
     cout<<"enter the rollno:";
        cin>>rollno;
        cout<<"enter the name:";
        cin>>name;
        cout<<"enter the fee:";
        cin>>fee;
}
void student::display()
{
    cout<<endl<<rollno<<"\n"<<name<<"\n"<<fee;
}
int main()
{
    student s;
    s.display();
    
}
/*Output
enter the rollno:12308
enter the name:Seema
enter the fee:30000

12308
Seema
30000

*/
/*Write the parametrised constructor*/
#include<iostream>
using namespace std;
class construct{
    int a,b;
    public:
    construct(int m,int n)
    {
        a = m;
        b = n;
    }
    void display()
    {
        cout<<"a="<<a<<endl<<"b="<<b;
    }
};
int main()
{
    construct p(10,20);
    p.display();
}
/*Output
a=10
b=20
*/
