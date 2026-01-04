#include<stdio.h>
int main(){
    int totalSeconds;
    printf("Enter Number of Seconds:");
    scanf("%d",& totalSeconds);
    int seconds=totalSeconds;
    int count=0, hours=0, minutes=0;

    for(; seconds >=3600; seconds-=3600){
         hours++;
         count++;

    }

    for(; seconds>=60; seconds-=60){
        minutes++;
        count++;
    }

    printf("\nUsing FOR Loop\n");
    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Seconds: %d\n", seconds);
    printf("Iteration count (FOR loop): %d\n", count);
       

    seconds=totalSeconds;
    hours=0;
    minutes=0;
    count=0;

    while( seconds >= 3600){
        hours++;
        seconds-=3600;
        count++;
    }
    while( seconds >= 60){
        minutes++;
        seconds-=60;
        count++;
    }
    printf("\nUsing WHILE Loop\n");
    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Seconds: %d\n", seconds);
    printf("Iteration count (WHILE loop): %d\n", count);

    return 0;
}