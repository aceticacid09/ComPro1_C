#include<stdio.h>
double average(int n, int* arr){
    double sumA=0;
    for(int i=0; i<n; i++){
        sumA = sumA+arr[i];
    }
    return sumA/n;
}
double variance(int n, int* arr, double avg){
    double sumV=0;
    for(int i=0; i<n; i++){
        sumV+= (arr[i]-avg)*(arr[i]-avg);
    }
    return sumV/(n-1);
}
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    double avg = average(n, arr);
    double var = variance(n, arr, avg);
    printf("%.2lf %.2lf", avg, var);
}