FROM ubuntu:20.04 AS x64_base

RUN apt-get update

RUN apt-get install -yq tzdata
RUN  ln -fs /usr/share/zoneinfo/Europe/Warsaw /etc/localtime

RUN apt-get -y install build-essential \
    cmake \
    git wget \
    clang clang-format clang-tidy clang-tools \
    lldb lld

# Set default compiler to Clang
RUN update-alternatives --install /usr/bin/cc cc /usr/bin/clang 100 \
    && update-alternatives --install /usr/bin/c++ c++ /usr/bin/clang++ 100

COPY . /workspace
WORKDIR /workspace

FROM x64_base as x64_dev

RUN apt-get install -y \
    libgtest-dev

RUN cmake -DCMAKE_BUILD_TYPE=Debug -S . -B cmake-build-debug

RUN cmake --build cmake-build-debug --parallel