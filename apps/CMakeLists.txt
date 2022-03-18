set(APP_NAME webservice)

configure_file(main.in.cc main.cc)

add_executable(${APP_NAME} main.cc)

target_compile_features(${APP_NAME} PRIVATE cxx_std_17)

target_link_libraries(${APP_NAME} PUBLIC core)

