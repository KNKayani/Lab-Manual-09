/*____________________________________________________
Make 2D Array in C++ and print left diagonal and right diagonal sum of a 3x3 matrix
KASHIF NADEEM KAYANI      456 466          ME 15 A
*/

#include<iostream>
using namespace std;

  int main (){

  int matrix [3][3];  //declaring a 3x3 matrix
  int leftDiagonalSum=0;   //declaring sum of left diagonal 
 int rightDiagonalSum=0;     //declaring sum of right diagonal 
 
 for (int i=0;i<3;i++){
 	for (int j=0;j<3;j++){
 		cout<<"enter the element on "<<i+1<<" ; "<<j+1<<" position ";
 		cin>>matrix[i][j];   //input of matrix form user 
     	 }
 }
 
 
 
 cout<<"entered matrix is : "<<endl;  //printing entered matriz
for ( int i=0;i<3;i++ ){
	for ( int j=0;j<3;j++){
		cout<<matrix[i][j]<<" ";
}  cout<<endl;
	}
  for ( int i=0;i<3;i++){
  	
	leftDiagonalSum+=matrix[i][i];   //finding sum of left diagonal
  
    }
    
  for (int i=0;i<3;i++){
  	rightDiagonalSum+=matrix [i] [3-1-i];  //finding sum of right diagonal
  
}
cout<<"the sum of left diagonal is "<<leftDiagonalSum<<endl;   //print left diagonal sum
cout<<"the sum of right diagonal is "<<rightDiagonalSum<<endl;  //printing right diagonal sum

return 0;
}

