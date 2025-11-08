#include<iostream>
using namespace std;
class Rectangle{
    int length,breadth;
public:
void getData(){
    cout<<"Enter length and breadth:";
    cin>>length>>breath;
}
int area(){
    return length*breadth;
}
bool operator>(Rectangle r){
    return this->area()>r.area();
}
};
int main(){
    Rectangle r1,r2;
    r1.getData();
    r2.getDat();
    if(r1>r2)
       cout<<"Rectangle 1 is larger"<<endl;
    else
       cout<<"Rectangleb 2 is larger"<<endl;
    return 0;
}

