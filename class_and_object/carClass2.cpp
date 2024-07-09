#include<bits/stdc++.h>
using namespace std;
class Car{
    public:
    string brand;
    int price;
    string color;

    Car (string b,int p,string c){
        brand =b;
        price = p;
        color = c;
    }
};
int main()
{
  
Car myCar("bmw",1000234,"yellow");
cout<<myCar.color<<endl;
    return 0;
}