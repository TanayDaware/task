#include "CLIParser.h"

int main(int argc, char* argv[]) {
    CLIParser cli;
    cli.parse(argc, argv);

    if (!cli.hasCommand() || cli.getCommand() == "help") {
        cli.printHelp();
        return 0;
    }

    return 0;
}