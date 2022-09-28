#include<stdio.h>
int count=0;
int isUniqe(int* arData, const int n){
    int a,b;
    for(a=0; a<n-1; a++){
        for(b=a+1; b<n; b++){
            if(arData[a]==arData[b]){
                return count=0;
            }
        }
    }
    return count=1;
}

void main(){
    int n;
    scanf("%d",&n);
    int arData[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arData[i]);
    }

    isUniqe(arData, n);
    printf("%d",count);
}