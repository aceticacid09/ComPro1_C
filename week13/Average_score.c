#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    double score,sum=0;
    for(int i=0; i<n; i++){
        scanf("%lf",&score);
        sum+=score;
    }
    printf("%lf",sum/n);

}