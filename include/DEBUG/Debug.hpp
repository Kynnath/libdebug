/*
 * File:   Debug.hpp
 * Author: JoPe
 *
 * Created on 2 de octubre de 2013, 23:15
 */

#ifndef DEBUG_HPP
#define	DEBUG_HPP

 #include <iosfwd>

namespace debug
{
#ifndef NDEBUG

    void log( std::string const& i_message );

#else

    void log( std::string const& i_message ){}

#endif
}
#endif	/* DEBUG_HPP */

