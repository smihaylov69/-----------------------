#include <stdio.h>
#include <stdlib.h>

int main(){
   float avr; 
   int choice;
   int num_grades;
   do{
    printf("Enter the number of grades: ");
    scanf("%d", &num_grades);
   }while(num_grades < 0);

   float *grades = (float *)calloc(num_grades, sizeof(float));

   if(grades ==NULL){
    printf("Error allocating memory\n");
    exit(1);
    
   }
   
    
   for(int i = 0; i < num_grades; i++){
    printf("Enter grade %d : ", i+1);
    scanf("%f", &grades[i]);

   }
   while (1){
    
    printf("Enter number from 1 to 4\n");

    printf("1- See the average grade\n");
    printf("2- Enter a new grade\n");
    printf("3- Delete the last grade\n");
    printf("4- Exit the program\n");

    scanf("%d", &choice); 
    switch (choice){
        case 1:
            avr = 0;
            if (num_grades == 0){
                printf("There are no grades to calculate\n");
            }
            
            for(int i = 0; i < num_grades; i++){
                avr += grades[i];
            }
            avr = avr / num_grades;
            printf("The average grade is: %f\n", avr);
            break;
        case 2:
            num_grades ++;
            grades = (float *)realloc(grades, sizeof(float) * num_grades);

            if(grades == NULL){
                printf("Error allocating memory\n");
                exit(1);
            }

            for(int i = num_grades - 1; i < num_grades; i ++){
                printf("Enter grade %d:", i+1);
                scanf("%f", &grades[i]);
            }
            break;
        case 3:
            if(num_grades > 0){
                num_grades --;
                grades = (float *)realloc(grades, sizeof(float) * num_grades );

                if(grades == NULL){
                    printf("Error allocating memory\n");
                    exit(1);
                }
            }else{
                printf("There is no grades to delete\n");
            }
            break;
        case 4:
            free(grades);
            return 0;
                   


    }
  }

}