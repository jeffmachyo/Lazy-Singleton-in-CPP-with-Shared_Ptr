#include "Singleton.hpp"

int main() {

    auto s1 = Singleton::getInstance();
    auto s2 = Singleton::getInstance();


    return 0;
}