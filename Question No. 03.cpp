/*____________________________________________________
Using 2D arrays in C++, take transpose of a  3x3  matrix. Make a transpose function
KASHIF NADEEM KAYANI      456466          ME 15 A
*/
#include<iostream>
using namespace std;
void transpose( int matrix1[3][3] ,int result[3][3] ){
	
	for ( int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			result[i][j]= matrix1[j][i];
		}
	}
}


int main (){
	int matrix[3][3]; int transp[3][3];
	for (int i=0;i<3;i++){ 
		for ( int j =0;j<3;j++){ 
	  cout<<"enter "<<i+1<<" and "<<j+1<<" elements of matrix ";
			cin>>matrix[i][j];
		} 
	} 
	cout<<"The entered matrix is "<<endl;
		for (int i=0;i<3;i++){ 
		for ( int j =0;j<3;j++){ 
	 cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}
  
	transpose ( matrix, transp  );
	 cout<<"The transpose of entered matrix is "<<endl;
	
		for (int i=0;i<3;i++){ 
		for ( int j =0;j<3;j++){ 
	cout<< transp[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}
