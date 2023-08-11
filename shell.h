#ifndef SHELL_H
#define SHELL_H

/*---LIBRARIES---*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

/*---Macros---*/
#define TDELIM " \t\r\n\a\""
/*global variable*/
extern char **environ;

/*---PROTOTYPES---*/
/* main.c */
void interactive_mode(void);
void no_interactive_mode(void);

/* shell_interactive.c */
char *readline(void);
char **split(char *line);
int execute_proccess(char **args);

/* execute_args */
int create_process(char **args);

/* shell_no_interactive */
char *readStream(void);

/*---Builtin function---*/
int _cd(char **args);
int _exit(char **args);
int _env(char **args);
int _help(char **args);

#endif
