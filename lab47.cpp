#include<iostream>

using namespace std;
class Employee{
    private:
    char name[30];
    float salary;
    static int count ;
    public:

void input (){
    cout <<"Enter the name of employee: ";
    cin>>name ;
    cout <<"Enter the salary: ";
    cin>>salary;
}
static void incrementcount (){
count++;
cout<<"Employee "<<count<<endl;
}
void display(){
    cout <<"Name: "<<name<<endl;
    cout<<"Salary: "<<salary<<endl;
}
};
int Employee::count=1;
int main(){
    Employee E1;
    E1.input();
    Employee::incrementcount();
    E1.display();
cout<<"\n";
    Employee E2;
    E2.input();
    Employee::incrementcount();
    E2.display();
    return 0;
}


