#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    
    int arr[10001];
    for(int i=0; i<=10001; i++){
        arr[i]=0;
    }

    for(int i=0; i<n; i++){
        int input;
        scanf("%d",&input);
        arr[input] = arr[input]+1;
    }
    
    for(int i=0; i<=10001; i++){
        if(arr[i]>0){
            printf("%d ",i);
        }
    }

}