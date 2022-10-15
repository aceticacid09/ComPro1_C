#include<stdio.h>
//student data form
struct std_data
{
    char id[6];
    double score;
}typedef std_score;

void main(){
    int n;
    scanf("%d",&n);
    double sum=0;
//input id and score for each student
    std_score std[n];
    for(int i=0; i<n; i++){
        scanf("%s", std[i].id);
        scanf("%lf", &std[i].score);
        sum+=std[i].score;
    }
//calculate average score
    double average = sum/n;

//output count that above average
    int count=0;
    for (int i=0; i<n; i++){
        if(std[i].score>average){
            count++;
        }
    }
    printf("%d\n", count);
//output id that above average
    for (int i=0; i<n; i++){
        if(std[i].score>average){
            printf("%s\n", std[i].id);
        }
    }
    
    

}
