set(EXEC_NAME foobar)

add_executable(${EXEC_NAME} foobar.cpp)

target_compile_features(${EXEC_NAME} PRIVATE cxx_std_20)

target_link_libraries(${EXEC_NAME}
        PRIVATE foobar_lib
        )

