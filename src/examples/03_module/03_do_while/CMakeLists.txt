add_library(ex_03_03_library "do_while.cpp" "do_while.h")
add_executable(ex_03_03_exe "main.cpp" "do_while.cpp")
target_link_libraries(ex_03_03_exe ex_03_01_while_library)