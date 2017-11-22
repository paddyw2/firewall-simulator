#include "firewall.h"

int firewall::load_ruleset()
{
    // read rule file line by line and
    // update ingoing and outgoing rulesets
    return 0;
}

int firewall::process_stdin()
{
    int chunk_size = 512;
    char * file_contents = (char *)malloc(chunk_size);
    while(!feof(stdin)) {
        int read = fread(file_contents, sizeof(char),chunk_size,stdin);
        fwrite(file_contents, sizeof(char), read, stdout);
    }
    free(file_contents);


    // general logic
    // for each line, determine if ingoing or outgoing
    // and send to sub function
    return 0;
}

int firewall::process_ingoing()
{
    return 0;
}

int firewall::process_outgoing()
{
    return 0;
}

int firewall::error(char * message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
    return 0;
}
