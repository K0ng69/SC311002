#include <stdio.h>
#include <stdlib.h>

typedef struct mystudent{
    int id;
    char firstName[20];
    char lastName[20];
    int score;
}student;

int main()
{

    char filename[20];
    int i;
    int numstudent;

    printf("Please enter a file name to write: ");
    scanf("%s", filename);
    printf("Enter the number of students: ");
    scanf("%d", &numstudent);


    student AllStudent[numstudent];

    FILE *fp;
    fp = fopen(filename, "w+");
    if(fp == NULL){
        printf("Error: the file could not be created.");
        exit(1);
    }

    for(i=0;i<numstudent;i++){
        printf("No. %d\tStudent ID : ", i+1);
        scanf("%d", &AllStudent[i].id);
        printf("    \tName : ");
        scanf("%s %s", AllStudent[i].firstName, AllStudent[i].lastName);
        printf("    \tScore : ");
        scanf("%d", &AllStudent[i].score);

    }

    for(i=0;i<numstudent;i++){
        fprintf(fp, "%d %s %s %d\n", AllStudent[i].id, AllStudent[i].firstName, AllStudent[i].lastName, AllStudent[i].score);
    }

    return 0;
}