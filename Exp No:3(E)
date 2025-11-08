#include<iostream>
#include<string.h>
using namespace std;
class stringconact{
    char str[50];
    public:
    void getstring(){
        cout<<"Enter string:";
        cin>>str;
    }
    stringconcat operator+(stringconcat s){
        stringconcat temp;
        strcpy(temp.str,str);
        strcat(temp.str,s.str);
        return temp;
    }
    void display(){
        cout<<"Resultant string:"<<str<<endl;
    }
};
int main(){
    stringconcat s1,s2,sss3;
    s1.getstring();
    s2.getstring();
    s3=s1+s2;
    s3.display();
    return 0;
}
