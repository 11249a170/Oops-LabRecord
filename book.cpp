#include<iostream>
using namespace std;
class Book{
    string title;
    string authors[2];
    double price;
    public:
    Book(string t,string a1,string a2,double p){
        title=t;
        authors[0]=a1;
        authors[1]=a2;
        price=p;
    }
    void display() {
        cout<<"Book:"<<title<<",Authors:"<<authors[0]<<","<<authors[1]<<",price"<<price<<endl;
    }
    double getprice(){return price;}
};
Book expensiveBook(Book b[],int n) {
    int index=0;
    double maxprice=b[0].getprice();
    for(int i=1;i<n;i++){
        if(b[i].getprice()>maxprice){
            maxprice=b[i].getprice();
            index=i;
        }
    }
    return b[index];
}
int main(){
    Book b[3]={
        Book("c++ programming","Bjarne","stralstrup",500),
        Book("Java programming","James","gosling",400),
        Book("python programming","guido","rossum",600)
    };
    for(int i=0;i<3;i++)b[i].display();
    Book exp=expensiveBook(b,3);
    cout<<"Most expensive book:"<<exp.getprice()<<endl;
    return 0;
}
