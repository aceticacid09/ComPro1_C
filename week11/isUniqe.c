#include<stdio.h>
int count=0;
int isUniqe(int* arData, const int n){
    int a,b;
    for(a=0; a<n-1; a++){
        for(b=a+1; b<n; b++){
            if(arData[a]==arData[b]){
                count+=1;
                return count;
            }
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

    int result = isUniqe(arData, n);
    printf("%d",result);
}
