//

// Copyright (c) Microsoft. All rights reserved.

// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.

//

// Hdfs.cpp : Hadoop filesystem support

//


#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS // "secure" CRT not available on all platforms  --add this at the top of all CPP files that give "function or variable may be unsafe" warnings
#endif

#include "file.h"
#include "hdfs.h" // hdfs header file
#include "Hdfsfile.h"


using namespace std;

int Init_hdfsfile(File *file, const wchar_t* filename, int fileOptions)
{
    int res = 0;

    // Split the namenode, port and connect
    file->hdfsFS = hdfsConnect(nn, 0);

}