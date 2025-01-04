#include <iostream>
using namespace std;
 class matrix{
   int mat[10][10],transpose[10][10],isSymmetric=0;
   int rows,cols;
public:
   
   void inputmatrix();
   void symmetric();
   
 };
 void matrix::inputmatrix(){
cout<<"Enter the number of rows and column:";
cin>>rows>>cols;
if (rows !=cols){
   cout<<"matrix is square:"<<endl;
}

cout<<"Enter the elements of the matrix:";
for(int i=0;i<rows;i++){
   for(int j=0;j<cols;j++){
   cin>>mat[i][j];
}
 }
 }
 void matrix::symmetric(){
   for(int i=0;i<rows;i++){
      for(int j=0;j<cols;j++){
         transpose[i][j]=mat[j][i];
      }
   }
 
 for(int i=0;i<rows;i++){
   for(int j=0;j<cols;j++){
     if(mat[i][j]!=transpose[i][j]){
      isSymmetric=0;
      break;
     } 
   }
   if(isSymmetric==0){
      break;
   }
 }
 if(isSymmetric==1){
   cout<<"The mmatrix is symmetric"<<endl;
 }else{
   cout<<"the matrix is not symmtric"<<endl;
 }
 }

 int  main(){
   matrix m;
   m.inputmatrix();
   m.symmetric();

return 0;
 }