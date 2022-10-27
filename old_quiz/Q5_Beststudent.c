#include<stdio.h>
//student data form
struct std_data
{
    char id[9];
    char name[100];
    char surname[100];
    double grade;
};

void main(){
    int n;
    scanf("%d",&n);
//input student data
    struct std_data std[n];
    for(int i=0; i<n; i++){
        scanf("%s",std[i].id);
        scanf("%s",std[i].name);
        scanf("%s",std[i].surname);
        scanf("%lf",&std[i].grade);
    }
//finding most grade in form
    double max; 
    int top;
    char topid, topname, topsurname;
    for(int i=0; i<n; i++){
        if(std[i].grade>max){
            max = std[i].grade;
            top = i;
        }
    }
//output top student
    for(int i=0; i<n; i++){
        if(i==top){
            printf("%s %s %s %.2lf",std[i].id,std[i].name,std[i].surname,max);
        }
    }
    
}