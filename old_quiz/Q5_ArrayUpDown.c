#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);

    int arr[n][n];
    for(int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            scanf("%d",&arr[row][col]);
        }
    }

    //zone upper
    int upper = 0;
    for(int row=0; row<=n-2; row++){
        for(int col=row+1; col<n; col++){
            upper+=arr[row][col];
        }
    }
    
    //zone lower
    int lower = 0,ncol=0;
    for(int row=0; row<n; row++){
        for(int col=0; col<ncol; col++){
            lower+=arr[row][col];
        }
        ncol++;
    }

    printf("%d\n%d",upper,lower);

}