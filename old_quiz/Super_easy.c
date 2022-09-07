#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int count=1; count<=n; count++){
        int x,y;
        scanf("%d%d",&x,&y);

        if(x<y){
            for(;x<=y; x++){
                printf("%d ",x);
            }
            printf("\n");
        } else {
            for(;y<=x; y++){
                printf("%d ",y);
            }
            printf("\n");
        }

    }
}
