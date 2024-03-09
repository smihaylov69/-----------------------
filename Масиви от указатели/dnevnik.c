#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int stud_count = 0;
    int sub_count;
    char ** sub_name = NULL;
    char ** stud_name = NULL;
    float ** grades = NULL;

    do{
        printf("Enter the num of subjects: ");
        scanf("%d", &sub_count);
    }while(sub_count <= 0);

    sub_name = (char **)malloc(sizeof(char *) * sub_count);

    if(sub_name == NULL){
        printf("Error allocating memory");
        exit(1);
    }

    for(int i = 0; i < sub_count; i++){
        sub_name[i] = (char *)malloc(sizeof(char) * 16);
        printf("Enter subject %d name: ", i+1);
        scanf("%s", sub_name[i]);
    }

    int choice;
    do{
        printf("Enter a number from 1 to 3\n");
        printf("1 - Enter a new student\n");
        printf("2 - Display the notebook\n");
        printf("3 - Exit the program\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                stud_name = (char **)realloc(stud_name, sizeof(char *) * (stud_count + 1));
                if(stud_name == NULL){
                    printf("Error allocating memory\n");
                    exit(1);
                }

                stud_name[stud_count] = (char*)realloc(stud_name[stud_count], sizeof(char) * 16);
                if(stud_name[stud_count] == NULL){
                    printf("Error allocating memory\n");
                    exit(1);
                }

                grades = (float **)realloc(grades, sizeof(float *) * (stud_count + 1));
                if(grades == NULL){
                    printf("Error allocating memory\n");
                    exit(1);
                }

                grades[stud_count] = (float*)realloc(grades[stud_count], sizeof(float) * sub_count);
                if(grades[stud_count] == NULL){
                    printf("Error allocating memory\n");
                    exit(1);
                }

                printf("Enter the name of student %d: ", stud_count + 1);
                scanf("%s", stud_name[stud_count]);

                printf("Enter the grades of student %d\n", stud_count + 1);
                for(int i = 0; i < sub_count; i ++){
                    printf("%s : ", sub_name[i]);
                    scanf("%f", &grades[stud_count][i]);
                }

                stud_count ++;

                break;
        
            case 2:
                printf("Name");

                for(int i = 0; i < sub_count; i ++){
                    printf("%15s", sub_name[i]);
                }
                printf("\n");

                for(int i = 0; i < stud_count; i ++){
                    printf("%s", stud_name[i]);

                    for(int j = 0; j < sub_count; j ++){
                        printf("%15f", grades[i][j]);
                    }
                    printf("\n");
                    
                }

                break;

            case 3:
                for(int i = 0; i < sub_count; i ++){
                    free(sub_name[i]);
                    free(grades[i]);
                }
                free(sub_name);
                free(grades);

                for(int i = 0; i < stud_count; i ++){
                    free(stud_name[i]);
                }
                free(stud_name);

                return 0;

            

        }
    }while(1);

    return 0;
}