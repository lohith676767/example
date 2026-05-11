#include <stdio.h>
int main(){
    int n;
    printf("value of n:");
    scanf("%d",&n);
    int arr[100];
    int *ptr = arr;
    for(int i =0;i<n;i++){
        printf("Value %d : ",i+1);
        scanf("%d",(ptr+i));
    }
    int temp;
    temp = *(ptr);
    *ptr=*(ptr+n-1);
    *(ptr+n-1)=temp;
    for(int i =0;i<n;i++){
        printf("Value %d \n",*(ptr+i));
    }
    

    
}
