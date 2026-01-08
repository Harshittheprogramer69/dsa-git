/*Question 8
The total distance travelled by a vehicle in t seconds is given by
                distance = ut + (at2)/2 
Where u is the intial velocity (meters per second), a is the acceleration (meters per second square).
Write a program to evaluate the distance travelled at regullar intervals of time given the values of u and a. The program should provide the flexibility to the user to select his own time intervals and repeat the calculations for different values of u and a.*/

#include <stdio.h>

float distance(float u, float a, int t);

float distance(float u, float a, int t) {
    float d;
    d = u*t + (a*t*t)/2;
    return d;
}

int main() {
    float velocity, acceleration, Distance;
    int time, max_time, intervals;
    char ans;
    do {
        printf("Enter value of velocity:- ");
        scanf("%f", &velocity);
        printf("Enter value of acceleration:- ");
        scanf("%f", &acceleration);
        printf("Enter value of max time[in seconds]:- ");
        scanf("%d", &max_time);
        printf("Enter value of intervals[in seconds]:- ");
        scanf("%d", &intervals);     
        
        printf("Time [s] \t Distance [m]\n");
        printf("-------------------------\n");

        for (time = 0; time <= max_time; time += intervals) {
            Distance = distance(velocity, acceleration, time);
            printf("%d\t\t%.2f\n", time, Distance); 
        }
        
        printf("Do you wish to continue:- ");
        while ((getchar()) != '\n');
        scanf("%c", &ans);

    } while (ans == 'y' || ans == 'Y');
    
    return 0;
}