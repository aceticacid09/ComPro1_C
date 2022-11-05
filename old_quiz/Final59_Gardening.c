#include<stdio.h>
#include<limits.h>
void main(){
    int people,day,max=INT_MIN,min=INT_MAX;
    scanf("%d%d",&people,&day);

    int arr[day][people];
    for(int r=0; r<day; r++){
        for(int c=0; c<people; c++){
            scanf("%d",&arr[r][c]);
        }
    }

    int sum[people];
    for(int i=0; i<day; i++){
        for(int j=0; j<people; j++){
            sum[j] = 0;
        }
    }

    for(int i=0; i<day; i++){
        for(int j=0; j<people; j++){
            if(arr[i][j]<=10){
                sum[j] += arr[i][j] * 40;  
            } else {
                sum[j] += 10*40;
            }
        }
    }

    int totalPaid=0;
    for(int i=0; i<people; i++){
        totalPaid += sum[i];
    }
    for(int i=0; i<people; i++){
        if(sum[i]>max){
            max = i;
        }
    }
    for(int i=0; i<people; i++){
        if(sum[i]<min){
            min = i+1;
        }
    }

    printf("%d\n%d\n%d", totalPaid,max,min);
}