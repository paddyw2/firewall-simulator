#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_ruleset(char ** ruleset_in, char ** ruleset_out, int size);
int process_stdin(char ** ruleset_in, char ** ruleset_out);
int process_in(char ** ruleset_in, char * line, int length);
int process_out(char ** ruleset_out, char * line, int length);
int change_ruleset_size(char ** ruleset_in, char ** ruleset_out, int size);
int get_filesize(char filename[]);
