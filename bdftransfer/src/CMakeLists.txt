set(CMAKE_CXX_STANDARD 11)


add_library(processor STATIC bdfProcessor.cpp)
add_library(reader STATIC bdfReader.cpp)
add_library(transfer STATIC bdfTransfer.cpp)
add_library(tool STATIC TransferTool.cpp)
add_library(reload STATIC reload.cpp)
add_library(db STATIC DateModel.cpp)
add_library(mat1 STATIC mat1.cpp)
add_library(cbar STATIC cbar.cpp)

target_link_libraries(tool processor)
target_link_libraries(tool reader)
target_link_libraries(tool transfer)
target_link_libraries(reload tool)
target_link_libraries(db mat1)
target_link_libraries(db cbar)

