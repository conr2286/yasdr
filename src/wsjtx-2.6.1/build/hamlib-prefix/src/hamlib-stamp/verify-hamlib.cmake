# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

if("/home/pi/github/yasdr/src/wsjtx-2.6.1/src/hamlib-4.5.4.tar.gz" STREQUAL "")
  message(FATAL_ERROR "LOCAL can't be empty")
endif()

if(NOT EXISTS "/home/pi/github/yasdr/src/wsjtx-2.6.1/src/hamlib-4.5.4.tar.gz")
  message(FATAL_ERROR "File not found: /home/pi/github/yasdr/src/wsjtx-2.6.1/src/hamlib-4.5.4.tar.gz")
endif()

if("MD5" STREQUAL "")
  message(WARNING "File will not be verified since no URL_HASH specified")
  return()
endif()

if("ce40d510f6ac31d6e872335d925e9dff" STREQUAL "")
  message(FATAL_ERROR "EXPECT_VALUE can't be empty")
endif()

message(STATUS "verifying file...
     file='/home/pi/github/yasdr/src/wsjtx-2.6.1/src/hamlib-4.5.4.tar.gz'")

file("MD5" "/home/pi/github/yasdr/src/wsjtx-2.6.1/src/hamlib-4.5.4.tar.gz" actual_value)

if(NOT "${actual_value}" STREQUAL "ce40d510f6ac31d6e872335d925e9dff")
  message(FATAL_ERROR "error: MD5 hash of
  /home/pi/github/yasdr/src/wsjtx-2.6.1/src/hamlib-4.5.4.tar.gz
does not match expected value
  expected: 'ce40d510f6ac31d6e872335d925e9dff'
    actual: '${actual_value}'
")
endif()

message(STATUS "verifying file... done")
