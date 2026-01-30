# Compiler warnings (applied only to project targets, not dependencies)
include(${PROJECT_SOURCE_DIR}/cmake/CompilerWarnings.cmake)

# Library target
add_library(__CMAKE_my-awesome-cpp-app___lib
    example.cpp
)

# Add alias for consistent naming
add_library(__CMAKE_my-awesome-cpp-app__::lib ALIAS __CMAKE_my-awesome-cpp-app___lib)

target_include_directories(__CMAKE_my-awesome-cpp-app___lib
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

target_compile_features(__CMAKE_my-awesome-cpp-app___lib
    PUBLIC
        cxx_std_${CMAKE_CXX_STANDARD}
)

# Apply strict warnings to this target only
set_project_warnings(__CMAKE_my-awesome-cpp-app___lib)

# Optional: Add other libs you want warnings for here

# Optional: Create an executable
# Uncomment if you want a main executable
# add_executable(__CMAKE_my-awesome-cpp-app__
#     main.cpp
# )
# 
# target_link_libraries(__CMAKE_my-awesome-cpp-app__
#     PRIVATE
#         __CMAKE_my-awesome-cpp-app__::lib
# )
