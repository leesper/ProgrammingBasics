# Install script for directory: /Users/likejun/ProgrammingBasics

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/likejun/ProgrammingBasics/build/ch-1/cmake_install.cmake")
  include("/Users/likejun/ProgrammingBasics/build/ch-2/cmake_install.cmake")
  include("/Users/likejun/ProgrammingBasics/build/ch-3/cmake_install.cmake")
  include("/Users/likejun/ProgrammingBasics/build/ch-4/cmake_install.cmake")
  include("/Users/likejun/ProgrammingBasics/build/ch-5/cmake_install.cmake")
  include("/Users/likejun/ProgrammingBasics/build/ch-6/cmake_install.cmake")
  include("/Users/likejun/ProgrammingBasics/build/ch3-oop/cmake_install.cmake")
  include("/Users/likejun/ProgrammingBasics/build/ch4-oop/cmake_install.cmake")
  include("/Users/likejun/ProgrammingBasics/build/ch8-oop/cmake_install.cmake")
  include("/Users/likejun/ProgrammingBasics/build/final_exam/cmake_install.cmake")
  include("/Users/likejun/ProgrammingBasics/build/final_dsa/cmake_install.cmake")
  include("/Users/likejun/ProgrammingBasics/build/cpp-ch2/cmake_install.cmake")
  include("/Users/likejun/ProgrammingBasics/build/cpp-ch3/cmake_install.cmake")
  include("/Users/likejun/ProgrammingBasics/build/cpp-ch4/cmake_install.cmake")
  include("/Users/likejun/ProgrammingBasics/build/cpp-ch5/cmake_install.cmake")
  include("/Users/likejun/ProgrammingBasics/build/cpp-ch6/cmake_install.cmake")
  include("/Users/likejun/ProgrammingBasics/build/cpp-ch7/cmake_install.cmake")
  include("/Users/likejun/ProgrammingBasics/build/cpp-ch8/cmake_install.cmake")
  include("/Users/likejun/ProgrammingBasics/build/cpp-ch9/cmake_install.cmake")
  include("/Users/likejun/ProgrammingBasics/build/cpp-ch10/cmake_install.cmake")
  include("/Users/likejun/ProgrammingBasics/build/cpp-ch11/cmake_install.cmake")
  include("/Users/likejun/ProgrammingBasics/build/cpp-ch12/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/Users/likejun/ProgrammingBasics/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
