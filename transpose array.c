#include <stdio.h>
int main(){
	int r,c;
	printf("Enter Number of Rows : ");
	scanf("%d",&r);
	printf("Enter Number of Columns : ");
	scanf("%d",&c);
	int arr[r][c];
	for(int i =0;i<r;i++){
		for (int j = 0; j < c;j++){
			printf("Enter (%d,%d) value : ",i+1,j+1);
	        scanf("%d",&arr[i][j]);
		}
	}
	int transpose[c][r];
	printf("\n \nOutput array  : \n");
	for(int k=0;k<c;k++){
		for (int l = 0; l < r;l++){
			transpose[k][l] = arr[l][k];
		}
	}
	for (int m = 0; m < c; m++){
		for (int n = 0; n < r;n++){
			printf("%5d",transpose[m][n]);
		}
		printf("\n");
	}
}
