#include <stdio.h>
int main(){
    char gender;
    printf("Enter Gender(M/F) : ");
    scanf("%c",&gender);
    int age;
    printf("Enter Age : ");
    scanf("%d",&age);
    int n;
    printf("Enter No.Of Days worked : ");
    scanf("%d",&n);
    int wpd=0;
    if (age>40||age<19){
        printf("Invalid Age");
        
    }
    else if((age>=19)&&(age<=30)){
        if (gender=='M'){
            wpd = 800;
        }
        else if (gender == 'F'){
            wpd = 850;
        }
    }
    else if((age>=31)&&(age<=40)){
        if (gender=='M'){
            wpd = 900;
        }
        else if (gender == 'F'){
            wpd = 950;
        }
    }
    int wage = wpd*n;
    printf("\n%d is the total wage",wage);
}
