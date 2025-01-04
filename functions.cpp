#include<iostream>
using namespace std;
void swapvalue(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    cout<<"inside function:   A="<<a<<"B="<<b<<endl;

}
int  main(){
    int x,y;
    cout <<"enter x & y";
    cin>>x>>y;
    cout<<"before function call: x="<<x<<"y="<<y<<endl;
    swapvalue(x,y);
    cout<<"After call: x="<<x<<"y="<<y<<endl;
return 0;
}