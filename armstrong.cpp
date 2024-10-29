#include <iostream>
using namespace std;
int main(){
    for(int i = 1; i<=1000; i++){
        int temp = i;
        int sum = 0;
        while(temp>0){
            int rem = temp % 10;
            int cube = rem * rem * rem;
            sum += cube;
            temp /= 10;
        }
        if(sum==i){
            cout << i << "\t";
        }
    }
    return 0;
}