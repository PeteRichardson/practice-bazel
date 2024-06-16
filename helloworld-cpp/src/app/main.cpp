#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include "../lib/dbg.h"

int main(int argc, char *argv[])
{
    auto args = std::vector<std::string>(argv + 1, argv + argc);
    for (auto arg : args)
    {
        try
        {
            std::string who = get_name(std::stoi(arg));
            std::cout << "Hello, " << who << "!" << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << "# WARNING: '" << arg << "' not resolvable to a greeting name.\n";
            continue;
        }
    };
    exit(EXIT_SUCCESS);
}