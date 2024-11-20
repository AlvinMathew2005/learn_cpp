#include<iostream>
using namespace std;
class Employee{
    private:
    char name[50];
    int Id;
    int age;
    char designation[50];
    double basic,da,hra,ma,pf,pt;
    double grossSalaray,netsalary,deduction;

    public:
    void putdata (){
    cout <<"Enter the name :";
    cin>>name;
    cout <<"enter ID of employee :";
    cin>>Id;
    cout<<"Enter the age:";
    cin>>age;
    cout<<"Enter designation:;";
    cin>>designation;
    cout<<"Enter the basic salary:";
    cin>>basic;
    cout<<"Enter dearness: ";
    cin>>da;
    cout<<"Enter house Rent Allowance: ";
    cin>>hra;
    cout<<"Enter Medical Allowanace:";
    cin>>ma;
    cout<<" Enter Provident Fund :" ;
    cin>>pf;
    cout<<"Enter professional Tax: " ;
    cin>>pt;
    }
    void calcsalary(){
        grossSalaray=basic+da+hra+ma;
        deduction=pf+pt;
        netsalary=grossSalaray-deduction;
    }  
    void display(){
        cout<<"\n-------Employee details----\n";
        cout<<"\n Name: "<<name<<endl;
        cout<<"Employee ID: "<<Id<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Designation :"<<designation<<endl;
        cout<<"Basic salary :"<<basic<<endl;
        cout<<"Da: "<<endl;
        cout<<"HRA: "<<hra<<endl;
        cout<<"MA: "<<ma<<endl;
        cout<<"PF: "<<pf<<endl;
        cout<<"PT: "<<pt<<endl;
        cout<<"Gross Salary: "<<grossSalaray<<endl;
        cout<<"Dedution: "<<deduction<<endl;
        cout<<"Net Salary: "<<netsalary<<endl;
    }
};
int main(){
        Employee emp;
        emp.putdata();
        emp.calcsalary();
        emp.display();

        return 0;
}
    



