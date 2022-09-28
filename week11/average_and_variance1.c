#include<stdio.h>
double average(int* arr){
    double sumA=0;
    for(int i=0; i<8; i++){
        sumA = sumA+arr[i];
    }
    return sumA/8;
}
double variance(int* arr, double avg){
    double sumV=0;
    for(int i=0; i<8; i++){
        sumV+= (arr[i]-avg)*(arr[i]-avg);
    }
    return sumV/7;
}
void main(){
    int arr[8];
    for(int i=0; i<8; i++){
        scanf("%d",&arr[i]);
    }
    double avg = average(arr);
    double var = variance(arr, avg);
    printf("%.2lf %.2lf", avg, var);
}