#include<iostream>
using namespace std;

class student{
    public:
    student()
    {
        cout<<"Default constructor"<<endl;
    }
};

int main(void)
{
    student s1;
    student s2;
    return 0;
}