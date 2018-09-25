#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    int id;
    float salary;
    string name;

    student(int i,float s,string n)
    {
        id=i;
        salary=s;
        name=n;
    }

    void display(){
        cout<<id<<" "<<salary<<" "<<name<<endl;
    }

};

int main(void)
{
    student s1 = student(101,5000,"Nihal");
    student s2 = student(102,6000,"ambuj");
    s1.display();
    s2.display();
    return 0;
}