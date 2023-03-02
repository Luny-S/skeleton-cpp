#include <iostream>
#include <cassert>

#include <foo_bar/lib.h>

int main() {
    const std::string message = FooBar::printFooBar();
    assert(message == "FOO bar");

    std::cout << message << std::endl;
}
