#ifndef FILTERGENERIC
#define FILTERGENERIC

#include <vector>

class FilterGeneric {
    public:
        std::vector<int> filter(std::vector<int> list);
    private:
        std::vector<int> do_filter(std::vector<int> list, std::vector<int> result, int index);
        virtual bool g(int x)=0;
};

#endif