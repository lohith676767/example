#include <stdio.h>
#include <math.h>
int isprime(int n){
    int isprime = 1;
    for(int i =2;i<=sqrt(n);i++){
        if(n%i==0){
            isprime=0;
        }
    }
    if(n==0||n==1){
        isprime=0;
    }
    return isprime;
}
int issquare(int n){
    int issquare = 0;
    for(int i=0;i<((n/2)+1);i++){
        if(i*i == n){
            issquare = 1;
            break;
        }
    }
    if(n==0||n==1){
        issquare=1;
    }
    return issquare;
}
int main(){
    int a,b;
    printf("Enter Lower limit : ");
    scanf("%d",&a);
    printf("Enter Upper limit : ");
    scanf("%d",&b);
    int primesum = 0;
    for (int i=a;i<b+1;i++){
        if (isprime(i)==1){
            primesum+=i;
        }
    }
    printf("The sum of prime numbers between %d and %d is : \n%d\n",a,b,primesum);
    if(issquare(primesum)==1){
        printf("Prime sum is perfect square\n");
    }
    if(isprime(primesum)==1){
        printf("Prime sum is Prime\n");
    }
}
