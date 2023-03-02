#include <gtest/gtest.h>
#include <foo_bar/lib.h>

TEST(TestFooBarPrint, BasicAssertions) {
    const std::string value = FooBar::printFooBar();
    EXPECT_EQ( value, "FOO bar" );
}
