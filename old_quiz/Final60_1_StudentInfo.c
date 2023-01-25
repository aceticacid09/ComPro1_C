#include<stdio.h>
struct StudentInfo
{
    int Id;
    char name[25];
    int score[6];
}typedef std_info;

std_info std[100];
int i=0;

//part 4.3 to 4.5
void showAllScores(int count){
    printf("Scores\n");
    for(i=0; i<count; i++){
        printf("%d ", std[i].Id);
        printf("%s ", std[i].name);
        for(int j=1; j<=5; j++){
            printf("%d ",std[i].score[j]);
        }
        printf("\n");
    }
}
void showAllGrades(int count){
    printf("Grades\n");
    for(i=0; i<count; i++){
        printf("%d ", std[i].Id);
        printf("%s ", std[i].name);
        for(int j=1; j<=5; j++){
            if(std[i].score[j]>=80){
                printf("A ");
            } else if(std[i].score[j]>=70){
                printf("B ");
            } else if(std[i].score[j]>=60){
                printf("C ");
            } else if(std[i].score[j]>=50){
                printf("D ");
            } else {
                printf("F ");
            }
        }
        printf("\n");
    }
}
void showStudentScores(int count){
    int input_id;
    scanf("%d",&input_id);
    for(int i=0; i<count; i++){
        if(input_id==std[i].Id){
            printf("%d ", std[i].Id);
            printf("%s ", std[i].name);
            for(int j=1; j<=5; j++){
                printf("%d ",std[i].score[j]);
            }
            printf("\n");
        }
    }
}
void showStudentGrade(int count){
    int input_id;
    scanf("%d",&input_id);
    for(int i=0; i<count; i++){
        if(input_id==std[i].Id){
            printf("%d ", std[i].Id);
            printf("%s ", std[i].name);
            for(int j=1; j<=5; j++){
                if(std[i].score[j]>=80){
                    printf("A ");
                } else if(std[i].score[j]>=70){
                    printf("B ");
                } else if(std[i].score[j]>=60){
                    printf("C ");
                } else if(std[i].score[j]>=50){
                    printf("D ");
                } else {
                    printf("F ");
                }
            }
        }
    }
    printf("\n");
}
void changeName(int count){
    int input_id;
    scanf("%d",&input_id);
    for(int i=0; i<count; i++){
        if(input_id==std[i].Id){
            scanf("%s",std[i].name);
        }
    } 
}
void changeScore(int count){
    int input_id,nscore=0,change_score=0;
    scanf("%d",&input_id);
    for(int i=0; i<count; i++){
        if(std[i].Id==input_id){
            scanf("%d%d",&nscore,&change_score);
            std[i].score[nscore] = change_score;
        }
    }
}

void main(){
    int command;
    int count=0;
    while(1){
        scanf("%d", &std[i].Id);
        if(std[i].Id==0){
            break;
        }
        scanf("%s", std[i].name);

        for(int j=1; j<=5; j++){
            scanf("%d",&std[i].score[j]);
        }
        i++;
        count++;
    }
//part 4.1: Output each student detail
    printf("Number of Students %d\nScores\n",count);
    for(i=0; i<count; i++){
        printf("%d ", std[i].Id);
        printf("%s ", std[i].name);
        for(int j=1; j<=5; j++){
            printf("%d ",std[i].score[j]);
        }
        printf("\n");
    }
//part 4.2: Output each student grade
    printf("Grades\n");
    for(i=0; i<count; i++){
        printf("%d ", std[i].Id);
        printf("%s ", std[i].name);
        for(int j=1; j<=5; j++){
            if(std[i].score[j]>=80){
                printf("A ");
            } else if(std[i].score[j]>=70){
                printf("B ");
            } else if(std[i].score[j]>=60){
                printf("C ");
            } else if(std[i].score[j]>=50){
                printf("D ");
            } else {
                printf("F ");
            }
        }
        printf("\n");
    }
//enter command
    while(1){ 
        scanf("%d", &command); 
        if(command == 0){ 
            break;
        } else if(command == 1){ 
            showAllScores(count); 
        } else if(command == 2){ 
            showAllGrades(count); 
        } else if(command == 3){
            showStudentScores(count);
        } else if(command == 4){
            showStudentGrade(count);
        } else if(command == 5){
            changeName(count);
        } else if(command == 6){ 
            changeScore(count); 
        } else{ 
            printf("please input 1,2,3,4,5,6,or 0\n"); 
        } 
    }
}