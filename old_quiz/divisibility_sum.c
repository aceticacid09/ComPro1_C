#include<stdio.h>
void main(){
    int x,y;
    int modx=0,mody=0,mod_or=0;
    scanf("%d%d",&x,&y);
    while(1){
        int n;
        scanf("%d",&n);
        if (n<=0){
            break;
        }
        if (n%x==0 && n%y!=0){
            modx = modx+n;
        }
        if (n%x!=0 && n%y==0){
            mody = mody+n;
        }
        if (n%x==0 || n%y==0){
            mod_or = mod_or+n;
        }
    }
    printf("%d\n%d\n%d",modx,mody,mod_or);
}
