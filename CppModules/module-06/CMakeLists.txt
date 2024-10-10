cmake_minimum_required(VERSION 3.26)
project(intra_uuid_2ddf59b0_c18e_4bbd_af0a_1c3e61e36935_6056671_gehovhan)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex00/incs)
include_directories(ex01/incs)

add_executable(intra_uuid_2ddf59b0_c18e_4bbd_af0a_1c3e61e36935_6056671_gehovhan
        ex00/cmd/main.cpp
        ex00/incs/ScalarConverter.hpp
        ex00/incs/ScalarIterator.hpp
        ex00/incs/ScalarParser.hpp
        ex00/incs/ScalarPrinter.hpp
        ex00/incs/ScalaValidator.hpp
        ex00/incs/Variable.hpp
        ex00/src/ScalarConverter.cpp
        ex00/src/ScalarIterator.cpp
        ex00/src/ScalarParser.cpp
        ex00/src/ScalarPrinter.cpp
        ex00/src/ScalaValidator.cpp
        ex00/src/Variable.cpp
        ex01/cmd/main.cpp
        ex01/incs/Serializer.hpp
        ex01/src/Serializer.cpp
        ex02/cmd/main.cpp)
