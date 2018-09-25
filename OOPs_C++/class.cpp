#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    int id;
    float salary;
    string name;
};

int main()
{
    student s1; //created an object of student class
    s1.id=101;
    s1.salary=2000;
    s1.name="Rahul";

    cout<<s1.id<<" "<<s1.salary<<" "<<s1.name<<endl;
}
