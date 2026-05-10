// sin x using C
#include <stdio.h>

double factorial(int n){
    double factorial = 1.0;
    if(n==0||n==1){
        return factorial;
    }else{
        for(int i =1;i<n+1;i++){
            factorial*=i;
            
        }
        return factorial;
    }
}

double power(double x, int n){
    double power = 1.0;
    if(n==0){
        return 1.0;
    }else{
        for(int i=0;i<n;i++){
            power = power*x;
        }
    }
    return power;
}

float sinn(float angle,int n){
    float value = angle;
    int count=2;
    for (int i =3;i<n+2;i+=2){
        if (count%2==0){
            value = value - ((power(angle,i)/factorial(i)));
        }else if (count%2==1){
            value = value + ((power(angle,i)/factorial(i)));
        }
        count+=1;
    }
    return value;
}

int main() {
    int ang;
    printf("Enter Angle : ");
    scanf("%d",&ang);
    float angle = (ang*3.141592)/180;
    int n;
    printf("Enter accuracy(odd) : ");
    scanf("%d",&n);
    printf("\nsin(%d) = %f",ang,sinn(angle,n));
    
    

}
