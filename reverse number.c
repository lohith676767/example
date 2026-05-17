#include <stdio.h>
int reverse(int n){
	int reverse = 0;
	for (;;){
		reverse = reverse*10 + n%10;
		n=n/10;
		if (n==0){
			break;
		}
	}
	return reverse;


}
int main(){
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	printf("rev number : %d",reverse(n));
}
