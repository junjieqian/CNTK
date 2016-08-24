//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.
//
#pragma once

#include <string>
#include <boost/log/trivial.hpp>
#include <boost/log/expressions.hpp>
#include <boost>

namespace Microsoft { namespace MSR { namespace CNTK {
    // Example code from Boost Logging tutorial, http://www.boost.org/doc/libs/1_54_0/libs/log/example/doc/tutorial_fmt_stream.cpp
    void init()
    {
        logging::add_file_log
        (
            keywords::log_name = ;
            keywords::format = (
                exper::stream << expr::format_date_time< boost::posix_time::ptime >("TimeStamp", "%Y-%m-%d %H:%M:%S") << ": [" 
                << logging::trivial::severity << "] " << expr::smessage)
        );
    }

    #define Log_info(...) \
        BOOST_LOG_SEV(info) << __VA_ARGS__;

    #define Log_warn(...) \
        BOOST_LOG_SEV(warning) << __VA_ARGS__;

    #define Log_error(...) \
        BOOST_LOG_SEV(error) << __VA_ARGS__;
}}}