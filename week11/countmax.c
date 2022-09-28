#include<stdio.h>
#include<limits.h>

int countMax(int* arData, int n){
    int Max = INT_MIN;
    for(int i=0; i<n; i++){
        if(arData[i]>Max){
            Max = arData[i];
        }
    }
    int count=0;
    for(int i=0; i<n ; i++){
        if(arData[i]==Max){
            count+=1;
        }
    }
    return count;
}

void main(){
    int n;
    scanf("%d",&n);
    int arData[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arData[i]);
    }
    int answer = countMax(arData,n);
    printf("%d",answer);
}
