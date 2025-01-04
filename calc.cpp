
#include <iostream>
using namespace std;
 int main(){
    int a,b,c,d;
    cout <<"Enter four numbers:";
    cin>>a>>b>>c>>d;
    if(a<b&&a<c){
        if(a<d){
        cout<<"A is smallest :"<<a<<endl;
        }
    }
    if(b<a&&b<c){
        if(b<d){
            cout<<"B is smallest: "<<b<<endl;
        }
    }
    if (c<a&&c<b){
        if(c<d){
        cout<<"C is smallest: "<<c<<endl;
    }
    else{
        cout<<"D is smallest:"<<d<<endl;
    }
 }
 return 0;
 }
