cmake_minimum_required (VERSION 3.8)

project ("poker_game")

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set_property(TARGET poker_game PROPERTY CXX_STANDARD 11)

# 获取src文件夹下所有的.cpp文件
aux_source_directory(${PROJECT_SOURCE_DIR}/src SOURCES)
add_library (poker_game_dll SHARED ${SOURCES})
target_include_directories(poker_game_dll PRIVATE
  ${PROJECT_SOURCE_DIR}/include
)

# 将源代码添加到此项目的可执行文件。
add_executable (poker_game "main.cpp")
target_link_libraries(poker_game poker_game_dll)
target_include_directories(poker_game PRIVATE
  ${PROJECT_SOURCE_DIR}/include
)
