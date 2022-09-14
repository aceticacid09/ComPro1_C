#include<stdio.h>
void main(){
    int n,count=0;
    scanf("%d",&n);
    int a[n];

    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);

    for(int i=0; i<n; i++){
        if(x==a[i]){
            printf("%d ",i+1);
            count++;
        }
    }
    if (count<1){
        printf("0");
    }

}
