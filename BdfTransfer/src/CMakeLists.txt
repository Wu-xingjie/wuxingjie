set(CMAKE_CXX_STANDARD 11)

add_library(processor STATIC bdfProcessor.cpp)
add_library(reader STATIC bdfReader.cpp)
add_library(transfer STATIC bdfTransfer.cpp)
add_library(tool STATIC TransferTool.cpp)