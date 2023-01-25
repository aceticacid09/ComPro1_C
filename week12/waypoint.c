#include<stdio.h>
void main(){
    int r,c,n;
    scanf("%d%d",&r,&c);
    int arr[101][101];
    scanf("%d",&n);
    for(int row=1; row<=r; row++){
        for(int col=1; col<=c; col++){
            arr[row][col]=0;
        }
    }
    int a,b,count=1;
    for(int i=0; i<n; i++){
        scanf("%d%d",&a,&b);
        arr[a][b]+=count;
        count++;
    }
    for(int row=1; row<=r; row++){
        for(int col=1; col<=c; col++){
            printf("%d ",arr[row][col]);
        }
        printf("\n");
    }
}
