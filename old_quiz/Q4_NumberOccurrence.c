#include<stdio.h>
void main(){
    int n,select,count=0;
    scanf("%d",&n);
    int Arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&Arr[i]);
    }
    scanf("%d",&select);

    
    for(int i=0; i<n; i++){
        if(Arr[i]==select){
            printf("%d ",i+1);
            count++;
        }
    }

    if(count<1){
        printf("0");
    }    

}