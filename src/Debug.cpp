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
    void log( std::string const& i_message )
    {
        std::cerr << i_message << std::endl;
    }
}

#endif