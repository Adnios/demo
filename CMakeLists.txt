cmake_minimum_required(VERSION 3.13)
project(demo)

set(CMAKE_CXX_STANDARD 14)

add_executable(BubbleSort BubbleSort.cpp LinkNode.cpp)
add_executable(sort sort.cpp)
add_executable(SeqList SeqList.cpp)
add_executable(Linknode LinkNode.cpp)
add_executable(SeqStack SeqStack.cpp)
add_executable(LinkedStack LinkedStack.cpp)
add_executable(Graphmtx Graphmtx.cpp)