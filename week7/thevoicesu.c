#include<stdio.h>
void main(){
    int n,k,team1=0,team2=0;
    scanf("%d%d",&n,&k);
    for(int i=1; i<=n; i++){
        int gender,score1,score2;
        scanf("%d%d%d",&gender,&score1,&score2);

        if (gender==1 && score1>=9 && team1<k){
            printf("%d 1\n",i);
            team1+=1;
        } else if(gender==2 && score2>=9 && team2<k){
            printf("%d 2\n",i);
            team2+=1;
        } else if(score1>=9 && team1<k){
            printf("%d 1\n",i);
            team1+=1;
        } else if(score2>=9 && team2<k){
            printf("%d 2\n",i);
            team2+=1;
        }

    }

}
