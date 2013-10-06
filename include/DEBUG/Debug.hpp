/*
 * File:   Debug.hpp
 * Author: JoPe
 *
 * Created on 2 de octubre de 2013, 23:15
 */

#ifndef DEBUG_HPP
#define	DEBUG_HPP

#ifndef NDEBUG

    #include <iostream>

    #define DLOG( i_message ) std::clog << "LOG: " << i_message << std::endl

#else

    #define DLOG( i_message )

#endif

#endif	/* DEBUG_HPP */

