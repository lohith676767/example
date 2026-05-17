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
int main(){
	int r,c;
	printf("Enter Number of Rows : ");
	scanf("%d",&r);
	printf("Enter Number of Columns : ");
	scanf("%d",&c);
	int arr[r][c];
	getmat(r,c,arr);
	printmat(r,c,arr);
}
