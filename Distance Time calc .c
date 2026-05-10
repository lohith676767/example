#include <stdio.h>
void print_time(float time);
int main(){
    float distance;
    printf("Enter Distance : ");
    scanf("%f",&distance);
    distance = distance/1.8;
    float time;
    time = ((distance/2)/40)+((distance/2)/55);
    printf("%.2f is the time taken \n",time);
    print_time(time);
}

void print_time(float time){
    int timehr=0;
    int timemin = 0 ;
    int timesec=0;
    if(time>=1){
        timehr = (int)time;
    }
    time = (time - (int)time)*60;
    if(time>=1){
        timemin = (int)time;
    } 
    time = (time - (int)time)*60;
    if(time>=1){
        timesec = (int)time;
    }     
    printf("%d Hr %d Min %d Sec is the time taken",timehr,timemin,timesec);
}
