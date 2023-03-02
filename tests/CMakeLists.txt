enable_testing()


add_executable(
        test_exe
        test_foo.cpp)

target_compile_features(test_exe PRIVATE cxx_std_20)

target_link_libraries(
        test_exe
        PUBLIC
        foobar_lib
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(test_exe)