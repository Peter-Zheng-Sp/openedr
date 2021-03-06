//
// Version file
// This file contains definition of all version macroses.
// Their values can be patched with autogenerated file "build_info.h".
// See comments inside "build_info.h".
//
// build_info.h shall define the following macroses:
//  * CMD_VERSION_MAJOR - integer
//  * CMD_VERSION_MINOR - integer
//  * CMD_VERSION_REVISION - integer
//  * CMD_VERSION_SUFFIX  - integer (optional: like a alpha1, alpha2, rc1, ...)
//	* CMD_VERSION_BUILD - integer
//	* CMD_VERSION_EXTRA - string
//
#pragma once
#include "build_info.h"

// STR macro declaration
#define _STR(x) #x
#define STR(x) _STR(x)

#ifndef CMD_VERSION_MAJOR
#define CMD_VERSION_MAJOR 2
#endif // CMD_VERSION_MAJOR

#ifndef CMD_VERSION_MINOR
#define CMD_VERSION_MINOR 4
#endif // CMD_VERSION_MINOR

#ifndef CMD_VERSION_REVISION
#define CMD_VERSION_REVISION 0
#endif // CMD_VERSION_REVISION

#ifdef CMD_VERSION_SUFFIX
#undef CMD_VERSION_SUFFIX
#endif
// Uncomment this line if version suffix is needed
//#define CMD_VERSION_SUFFIX "alpha3"

#ifdef CMD_VERSION_SUFFIX
#define CMD_VERSION_SUFFIX_DELIMITER "-"
#else
#define CMD_VERSION_SUFFIX_DELIMITER ""
#define CMD_VERSION_SUFFIX ""
#endif // CMD_VERSION_SUFFIX

#ifndef CMD_VERSION_BUILD
#define CMD_VERSION_BUILD 0
#endif // CMD_VERSION_BUILD

#ifdef _DEBUG
#define CMD_VERSION_TYPE "debug"
#else 
#define CMD_VERSION_TYPE "release"
#endif // _DEBUG

#ifndef CMD_BUILD_EXTRA
#define CMD_BUILD_EXTRA __TIMESTAMP__
#endif // CMD_BUILD_EXTRA

//
// This version is used for formal operations
//
#define CMD_STD_VERSION STR(CMD_VERSION_MAJOR) "." STR(CMD_VERSION_MINOR) "." \
	STR(CMD_VERSION_REVISION) "." STR(CMD_VERSION_BUILD) \
	CMD_VERSION_SUFFIX_DELIMITER CMD_VERSION_SUFFIX

//
// This is just a user-friendly version
//
#define CMD_LOG_VERSION CMD_VERSION_TYPE "-" CMD_STD_VERSION "/" CMD_BUILD_EXTRA
