/*__________________________________________________________
Using 2D arrays in C++, implement 3x3 matrix multiplication. Make a function.
KASHIF NADEEM KAYANI             456466       ME 15 Sec A
*/

#include<iostream>
using namespace std;

//declare matrices and result matrix
void multi ( int matrixA[3][3] ,int matrixB[3][3] ,int result [3][3] )  
{
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
 		result[i][j]=0;
 		for (int k=0;k<3;k++){
 			result[i][j]+= matrixA[i][k] * matrixB[k][j];
		 }
		}
	}
}

int main ()
{
	//declare matrices with elements 
	int matrix1[3][3]={{31,22,13},{34,55,76},{72,18,79}};
	int matrix2[3][3]={{92,18,83},{63,59,14},{19,22,13}};
	int res[3][3];
	multi( matrix1,matrix2,res );  //calling function
	cout<<"The mulplication result of these matrices is: "<<endl;  //printing results
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout<<res[i][j]<<" ";
		}
		 cout<<endl;
	}
	return 0;
	}
