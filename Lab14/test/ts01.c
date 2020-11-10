#include <stdio.h>
#include <stdlib.h>

typedef struct _Student {
	int id;
	char fname[20];
	char lname[20];
	int score;
}Student;

void get_student(Student std[], int n) {
	int i;
	for (i = 0; i < n; ++i) {
		printf("No. %d\tStudent ID : ", i+1);
		scanf("%d", &std[i].id);
		printf("\tName : ");
		scanf("%s%*c%s", &std[i].fname, std[i].lname);
		printf("\tScore : ");
		scanf("%d", &std[i].score);
	}
}

int main() {
	int N, i;
	char filename[50];
	printf("Please enter a file name to write: ");
	scanf("%s", filename);
	FILE *fp = fopen(filename, "w");

	if (fp == NULL) {
		printf("Error : the file could not be created.");
		exit(-1);
	}

	printf("Enter the number of students :");
	scanf("%d", &N);

	Student std[N];
	get_student(std, N);

	for (i = 0; i < N; i++) {
		// printf("%d %s %s\n", ps[i].id, ps[i].fname, ps[i].lname);
		fprintf(fp, "%d %s %s %d\n", std[i].id, std[i].fname, std[i].lname, std[i].score);
	} 
	fclose(fp);
}