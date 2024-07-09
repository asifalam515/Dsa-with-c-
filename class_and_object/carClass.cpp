#include<bits/stdc++.h>
using namespace std;
class Car{
    public:
    string name;
    string model;
    int price;
    string color;
};
int main()
{
  Car asifsCar;
  asifsCar.color="white";
  asifsCar.model="m3";
  asifsCar.name = "bmw";
  cout<<"my car is " <<asifsCar.name <<" "<<asifsCar.model<<" "<<". which is pure white"<<endl;

    return 0;
}