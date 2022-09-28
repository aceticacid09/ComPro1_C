#include<stdio.h>
void derivative(int* aInput, int* aOutput,const int n){
    aOutput[0]=0;
    for(int i=1; i< n; i++){
        aOutput[i] = aInput[i]-aInput[i-1];
    }
}

void main(){
    int n;
    scanf("%d",&n);
    int aInput[n],aOutput[n];

    aInput[0]=0;
    for(int i=0; i<n; i++){
        scanf("%d",&aInput[i]);
    }

    derivative(aInput,aOutput,n);

    for(int i=0; i<n; i++){
        printf("%d ",aOutput[i]);
    }
    
}