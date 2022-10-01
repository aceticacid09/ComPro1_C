#include<stdio.h>

void main(){
    int n,countA=0,countB=0;
    scanf("%d",&n);
    int playerA[n],playerB[n];

    for(int i=0; i<n; i++){
        scanf("%d",&playerA[i]);
    }
    for(int i=0; i<n; i++){
        scanf("%d",&playerB[i]);
    }

    for(int i=0; i<n; i++){
        if(playerA[i]==1&&playerB[i]==3){          //roc vs sis
            countA++;
        } else if(playerA[i]==2&&playerB[i]==1){  //pap vs roc
            countA++;
        } else if(playerA[i]==3&&playerB[i]==2){  //sis vs pap
            countA++;
        } else if(playerB[i]==1&&playerA[i]==3){  //roc vs sis
            countB++;
        } else if(playerB[i]==2&&playerA[i]==1){  //pap vs roc
            countB++;
        } else if(playerB[i]==3&&playerA[i]==2){  //sis vs pap
            countB++;
        } 
    }

    printf("%d %d\n",countA,countB);
    
    if(countA>countB){
        printf("1");
    } else if(countB>countA){
        printf("2");
    } else{
        printf("0");
    }


}
