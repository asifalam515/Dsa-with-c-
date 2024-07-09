#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int age;
    int cls;
    char section;

    Student(string n,int a,int c,char s){
        name = n;
        age = a;
        cls = c;
        section = s;
    }

};

Student fun(){
    Student me("asif",23,15,'A');
    return me;
}
int main()
{

 Student me = fun();
 cout<<me.age<<" "<<me.name<<endl; 

    return 0;
}