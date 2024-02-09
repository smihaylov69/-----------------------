#include "processes.h"
#include <stdio.h>

int main() {
    int choice;
    do {
        printf("1. Create new process\n");
        printf("2. Display all processes\n");
        printf("3. Stop process\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                {
                    char name[30];
                    printf("Enter process name: ");
                    scanf("%s", name);
                    long check = createnewprocess(name);
                    if (check == 0) {
                        printf("The maximum number of working processes has been reached, and in order to create a new process, one of the working processes must be stopped.\n");
                    }
                }
                break;
            case 2:
                for (int i = 0; i < processescount; i++) {
                    printf("ID: %d, Name: %s\n", processes[i].Id, processes[i].name);
                }
                break;
            case 3:
                {
                    int id;
                    printf("Enter process ID to stop: ");
                    scanf("%d", &id);
                    stopprocesses(id);
                }
                break;
            case 4:
                printf("Exiting program.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
