#ifndef PROCESSES_H
#define PROCESSES_H

struct Process{
    long Id;
    char name[30];
};

extern struct Process processes[4];
extern int processescount;
long createnewprocess(char name[30]);
void stopprocesses(long id);
#endif
