#include<stdio.h>
void main(){
    int n,m;                   
    int count,countN=0,i,j;     
    scanf("%d%d",&n,&m);
    
    for(i=n; i<=m; i++){
        count = 0;
        for(j=2; j<=i/2; j++){
            if(i%j==0){
                count=1;
                break;
            }
        }
        if(count==0){
            printf("%d\n",i);
            countN+=1;
        } 
    }
    if(countN<1){
        printf("Null");
    }
}