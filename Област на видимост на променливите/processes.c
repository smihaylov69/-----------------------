#include <stdio.h>
#include "processes.h"
#include <limits.h>
#include <string.h>

struct Process processes[4];
int processescount = 0;

static long nextprocessid(){
    static long next_id = 0;
    if(next_id == LONG_MAX){
        return 0;
    }else{
        next_id ++;
        return next_id;
    }
}

long createnewprocess(char name[30]){
    long check = nextprocessid();
    if(processescount < 5){
        processes[processescount].Id = check;
        strcpy(processes[processescount].name, name);
        printf("Processes with name: %s and id: %ld was created\n", processes[processescount].name, processes[processescount].Id);
        processescount++;
        return processes[processescount - 1].Id;
    }else{
        return 0;
    }
}

void stopprocesses(long id){
    for (int i = 0; i < processescount; i++) {
        if (processes[i].Id == id) {
            for (int j = i; j < processescount - 1; j++) {
                processes[j] = processes[j + 1];
            }
            processescount--;
            printf("Process %ld stopped.\n", id);
        }
    }
}