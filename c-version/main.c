#include "def.h"

#define RULE_SIZE 128

int get_ruleset(char ** ruleset_in, char ** ruleset_out, int size)
{
    // reads rules text file and creates a 2d array for each
    // in line, and another for each out line
    // returns the size of the rulesets
    return 0;
}

int process_stdin(char ** ruleset_in, char ** ruleset_out)
{
    // reads stdin and for each incoming request, delegates
    // to process_in, and for each outgoing delegates to
    // process_out
    int chunk_size = 5;
    char * line_buffer = malloc(chunk_size);
    int length = 0;
    char val = 0;
    int index = 0;

    while(!feof(stdin)) {
        // check if line is longer than 512
        if(index > chunk_size) {
            char * tmp = malloc(chunk_size);
            memcpy(tmp, line_buffer, chunk_size);
            line_buffer = realloc(line_buffer, chunk_size*2);
            memcpy(line_buffer, tmp, chunk_size);
            free(tmp);
            chunk_size *= 2;
            printf("Resized to: %d\n", chunk_size);
        }

        // get character and save to buffer
        val = getchar();
        line_buffer[index] = val;
        index++;

        // now process line if end if reached
        if(line_buffer[0] == 'i' && val == '\n') {
            process_in(ruleset_in, line_buffer, index);
            index = 0;
        } else if (val == '\n') {
            process_out(ruleset_out, line_buffer, index);
            index = 0;
        }
    }

    free(line_buffer);
    return 0;
}

int process_in(char ** ruleset_in, char * line, int length)
{
    // prints input line to stdout in accordance
    // with the ruleset
    fwrite(line, sizeof(char), length, stdout);
    return 0;
}

int process_out(char ** ruleset_out, char * line, int length)
{
    // prints input line to stdout in accordance
    // with the ruleset
    fwrite(line, sizeof(char), length, stdout);
    return 0;
}

int change_ruleset_size(char ** ruleset_in, char ** ruleset_out, int size)
{
    // if the rule text file has more in or out rules than the
    // standard size of the ruleset arrays, realloc both and
    // return new sizes
    return 0;
}

int main(int argc, char * argv[])
{
    char ** ruleset_in = malloc(RULE_SIZE);
    char ** ruleset_out = malloc(RULE_SIZE);
    process_stdin(ruleset_in, ruleset_out);
    free(ruleset_in);
    free(ruleset_out);
    return 0;
}
