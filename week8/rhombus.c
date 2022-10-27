#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    char arr[n][n];
    for(int r=0; r<n; r++){
        for(int c=0; c<n; c++){
            arr[r][c]=' ';
        }
    }
    int mid=n/2, Lcol=mid-1, Rcol=mid+1;
//top (i=0)
    for(int row=0; row<n; row++){
            for(int col=0; col<n; col++){
                if((row==0&&col==mid) || (row==n-1&&col==mid) || col==mid){
                    arr[row][col]='*';
                }
            }
        }

//before center
    for(int row=1; row<mid; row++){
            for(int col=Lcol; col<=mid; col++){
                arr[row][col]='*';
            }
            Lcol--;
        }
    for(int row=1; row<mid; row++){
            for(int col=mid; col<=Rcol; col++){
                arr[row][col]='*';
            }
            Rcol++;
        }
    
//center (i=n/2)
    for(int row=mid; row<=mid; row++){
        for(int col=0; col<n; col++){
            arr[row][col]='*';
        }
    }

//after center
    for(int row=mid+1; row<n-1; row++){
            for(int col=Lcol+1; col<=mid; col++){
                arr[row][col]='*';
            }
            Lcol++;
        }
    for(int row=mid+1; row<n-1; row++){
            for(int col=mid+1; col<Rcol; col++){
                arr[row][col]='*';
            }
            Rcol--;
        }

//output
    for(int row=0; row<n; row++){
            for(int col=0; col<n; col++){
                printf("%c",arr[row][col]);
            }
            printf("\n");
        }
}
