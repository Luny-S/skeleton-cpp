include(FetchContent)

# Example
# OpenCV
#find_package(OpenCV REQUIRED)

# JSON
#find_package(nlohmann_json CONFIG REQUIRED)

## Formatting library
FetchContent_Declare(fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG master
        )
FetchContent_MakeAvailable(fmt)
