#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    if(n%2!=0 && n>=29 && n<=99){
        char arr[n][n];
        //prepare arr
        for(int row=0; row<n; row++){
            for(int col=0; col<n; col++){
                arr[row][col]=' ';
            }
        }
        //frame and '+' in the middle
        int midrow=n/2, midcol=n/2;
        for(int row=0; row<n;row++){
            for(int col=0; col<n; col++){
                if(row==0 || row==n-1 || col==0 || col==n-1){
                    arr[row][col]='*';  //frame
                }
                if((row>=midrow-2 && row<=midrow+2) || (col>=midcol-2 && col<=midcol+2)){
                    arr[row][col]='*';  //'+' in the middle
                }
            }
        }
        //left top to right bottom
        int Lcol=0;
        for(int row=1; row<n; row++){
            for(int col=Lcol; col<Lcol+3; col++){
                arr[row][col]='*';
            }
            Lcol++;
        }
        //right top to left bottom
        int Rcol=n-3;
        for(int row=1; row<n; row++){
            for(int col=Rcol; col<Rcol+3; col++){
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
}