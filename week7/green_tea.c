#include<stdio.h>
void main(){
    for (int i=1; i<=7; i++){
        int water,sugar,product;
        scanf("%d%d",&water,&sugar);
        int product_w = water/250;
        int product_s = sugar/15;

        if(product_w<product_s){
            product= product_w;
        } else {
            product=product_s;
        }
        if (water-product*250 > 0){
            printf("%d water\n", product);
        }else {
            printf("%d\n", product);
        }
    }
}
