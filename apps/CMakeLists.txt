add_executable(webservice main.cc)

target_compile_features(webservice PRIVATE cxx_std_17)

target_link_libraries(webservice PRIVATE core)
target_link_libraries(webservice PRIVATE logger)

