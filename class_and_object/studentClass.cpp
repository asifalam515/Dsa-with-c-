#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int age;
    char section;
    string cls;
};
int main()
{
  Student asif;
  asif.age = 23;
  asif.cls="Bachelor ";
  asif.section='a';
  cout<<asif.cls<<endl;

    return 0;
}