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
  
Car *mycar = new Car("bmw",23436,"white");
    cout<<mycar->color<<endl;
    return 0;
}