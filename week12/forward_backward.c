#include<stdio.h>
void main(){
    int n,m;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);

    for(int i=0; i<n; i++){
        arr[i]=arr[i]+m;
    }
    if(m>0){
        for(int i=0; i<n; i++){
            printf("%d ",arr[i]);
        }
    }else if (m<0){
        for(int i=n; i>0; i--){
            printf("%d ",arr[i-1]);
        }
    }

}
