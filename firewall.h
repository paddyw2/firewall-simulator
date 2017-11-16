#include <iostream>
#include <string>
#include <vector>

using namespace std;

class firewall {

    public:
        int process_stdin();
        int error(char * message);

    private:
        vector<string> ruleset;

};
