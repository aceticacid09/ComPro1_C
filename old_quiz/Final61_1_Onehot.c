#include<stdio.h>
void main(){
    int n,max=0;
    scanf("%d",&n);
//input position and find max
    int num[n],i;
    for(i=0; i<n; i++){
        scanf("%d",&num[i]);
        if(num[i]>max){
            max = num[i];
        }
    }
//set '0' in 2d array
    char arr[n][max];
    for(int r=0; r<n; r++){
        for(int c=0; c<max+1; c++){
            arr[r][c]='0';
        }
    }
//change from '0' to '1' corresponding to position
    i=0;
    for(int r=0; r<n; r++){
        for(int c=0; c<max+1; c++){
            if(num[i]==0){
                arr[r][0]='1';
            } 
            else if (num[i]==1){
                arr[r][1]='1';
            } 
            else if (num[i]==2){
                arr[r][2]='1';
            } 
            else if (num[i]==3){
                arr[r][3]='1';
            } 
            else if (num[i]>=4) {
                arr[r][max]='1';
            }
        }
        i++;
    }
//output
    for(int r=0; r<n; r++){
        for(int c=0; c<max+1; c++){
            printf("%c ",arr[r][c]);
        }
        printf("\n");
    }
}