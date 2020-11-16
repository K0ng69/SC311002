#include <stdio.h>
#include <stdlib.h>

int main()
{

    char fname[30];
    char name[30],surname[30];
    char grade;
    int id,score;

    FILE * fp;
    printf("Enter a file name to read : ");
    scanf("%s",fname);
    fp = fopen(fname,"r");
    if(fp == NULL){
        printf("Error : %s does not exist",fname);
        exit(1);
    }
    printf("\n");
    printf(" Student ID\tName\t\tScore\tGrade\n");
    printf("\n");
    while((fscanf(fp,"%d %s %s %d",&id,name,surname,&score)) != EOF){

        if(score>= 80 && score <= 100){
            grade = 'A';
        }
        else if(score>= 70 && score < 80){
            grade = 'B';
        }
        else if(score>= 60 && score < 70){
            grade = 'C';
        }
        else if(score>= 50 && score < 60){
            grade = 'D';
        }
        else if (score < 50){
            grade = 'F';
        }
    printf("\t%d\t%s %s\t%d\t%c",id,name,surname,score,grade);

    }
    fclose(fp);

    return 0;

}