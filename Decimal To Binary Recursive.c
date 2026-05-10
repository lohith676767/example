//recurive decimal to binary
#include <stdio.h>
void Decimal_to_Binary(int n) {
    if (n == 0) {
        return;
    }
    Decimal_to_Binary(n/2);
    printf("%d",n%2);
}

int main() {
    int n;
    printf("Enter decimal no. :");
    scanf("%d",&n);
    printf("Decimal %d in binary is: ", n);
    
    if (n == 0) {
        printf("0");
    } else {
        Decimal_to_Binary(n);
    }
}
