#include<bits/stdc++.h>
using namespace std;

int main(){
    int numberHeGot=55;
    if (numberHeGot>=80){
     cout<<"he got A+";   
    }
        else if (numberHeGot>=70 && numberHeGot<80)
    {
        cout<<"He got A";
    }

    else if(numberHeGot>=60 && numberHeGot<70){
        cout<<"He got A-";
    }
    else if(numberHeGot>=50 && numberHeGot<60){
        cout<<"He got B";
    }
    else if(numberHeGot >=40 && numberHeGot<50){
        cout<<"He got C";
    } else{
        cout<<"Sorry! You Failed";
    }
    
    return 0;
}