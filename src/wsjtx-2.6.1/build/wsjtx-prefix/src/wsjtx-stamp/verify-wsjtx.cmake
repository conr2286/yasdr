# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

if("/home/pi/github/yasdr/src/wsjtx-2.6.1/src/wsjtx.tgz" STREQUAL "")
  message(FATAL_ERROR "LOCAL can't be empty")
endif()

if(NOT EXISTS "/home/pi/github/yasdr/src/wsjtx-2.6.1/src/wsjtx.tgz")
  message(FATAL_ERROR "File not found: /home/pi/github/yasdr/src/wsjtx-2.6.1/src/wsjtx.tgz")
endif()

if("MD5" STREQUAL "")
  message(WARNING "File will not be verified since no URL_HASH specified")
  return()
endif()

if("ce33ee79c685ab54f1682b140691fc57" STREQUAL "")
  message(FATAL_ERROR "EXPECT_VALUE can't be empty")
endif()

message(STATUS "verifying file...
     file='/home/pi/github/yasdr/src/wsjtx-2.6.1/src/wsjtx.tgz'")

file("MD5" "/home/pi/github/yasdr/src/wsjtx-2.6.1/src/wsjtx.tgz" actual_value)

if(NOT "${actual_value}" STREQUAL "ce33ee79c685ab54f1682b140691fc57")
  message(FATAL_ERROR "error: MD5 hash of
  /home/pi/github/yasdr/src/wsjtx-2.6.1/src/wsjtx.tgz
does not match expected value
  expected: 'ce33ee79c685ab54f1682b140691fc57'
    actual: '${actual_value}'
")
endif()

message(STATUS "verifying file... done")
