#include<stdio.h>
void main(){
    int playerA,playerB;
    scanf("%d",&playerA);
    scanf("%d",&playerB);
    //1=rock 2=paper 3=sissor

    if(playerA==1&&playerB==3){          //roc vs sis
        printf("1");
    } else if(playerA==2&&playerB==1){  //pap vs roc
        printf("1");
    } else if(playerA==3&&playerB==2){  //sis vs pap
        printf("1");
    } else if(playerB==1&&playerA==3){  //roc vs sis
        printf("2");
    } else if(playerB==2&&playerA==1){  //pap vs roc
        printf("2");
    } else if(playerB==3&&playerA==2){  //sis vs pap
        printf("2");
    } else {
        printf("0");
    }
}