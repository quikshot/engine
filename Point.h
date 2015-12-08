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


#ifndef POINT_H
#define POINT_H

#include <string>
using namespace std;

/**
  * class Point
  * 
  */

class Point
{
public:

    // Constructors/Destructors
    //  


    /**
     * Empty Constructor
     */
    //Point ();

    /**
     * Empty Destructor
     */
    virtual ~Point ();

    // Static Public attributes
    //  

    // Public attributes
    //  


    // Public attribute accessor methods
    //  


    // Public attribute accessor methods
    //  



    /**
     * @return double
     */
    double X ()
    {
    }


    /**
     * @return double
     */
    double Y ()
    {
    }


    /**
     * @return double
     */
    double Z ()
    {
    }


    /**
     * @return double
     * @param  otherPoint
     */
    double distance (Point otherPoint)
    {
    }


    /**
     * @param  x
     * @param  y
     * @param  z
     */
    Point (double x = 0.0, double y = 0.0, double z = 0.0);



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

    double x;
    double y;
    double z;
public:


    // Private attribute accessor methods
    //  

private:

public:


    // Private attribute accessor methods
    //  


    /**
     * Set the value of x
     * @param new_var the new value of x
     */
    void setX (double new_var)     {
            x = new_var;
    }

    /**
     * Get the value of x
     * @return the value of x
     */
    double getX ()     {
        return x;
    }

    /**
     * Set the value of y
     * @param new_var the new value of y
     */
    void setY (double new_var)     {
            y = new_var;
    }

    /**
     * Get the value of y
     * @return the value of y
     */
    double getY ()     {
        return y;
    }

    /**
     * Set the value of z
     * @param new_var the new value of z
     */
    void setZ (double new_var)     {
            z = new_var;
    }

    /**
     * Get the value of z
     * @return the value of z
     */
    double getZ ()     {
        return z;
    }
private:


    void initAttributes () ;

};

#endif // POINT_H
