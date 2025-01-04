#include <iostream>
using namespace std;
class array{
    private:
    int arr[100];
    int size;
public:
void inputarray();
void countoddeven();
};
void array::inputarray(){
    cout<<"Enter size of the array:";
    cin>>size;
    cout<<"Enter the elements of array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void array::coutoddeven(){
    int oddcount=0,evencount=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0)
        evencount++
    else
    oddcount++;
            }
cout<<"No of even number :"<<evencount<<endl;
cout<<"no of odd numbers: "<<oddcount<<endl;
}
void main(){
    

}