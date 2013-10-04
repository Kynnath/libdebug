/*
 * File:   Debug.cpp
 * Author: JoPe
 *
 * Created on 2 de octubre de 2013, 23:15
 */

#include "DEBUG/Debug.hpp"

#include <iostream>
#include <string>

#ifndef NDEBUG

namespace debug
{
    void Log( std::string const& i_message )
    {
        std::clog << "LOG: " << i_message << std::endl;
    }

    void Log( double const& i_message )
    {
        std::clog << "LOG: " << i_message << std::endl;
    }

    void Error( std::string const& i_message )
    {
        std::cerr << "ERROR: " << i_message << std::endl;
    }
}

#endif