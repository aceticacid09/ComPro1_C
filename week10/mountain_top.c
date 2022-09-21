#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];

    //nPeak
    //input
    int nPeak=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    //find center
    for(int centerR=1; centerR<n-1; centerR++){
        for(int centerC=1; centerC<n-1; centerC++){
            //printf("%d\n",arr[centerR][centerC]);

    //find 3x3 around center
            int count=0;
            for(int r=centerR-1; r<=centerR+1; r++){
                for(int c=centerC-1; c<=centerC+1; c++){
                    //printf("%d ",arr[r][c]);
                    if(arr[centerR][centerC]>arr[r][c]){
                        count++;
                    }
                }
                //printf("\n");
            }
            //peak
            if(count==8){
                nPeak++;
            }
        }
    }


    //find center
    printf("%d\n", nPeak);
    for(int centerR=1; centerR<n-1; centerR++){
        for(int centerC=1; centerC<n-1; centerC++){
            //printf("%d\n",arr[centerR][centerC]);

    //find 3x3 around center
            int count=0;
            for(int r=centerR-1; r<=centerR+1; r++){
                for(int c=centerC-1; c<=centerC+1; c++){
                    //printf("%d ",arr[r][c]);
                    if(arr[centerR][centerC]>arr[r][c]){
                        count++;
                    }
                }
                //printf("\n");
            }
            //peak
            if(count==8){
                printf("%d %d %d\n",arr[centerR][centerC],centerR,centerC);
            }
        }
    }
}
