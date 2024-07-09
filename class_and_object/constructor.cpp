#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    string name;
    int cls;
    char section;
    Student(int r,string n,int c,char s){
        roll = r;
        name = n;
        cls = c;
        section= s;


    }
};
int main()
{
    Student jakariya(12,"jakariya Rifat",21,'A');
    cout<<jakariya.name<<endl;
  

    return 0;
}