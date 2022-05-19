#include <stdexcept>

class Test{
    int* a;
    double d;

    public:

    Test() : a{nullptr}, d{.0} {}
    ~Test() {if(!a) throw std::invalid_argument("zalupa");}
};

int main()
{
    Test test;
    return 0;
}
