#include <stdio.h>

#define MAX 100 

void main() {
    int a[MAX][MAX],b[MAX][MAX],product[MAX][MAX];
    int arows,acolumns,brows,bcolumns;
    int i,j,k,sum;
    sum = 0;

    printf("Enter row and column of matrix A: ");
    scanf("%d %d",&arows,&acolumns);

    for(i=0;i<arows;i++) {
        for(j=0;j<acolumns;j++) {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter row and column of matrix B: ");
    scanf("%d %d",&brows,&bcolumns);

    for(i=0;i<brows;i++) {
        for(j=0;j<bcolumns;j++) {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<arows;i++) {
        for(j=0;j<bcolumns;j++) {
            for(k=0;k<brows;k++) {
                sum+=a[i][k]*b[k][j];
            }
            product[i][j]=sum;
            sum = 0;
        }
    }
    
    for(i=0;i<arows;i++) {
        for(j=0;j<bcolumns;j++) {
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }
}