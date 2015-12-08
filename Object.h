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


#ifndef OBJECT_H
#define OBJECT_H

#include <string>
#include <list>
#include "Vector.h"
#include "Point.h"

/**
  * class Object
  * 
  */

class Object
{
public:

    // Constructors/Destructors
    //  


    /**
     * Empty Constructor
     */
    Object ();

    /**
     * Empty Destructor
     */
    virtual ~Object ();

    // Static Public attributes
    //  

    // Public attributes
    //  


    // Public attribute accessor methods
    //  


    // Public attribute accessor methods
    //  



    /**
     * @param  visible
     */
    void setVisibility (bool visible = true)
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

    Point _position;
    Vector _speed;
    string _name;
    bool _visible;
public:


    // Private attribute accessor methods
    //  

private:

public:


    // Private attribute accessor methods
    //  


    /**
     * Set the value of _position
     * @param new_var the new value of _position
     */
    void set_position (Point new_var)     {
            _position = new_var;
    }

    /**
     * Get the value of _position
     * @return the value of _position
     */
    Point get_position ()     {
        return _position;
    }

    /**
     * Set the value of _speed
     * @param new_var the new value of _speed
     */
    void set_speed (Vector new_var)     {
            _speed = new_var;
    }

    /**
     * Get the value of _speed
     * @return the value of _speed
     */
    Vector get_speed ()     {
        return _speed;
    }

    /**
     * Set the value of _name
     * @param new_var the new value of _name
     */
    void set_name (string new_var)     {
            _name = new_var;
    }

    /**
     * Get the value of _name
     * @return the value of _name
     */
    string get_name ()     {
        return _name;
    }

    /**
     * Set the value of _visible
     * @param new_var the new value of _visible
     */
    void set_visible (bool new_var)     {
            _visible = new_var;
    }

    /**
     * Get the value of _visible
     * @return the value of _visible
     */
    bool get_visible ()     {
        return _visible;
    }
private:


    void initAttributes () ;

};

#endif // OBJECT_H
