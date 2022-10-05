#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int num;

    int arr[n][10];
    for(int r=0; r<n; r++){
        for(int c=0; c<10; c++){
            arr[r][c]=0;
        }
    }

    for(int i=0; i<n; i++){
        scanf("%d",&num);
        arr[i][num]=1;
    }

    for(int r=0; r<n; r++){
        for(int c=0; c<10; c++){
            printf("%d ",arr[r][c]);
        }
        printf("\n");
    }

}
