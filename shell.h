#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

#define TDELIM " \t\r\n\a\""
/*global variable*/
extern char **environ;

void interactive_mode(void);
void no_interactive_mode(void);

char *readline();
char **split(char *input);
int execute_proccess(char **argv);

int create_process(char **argv);

char *readStream();

int _cd(char **argv);
int _exit(char **argv);
int _env(char **argv);
int _help(char **argv);

#endif
