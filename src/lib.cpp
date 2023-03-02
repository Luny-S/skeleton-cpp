#include <foo_bar/lib.h>

std::string FooBar::printFooBar() {
    return fmt::format("FOO {}", "bar");
}