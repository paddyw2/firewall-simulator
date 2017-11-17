#include <iostream>
#include <string>
#include <vector>

using namespace std;

class firewall {

    public:
        int process_outgoing();
        int process_ingoing();
        int load_ruleset();
        int process_stdin();
        int error(char * message);

    private:
        vector<string> in_ruleset;
        vector<string> out_ruleset;

};
