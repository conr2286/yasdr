# This file is configured at cmake time, and loaded at cpack time.
# To pass variables to cpack from cmake, they must be configured
# in this file.

set (CPACK_PACKAGE_VENDOR "Joe Taylor, K1JT")
set (CPACK_PACKAGE_CONTACT "Joe Taylor <k1jt@arrl.net>")
set (CPACK_RESOURCE_FILE_LICENSE "/home/pi/github/yasdr/src/wsjtx-2.6.1/build/wsjtx-prefix/src/wsjtx/COPYING")
set (CPACK_PACKAGE_INSTALL_DIRECTORY ${CPACK_PACKAGE_NAME})
set (CPACK_PACKAGE_EXECUTABLES wsjtx "wsjtx")
set (CPACK_CREATE_DESKTOP_LINKS wsjtx)
set (CPACK_STRIP_FILES TRUE)

#
# components
#
#set (CPACK_COMPONENTS_ALL runtime)
#set (CPACK_COMPONENT_RUNTIME_DISPLAY_NAME "wsjtx Application")
#set (CPACK_COMPONENT_RUNTIME_DESCRIPTION "")

if (CPACK_GENERATOR MATCHES "NSIS")
  set (CPACK_STRIP_FILES FALSE)	# breaks Qt packaging on Windows

  set (CPACK_NSIS_INSTALL_ROOT "C:\\WSJT")

  # set the install/unistall icon used for the installer itself
  # There is a bug in NSI that does not handle full unix paths properly.
  set (CPACK_NSIS_MUI_ICON "/home/pi/github/yasdr/src/wsjtx-2.6.1/build/wsjtx-prefix/src/wsjtx/icons/windows-icons\\wsjtx.ico")
  set (CPACK_NSIS_MUI_UNIICON "/home/pi/github/yasdr/src/wsjtx-2.6.1/build/wsjtx-prefix/src/wsjtx/icons/windows-icons\\wsjtx.ico")
  # set the package header icon for MUI
  set (CPACK_PACKAGE_ICON "/home/pi/github/yasdr/src/wsjtx-2.6.1/build/wsjtx-prefix/src/wsjtx/icons/windows-icons\\installer_logo.bmp")
  # tell cpack to create links to the doc files
  set (CPACK_NSIS_MENU_LINKS
    "https://wsjt.sourceforge.io/wsjtx-doc//wsjtx-main" "wsjtx Documentation"
    "https://wsjt.sourceforge.io/wsjtx.html" "wsjtx Web Site"
    )
  # Use the icon from wsjtx for add-remove programs
  set (CPACK_NSIS_INSTALLED_ICON_NAME "bin\\\\wsjtx.exe")

  set (CPACK_NSIS_DISPLAY_NAME "${CPACK_PACKAGE_DESCRIPTION_SUMMARY}")
  set (CPACK_NSIS_HELP_LINK "https://wsjt.sourceforge.io/wsjtx-doc//wsjtx-main")
  set (CPACK_NSIS_URL_INFO_ABOUT "https://wsjt.sourceforge.io/wsjtx.html")
  set (CPACK_NSIS_CONTACT "${CPACK_PACKAGE_CONTACT}")
  set (CPACK_NSIS_MUI_FINISHPAGE_RUN "wsjtx.exe")
  set (CPACK_NSIS_MODIFY_PATH ON)

  # Setup the installer and uninstall VersionInfo resource
  set (CPACK_NSIS_EXTRA_DEFINES
    "VIProductVersion 2.6.1.0
VIFileVersion 2.6.1.0
VIAddVersionKey /LANG=0 \"ProductName\" \"wsjtx\"
VIAddVersionKey /LANG=0 \"ProductVersion\" \"v2.6.1\"
VIAddVersionKey /LANG=0 \"Comments\" \"WSJT-X: Digital Modes for Weak Signal Communications in Amateur Radio\"
VIAddVersionKey /LANG=0 \"CompanyName\" \"Joe Taylor, K1JT\"
VIAddVersionKey /LANG=0 \"LegalCopyright\" \"Copyright (C) 2001-2023 by Joe Taylor, K1JT\"
VIAddVersionKey /LANG=0 \"FileDescription\" \"wsjtx Installer\"
VIAddVersionKey /LANG=0 \"FileVersion\" \"v2.6.1\""
    )
endif ()

if ("${CPACK_GENERATOR}" STREQUAL "PackageMaker")
  set (CPACK_PACKAGE_FILE_NAME "${CPACK_PACKAGE_FILE_NAME}-pkg")
  set (CPACK_PACKAGE_DEFAULT_LOCATION "/Applications")
  set (CPACK_PACKAGING_INSTALL_PREFIX "/")
endif ()

if ("${CPACK_GENERATOR}" STREQUAL "DragNDrop")
  set (CPACK_DMG_VOLUME_NAME "WSJT-X")
  set (CPACK_DMG_BACKGROUND_IMAGE "/home/pi/github/yasdr/src/wsjtx-2.6.1/build/wsjtx-prefix/src/wsjtx/icons/Darwin/DragNDrop Background.png")
  set (CPACK_DMG_DS_STORE "/home/pi/github/yasdr/src/wsjtx-2.6.1/build/wsjtx-prefix/src/wsjtx/Darwin/wsjtx_DMG.DS_Store")
  set (CPACK_BUNDLE_NAME "")
  set (CPACK_PACKAGE_ICON "/home/pi/github/yasdr/src/wsjtx-2.6.1/build/wsjtx-prefix/src/wsjtx-build/wsjtx.icns")
  set (CPACK_BUNDLE_ICON "/home/pi/github/yasdr/src/wsjtx-2.6.1/build/wsjtx-prefix/src/wsjtx-build/wsjtx.icns")
  set (CPACK_BUNDLE_STARTUP_COMMAND "/home/pi/github/yasdr/src/wsjtx-2.6.1/build/wsjtx-prefix/src/wsjtx/Mac-wsjtx-startup.sh")
endif ()

if ("${CPACK_GENERATOR}" STREQUAL "WIX")
  # Reset CPACK_PACKAGE_VERSION to deal with WiX restriction.
  # But the file names still use the full CMake_VERSION value:
  set (CPACK_PACKAGE_FILE_NAME
    "${CPACK_PACKAGE_NAME}-2.6.1-${CPACK_SYSTEM_NAME}")
  set (CPACK_SOURCE_PACKAGE_FILE_NAME
    "${CPACK_PACKAGE_NAME}-2.6.1-Source")

  if (NOT CPACK_WIX_SIZEOF_VOID_P)
    set (CPACK_WIX_SIZEOF_VOID_P "8")
  endif ()
endif ()

if ("${CPACK_GENERATOR}" STREQUAL "DEB")
  set (CPACK_PACKAGE_FILE_NAME ${CPACK_PACKAGE_NAME}_${CPACK_PACKAGE_VERSION}_${CPACK_DEBIAN_PACKAGE_ARCHITECTURE})
  set (CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL} Debian)
endif ("${CPACK_GENERATOR}" STREQUAL "DEB")

if ("${CPACK_GENERATOR}" STREQUAL "RPM")
  set (CPACK_PACKAGE_FILE_NAME ${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION}.${CPACK_RPM_PACKAGE_ARCHITECTURE})
endif ("${CPACK_GENERATOR}" STREQUAL "RPM")

message (STATUS "CMAKE_INSTALL_PREFIX: ${CMAKE_INSTALL_PREFIX}")
