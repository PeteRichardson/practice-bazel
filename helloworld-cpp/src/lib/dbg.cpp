#include "dbg.h"
#include <string>
#include <vector>

std::vector<std::string> names = {"World", "Pete", "Wendy", "Katherine"};

std::string get_name(int which)
{
    if ((which < 0) || (which >= names.size()))
        which = 0;
    return names[which];
}