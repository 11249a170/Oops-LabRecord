#include<iostream>
#include<string.h>
using namespace std;
class Book{
    char title[50];
    float price;
    public:
    void getData(){
        cout<<"enter book title:";
        cin>>title;
        cout<<"enter price:";
        cin>>price;
    }
    void operator=(Book &b){
        strcpy(title,b.title);
        price=b.price;
    }
    void display(){
        cout<<"Title:"<<title<<",price:"<<price<<endl;
    }
};
int main(){
    Book b1,b2;
    b1.getData();
    b2=b1;
    cout<<"\ncopied Book Details:\n";
    b2.display();
    return 0;
}
