// -*- C++ -*- compatibility header.

// Copyright (C) 2007-2013 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file complex.h
 *  This is a Standard C++ Library header.
 */

#include <bits/c++config.h>

#if __cplusplus >= 201103L
# include <ccomplex>
#endif

#if _GLIBCXX_HAVE_COMPLEX_H
# include_next <complex.h>
# ifdef _GLIBCXX_COMPLEX
// See PR56111, keep the macro in C++03 if possible.
#  undef complex
# endif
#endif

#ifndef _GLIBCXX_COMPLEX_H
#define _GLIBCXX_COMPLEX_H 1

#endif


#ifndef VECTOR_H
#define VECTOR_H

#include <string>
#include "Point.h"

/**
  * class Vector
  * 
  */

class Vector
{
public:

    // Constructors/Destructors
    //  


    /**
     * Empty Constructor
     */
    Vector ();

    /**
     * Empty Destructor
     */
    virtual ~Vector ();

    // Static Public attributes
    //  

    // Public attributes
    //  


    // Public attribute accessor methods
    //  


    // Public attribute accessor methods
    //  



    /**
     * @param  origin
     * @param  destination
     */
     Vector (Point origin, Point destination)
    {
    }

protected:

    // Static Protected attributes
    //  

    // Protected attributes
    //  

public:


    // Protected attribute accessor methods
    //  

protected:

public:


    // Protected attribute accessor methods
    //  

protected:


private:

    // Static Private attributes
    //  

    // Private attributes
    //  

    Point origin;
    Point destination;
public:


    // Private attribute accessor methods
    //  

private:

public:


    // Private attribute accessor methods
    //  


    /**
     * Set the value of origin
     * @param new_var the new value of origin
     */
    void setOrigin (Point new_var)     {
            origin = new_var;
    }

    /**
     * Get the value of origin
     * @return the value of origin
     */
    Point getOrigin ()     {
        return origin;
    }

    /**
     * Set the value of destination
     * @param new_var the new value of destination
     */
    void setDestination (Point new_var)     {
            destination = new_var;
    }

    /**
     * Get the value of destination
     * @return the value of destination
     */
    Point getDestination ()     {
        return destination;
    }
private:


    void initAttributes () ;

};

#endif // VECTOR_H
