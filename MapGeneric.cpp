#include "MapGeneric.h"
#include <vector>

std::vector<int> MapGeneric::do_map(std::vector<int> lst, std::vector<int> res, int index) {
    if (index == lst.size()) return res;

    res.push_back(f(lst.at(index)));

    return do_map(lst, res, ++index);
}

std::vector<int> MapGeneric::map(std::vector<int> lst) {
    std::vector<int> res;
    return do_map(lst, res, 0);
}
