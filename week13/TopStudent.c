#include<stdio.h>
#include<limits.h>
struct student{
    int k[5];
}typedef student_score;

void main(){
    int n,k,sum,max=0,top;
    scanf("%d%d",&n,&k);

    student_score std[n];
    for(int i=0; i<n; i++){
        sum=0;
        for(int j=0; j<k; j++){
            scanf("%d",&std[i].k[j]);
            sum+= std[i].k[j];
        }
        if(sum>max){
            max = sum;
            top = i;
        }
    }

    int count=0;
    for(int i=0; i<n; i++){
        int flag=0;
        for(int j=0; j<n; j++){
            if(std[j].k[i]>std[top].k[i]){
                flag=1;
            }
        }
        if(flag==0){
            count++;
        }
    }
    printf("%d\n%d",max,count);

}
