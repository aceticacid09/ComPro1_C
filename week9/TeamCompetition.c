#include<stdio.h>
void main(){
    int n,count1=0,count2=0;
    scanf("%d",&n);
    int team1[n],team2[n];

    for(int i=0; i<n; i++){
        scanf("%d",&team1[i]);
    }
    for(int i=0; i<n; i++){
        scanf("%d",&team2[i]);
    }

    for(int i=0; i<n; i++){
        if(team1[i]>team2[i]){
            count1+=2;
        } else if (team1[i]==team2[i]){
            count1+=1;
            count2+=1;
        } else {
            count2+=2;
        }
    }

    if(count1>count2){
        printf("Team 1 wins\nScore %d to %d",count1,count2);
    } else if(count1==count2){
        printf("Draw game\nScore %d to %d",count1,count2);
    } else {
         printf("Team 2 wins\nScore %d to %d",count2,count1);
    }

    //printf("%d,%d", count1,count2);
}
