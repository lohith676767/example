//decimal to binary(until 1023)
#include <stdio.h>
#include <math.h>
int decimal_to_binary(int d);
int main(){
    int decimal;
    printf("Enter Integer : ");
    scanf("%d",&decimal);
    printf("%d",decimal_to_binary(decimal));
}
int decimal_to_binary(int d){
    if (d == 0) return 0;
    int binary = 0;
    int x  = 0;
    int n =0;
    while(x==0){
        if ((1<<n)<=d){
            n+=1;
        }
        else{
            x=1;
        }
    }
    
    for(int i=n;i>=1;i--){
        int bit =(d>>(i-1))&1;
        binary=(binary*10)+bit;
    }
    return binary;
}
