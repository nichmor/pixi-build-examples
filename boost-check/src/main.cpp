// main.cpp
// hello 1
#include <iostream>
#include <boost/version.hpp>

int main() {
    std::cout << "Boost version hello4 : " 
              << BOOST_VERSION / 100000     << "."  // major version
              << BOOST_VERSION / 100 % 1000 << "."  // minor version
              << BOOST_VERSION % 100                // patch level
              << std::endl;
    return 0;
}
