#include<stdio.h>
void main(){
    int m,n,k,a,b;
    scanf("%d%d",&m,&n);
    char arr[m][n];
    scanf("%d",&k);

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            arr[i][j] = 0;
        }
    }

    for(int i=0; i<k; i++){
        scanf("%d%d",&a,&b);
        arr[a-1][b-1] = 1;
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[a][b]==1){
                printf("x");
            } else {
                printf("_");
            }
        }
        printf("\n");
    }
}

