#include <stdio.h>
#include <math.h>
double factorial(int n){
	double fact = 1;
	for(int i=1;i<=n;i++){
		fact = fact*i;
	}
	return fact;
}
double power(double x,int n){
	double ans=1.0;
	for (int j = 0;j<n;j++){
		ans = ans*x;
	}
	return ans;
}
double radian(int n){
	double x;
	x = (n*3.141592)/180.0;
	return x;
}

double sinx(double x){
    int n =1;
	double sinx =0;
	for(;;){
		int sign =((n+1)%4==0)? -1:1;

		sinx = sinx + ((sign)*(power(x,n))/(factorial(n)));
		n+=2;
		if ((n>31)){
			break;
		}

	}
	return sinx;
}
int main(){
	int n;
	printf("Enter Angle in Degrees : ");
	scanf("%d",&n);
	float x = radian(n);
	printf("sin(%d) = %.2f",n,sinx(x));

	
}
