/*____________________________________________________
Write a function to add two 2D arrays of size 3x3.
KASHIF NADEEM KAYANI      45666          ME 15 A
*/

#include<iostream>
using namespace std;

 void add(int matrix1[3][3], int matrix2[3][3], int result[3][3] ) {
 for (int i=0;i<3;i++){ 
 	for ( int j=0;j<3;j++){ 
 		result[i][j]=matrix1[i][j]+matrix2[i][j];
 	
	  
   }
 }  }
 
 int main () {
 int matrixA[3][3]={{1,2,3},{4,5,6},{7,8,9}};	
 int matrixB[3][3]={{9,8,7},{6,5,4},{3,2,1}};
int resultAB[ 3][3];

add( matrixA,matrixB, resultAB  );

cout<<"The sum of matrices A and B is "<<endl;
 
 for (int i=0;i<3;i++){
 	for (int j=0;j<3;j++){
 		cout<<resultAB[i][j]<<" ";
	 }
 cout<<endl;
 }
 
 
 
 return 0;
}
 
