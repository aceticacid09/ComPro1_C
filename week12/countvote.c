#include<stdio.h>
void main(){
    int n,k,vote,count=0;
    scanf("%d%d",&n,&k);
    int score[k];
    for(int i=1; i<=k; i++){
        score[i]=0;
    }
    for(int i=1; i<=k; i++){
        scanf("%d",&vote);
        score[vote]+=1;
    }
    int max = 0;
    for(int i=1; i<=k; i++){
        if(score[i]>max){
            max = score[i];
            count = i;
        }
    }
    printf("%d\n%d",count,max);

}
