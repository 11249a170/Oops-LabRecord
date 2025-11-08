#include<iostream>
using namespace std;
class Employee {
    string name;
    double salary;
    static int empcount;
    public:
    Employee(string n, double s) {
        name=n;
        salary=s;
        empcount ++;
    }
    Employee() {
        cout<<name<<"removed"<<endl;
    }
    double getsalary(){return salary;}
    string getName(){return name;}
    static void showcount(){
        cout<<"Total Employee:"<<empcount<<endl;
    }
};
void compare (Employee e1,Employee e2){
    if(e1.getsalary()>e2.getsalary())
    cout<<e1.getName()<<"earns more"<<endl;
   else
   cout<<e2.getName()<<"earns more"<<endl;
}
int Employee::empcount=0;
int main() {
    Employee e[3]={
        Employee("ravi",50000),
        Employee("sita",60000),
        Employee("anu",55000)
    };
    compare(e[0],e[1]);
    Employee::showcount();
    return 0;
}
