set(LIB_NAME foobar_lib)

add_library(${LIB_NAME} lib.cpp)

target_include_directories(${LIB_NAME}
        PUBLIC ../include
        )

target_link_libraries(
        ${LIB_NAME}
        PUBLIC fmt::fmt-header-only
)

set_target_properties(${LIB_NAME}
        PROPERTIES CXX_STANDARD 20)

#TODO Make ALIAS targets to keep usage consistent: Using add_subdirectory and find_package should provide the same targets and namespaces.
#https://cliutils.gitlab.io/modern-cmake/chapters/intro/dodonot.html