#include<stdio.h>
void main(){
    int m,n,k;
    int a,b;
    scanf("%d%d",&m,&n);
    char arr[m][n];
    scanf("%d",&k);

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            arr[i][j] = '_';
        }
    }

    for(int i=0; i<k; i++){
        scanf("%d%d",&a,&b);
        arr[a-1][b-1] = 'x';
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
}
