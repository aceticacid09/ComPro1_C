#include<stdio.h>
#include<math.h>
void main(){
    int n,sum;
    scanf("%d",&n);
    int a[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            sum+= abs(a[i][j] - a[j][i]);
        }
    }
    printf("%d",sum/2);
}
