#include<stdio.h>
void main(){
    int r,c,z1=0,z2=0,z3=0,z4=0;
    scanf("%d%d",&r,&c);

    int arr[r][c];
    for(int row=0; row<r; row++){
        for(int col=0; col<c; col++){
            scanf("%d",&arr[row][col]);
        }
    }
    //zone 1 (top left)
    for(int row=0; row<r/2; row++){
        for(int col=0; col<c/2; col++){
            z1+=arr[row][col];
        }
    }
    //zone 2 (top right)
    for(int row=0; row<r/2; row++){
        for(int col=c/2; col<c; col++){
            z2+=arr[row][col];
        }
    }
    //zone 3 (bottom left)
    for(int row=r/2; row<r; row++){
        for(int col=0; col<c/2; col++){
            z3+=arr[row][col];
        }
    }
    //zone 4 (bottom right)
    for(int row=r/2; row<r; row++){
        for(int col=c/2; col<c; col++){
            z4+=arr[row][col];
        }
    }

    printf("%d %d\n%d %d",z1,z2,z3,z4);
}