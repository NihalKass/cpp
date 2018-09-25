#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    int id;
    float salary;
    string name;

    void insert(int i,float s,string n){
        id=i;
        salary=s;
        name=n;
    }

    void display(){
        cout<<id<<" "<<name<<" "<<salary<<endl;
    }
};

int main()
{
    student s1,s2; //created an object of student class
    s1.insert(101,2000,"Nihal");
    s2.insert(102,5000,"Ambuj");
    s1.display();
    s2.display();
    return 0;
}
