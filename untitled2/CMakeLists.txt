cmake_minimum_required(VERSION 3.16)
project(untitled2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")

if (CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif ()

# Download automatically, you can also just copy the conan.cmake file
if(NOT EXISTS "${CMAKE_BINARY_DIR}/conan.cmake")
        message(STATUS "Downloading conan.cmake from https://github.com/conan-io/cmake-conan")
    file(DOWNLOAD "https://github.com/conan-io/cmake-conan/raw/v0.15/conan.cmake"
            "${CMAKE_BINARY_DIR}/conan.cmake"
            TLS_VERIFY ON)
endif()

include(${CMAKE_BINARY_DIR}/conan.cmake)

#set(CMAKE_VERBOSE_MAKEFILE true)

conan_cmake_run(REQUIRES
        nlohmann_json/3.9.1
        simple-websocket-server/2.0.2
        msgpack/3.2.1
        #libpqxx/7.4.0
        websocketpp/0.8.2
        cxxopts/2.2.1
        openssl/1.1.1k
        libwebsockets/4.2.0
        BASIC_SETUP
        OPTIONS simple-websocket-server:use_asio_standalone=False
        BUILD missing)

set(RELEASE_DIR ${PROJECT_SOURCE_DIR}/Releases)

set(BinanceSource
        src/stepper.cpp
        src/main.cpp)

include_directories(${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/include/third_party)

add_executable(untitled2 ${BinanceSource})

target_compile_definitions(untitled2 PRIVATE MSGPACK_DEFAULT_API_VERSION=1)
# Seems like id doesnt matter to have loop below
foreach (subdir ${SUBDIRS})
    if (IS_DIRECTORY ${subdir})
        MESSAGE(STATUS "Including dir " ${subdir})
        include_directories(SYSTEM ${subdir})
    endif ()
    file(GLOB children ABSOLUTE ${subdir}/*)
    foreach (child ${children})
        if (IS_DIRECTORY ${child}/include)
            MESSAGE(STATUS "Including dir " ${child})
            include_directories(SYSTEM ${child}/include)
        elseif (IS_DIRECTORY ${child}/src)
            MESSAGE(STATUS "Including dir " ${child})
            include_directories(SYSTEM ${child}/src)
        elseif (IS_DIRECTORY ${child})
            MESSAGE(STATUS "Including dir " ${child})
            include_directories(SYSTEM ${child})
        endif ()
    endforeach ()
endforeach ()

target_link_libraries(untitled2 PRIVATE ssl websockets curl pthread ${CONAN_LIBS})
