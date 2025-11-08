#include<iostream>
using namespace std;
class Temperature{
    float celsius;
    public:
    void getData{
        cout<<"Enter temperture in celsius:";
        cin>>celsius;
    }
    void operator(){
        float fahrenheit=(celsius*9/5)+32;
        cout<<"Temperature in Fahrenhit:"<<fahrenheit<<endl;
    }
};
int main(){
    Temperture t;
    t.getData();
    -t;
    return 0;
}
