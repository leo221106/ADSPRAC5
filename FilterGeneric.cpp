#include "FilterGeneric.h"
#include <vector>

std::vector<int> FilterGeneric::do_filter(std::vector<int> lst, std::vector<int> res, int idx) {
    if (idx == lst.size()) return res;

    if (g(lst.at(idx))) res.push_back(lst.at(idx));

    return do_filter(lst, res, ++idx);
}

std::vector<int> FilterGeneric::filter(std::vector<int> lst) {
    std::vector<int> res;
    return do_filter(lst, res, 0);
}
