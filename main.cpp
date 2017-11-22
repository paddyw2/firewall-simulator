#include <stdlib.h>
#include <iostream>

#include "firewall.h"

int main(int argc, char * argv[])
{
    if(argc != 2) {
        cerr << "Bad parameters: ./fw [rule filename]" << endl;
        exit(EXIT_FAILURE);
    }

    firewall fw;
    fw.load_ruleset();
    fw.process_stdin();

    return 0;
}

