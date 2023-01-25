#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    double arr[n];
    double count=0;
    while(1){
        int x;
        scanf("%d",&x);
        if(x==0){
            break;
        }
        arr[x]=arr[x]+1; //add value in arr not position
        count++;
    }
    for(int i=1; i<=n; i++){
        printf("%.2lf%%\n",arr[i]/count*100);
    }
}