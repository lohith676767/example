#include <stdio.h>
void printmat(int r,int c,int arr[r][c]){
    printf("\nOutput Matrix : \n\n");
	for (int m = 0; m < r; m++){
		for (int n = 0; n < c;n++){
			printf("%5d",arr[m][n]);
		}
		printf("\n");
	}
}
void getmat(int r,int c,int arr[r][c]){
	
	for(int i =0;i<r;i++){
		for (int j = 0; j < c;j++){
			printf("Enter (%d,%d) value : ",i,j);
	        scanf("%d",&arr[i][j]);
		}
	}
}

void addmat(int r,int c,int arr1[r][c],int arr2[r][c],int arr[r][c]){
	for(int i =0;i<r;i++){
		for (int j = 0; j < c;j++){
			arr[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
}
void submat(int r,int c,int arr1[r][c],int arr2[r][c],int arr[r][c]){
	for(int i =0;i<r;i++){
		for (int j = 0; j < c;j++){
			arr[i][j]=arr1[i][j]-arr2[i][j];
		}
	}
}
void multmat(int r1,int c1,int r2,int c2
	,int arr1[r1][c1],int arr2[r2][c2],int arr[r1][c2]){
	for (int i = 0; i < r1;i++){
		for (int j = 0; j < c2;j++){
		    arr[i][j]=0;
			}
	}
	for (int i = 0; i < r1;i++){
		for (int j = 0; j < c2;j++){
			for (int k = 0; k < c1;k++){
				arr[i][j]+=(arr1[i][k]*arr2[k][j]);
			}
		}
	}
}
int main(){
	int r1,c1;
	printf("Enter Number of Rows of matrix 1: ");
	scanf("%d",&r1);
	printf("Enter Number of Columns of matrix 1: ");
	scanf("%d",&c1);
	int arr1[r1][c1];
	getmat(r1,c1,arr1);
	printmat(r1,c1,arr1);

	int r2,c2;
	printf("Enter Number of Rows of matrix 2: ");
	scanf("%d",&r2);
	printf("Enter Number of Columns of matrix 2: ");
	scanf("%d",&c2);
	int arr2[r2][c2];
	getmat(r2,c2,arr2);
	printmat(r2,c2,arr2);
	printf("\nMenu:\n");
	int choice;
	printf("\n1.Add 2.Subtract 3.Multiply : ");
	scanf("%d",&choice);
	switch (choice){
		case 1:
			if((r1==r2)&&(c1==c2)){
				int arr[r1][c1];
				addmat(r1,c1,arr1,arr2,arr);
				printmat(r1,c1,arr);
			}else{
				printf("\ninvalid \n");
			}
		    break;
		case 2:
			if((r1==r2)&&(c1==c2)){
				int arr[r1][c1];
				submat(r1,c1,arr1,arr2,arr);
				printmat(r1,c1,arr);
			}else{
				printf("\ninvalid \n");
			}
		    break;	    	    
		case 3:
			if((c1==r2)){
				int arr[r1][c2];
				multmat(r1,c1,r2,c2,arr1,arr2,arr);
				printmat(r1,c2,arr);
			}else{
				printf("\ninvalid \n");
			}
		    break;
	    
	    default :
		    printf("invalid");

	}
	
}
