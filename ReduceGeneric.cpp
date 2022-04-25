#include "ReduceGeneric.h"
#include <vector>

int ReduceGeneric::do_reduce(std::vector<int> list, int result, int index) {
    if (index == list.size()) return result;

    result = binaryOperator(result, list.at(index));

    return do_reduce(list, result, ++index);
}

int ReduceGeneric::reduce(std::vector<int> list) {
    return do_reduce(list, list.at(0), 1);
}
