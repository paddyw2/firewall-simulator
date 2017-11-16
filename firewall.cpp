#include "firewall.h"

int firewall::process_stdin()
{
    int chunk_size = 512;
    char * file_contents = (char *)malloc(chunk_size);
    while(!feof(stdin)) {
        int read = fread(file_contents, sizeof(char),chunk_size,stdin);
        fwrite(file_contents, sizeof(char), read, stdout);
    }
    free(file_contents);
    return 0;
}

int firewall::error(char * message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
    return 0;
}
