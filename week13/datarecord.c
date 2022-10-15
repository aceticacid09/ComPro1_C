#include<stdio.h>
//student data form
struct student_data {
    char id[9];
    char name[31];
    char surname[51];
    int year;
}typedef student ;

void main(){
    int num;
    scanf("%d",&num);
//input student data for each person
    student std[num];
    for(int i=0; i<num; i++){
        scanf("%s",std[i].id);
        scanf("%s",std[i].name);
        scanf("%s",std[i].surname);
        scanf("%d",&std[i].year);
    }
//find and output the student that equal to input x
    int x,count=0;
    scanf("%d",&x);
    for(int i=0; i<num; i++){
        if(x == std[i].year){
            printf("%s ",std[i].id);
            printf("%s ",std[i].name);
            printf("%s\n",std[i].surname);
            count++;
        }
    }
//if no student that equal to input x
    if(count==0){
        printf("None");
    }

}
