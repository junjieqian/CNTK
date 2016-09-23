//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.
//
#pragma once

#include "Basics.h"
#include <stdio.h>
#include <string>
#include <vector>
#include <stdint.h>
#ifdef _WIN32
#define NOMINMAX
#include "Windows.h"
#endif
#ifdef __unix__
#include <unistd.h>
#endif
#include <fstream>    // for LoadMatrixFromTextFile()
#include <sstream>

#include "hdfs.h"

namespace Microsoft { namespace MSR { namespace CNTK {
int Init_hdfsfile(File *file, const wchar_t* filename, int fileOptions);

}}}