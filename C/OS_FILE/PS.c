#include <stdio.h>

void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    int pid[n], bt[n], priority[n]; 
    int wt[n], tat[n];
    int i, j; // Loops

    for(i = 0; i < n; i++) {
        printf("\nProcess %d\n", i+1);
        pid[i] = i + 1;

        printf("Enter Burst Time: ");
        scanf("%d", &bt[i]);

        printf("Enter Priority: ");
        scanf("%d", &priority[i]);
    }

    // Bubble Sorting
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(priority[i] > priority[j]) {
                swap(&priority[i],&priority[j]);
                swap(&bt[i],&bt[j]);
                swap(&pid[i],&pid[j]);
            }
        }
    }

    wt[0] = 0;
    for(i = 1; i < n; i++) {
        wt[i] = wt[i-1] + bt[i-1];
    }

    for(i = 0; i < n; i++) {
        tat[i] = wt[i] + bt[i];
    }

    
    printf("\nPID\tBT\tPriority\tWT\tTAT\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t\t%d\t%d\n",
               pid[i], bt[i], priority[i], wt[i], tat[i]);
    }

    return 0;
}