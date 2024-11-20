#include<iostream>
using namespace std;

class rectangle
{
private:
int l;
int b;
public:
void getvalue(int a,int w){
    l=a;
    b=w;

}
int calculateArea(){
    return l*b;
}
void display(){
    cout<<"Length: "<<l<<endl;
    cout<<"breadth: "<<b<<endl;
    cout<<"Area: "<<calculateArea()<<endl;
}
};
int main(){
rectangle R;
int l,b;
cout<<"Enter the length of the reactangle :";
cin>>l;
cout<<"Enter the breadth of the rectangle: ";
cin>>b;
R.getvalue(l,b);
R.display();

return 0;
}
