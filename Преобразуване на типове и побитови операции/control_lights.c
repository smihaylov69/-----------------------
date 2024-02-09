#include <stdio.h>

unsigned char room_lights = 0;

void Switch_lights(int room_num){
    room_lights = room_lights ^ (1 << (room_num - 1));
}

void Print_state(){
    printf("The light is on in rooms:");
    for (int i = 0; i < 8; i++) {
        if (room_lights & (1 << i)) {
            printf(" %d", i + 1);
        }
    }
    printf("\n");
}

void main(){
    while (1){
        printf("\nMenu:\n");
        printf("1. Switch lights\n");
        printf("2. Print state\n");
        printf("3. Exit\n");

        int choice;
        printf("Enter your choice (1/2/3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                {
                    int room_num;
                    printf("Enter room number (1-8): ");
                    scanf("%d", &room_num);
                    Switch_lights(room_num);
                    printf("Light switched in room %d\n", room_num);
                }
                break;

            case 2:
                Print_state();
                break;

            case 3:
                printf("Exiting program.\n");
                return 0;
        }
    }
}