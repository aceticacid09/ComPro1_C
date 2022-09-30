#include<stdio.h>
void main(){
    int n,count=0;
    double sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int x,y;
    scanf("%d%d",&x,&y);

    for(int i=0; i<n; i++){
        if(arr[i]>=x && arr[i]<=y){
            sum+=arr[i];
            count+=1;
        }
    }

    if(count>0){
        printf("%d\n%.2lf",count,(sum/count));
    } else {
        printf("%d\nnone",count);
    }
}
