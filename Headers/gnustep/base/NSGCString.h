/* Interface to NSString implementation with C-string backing
   Copyright (C) 1995 Free Software Foundation, Inc.

   Written by:  R. Andrew McCallum <mccallum@gnu.ai.mit.edu>
   Date: March 1995

   This file is part of the GNU Objective C Class Library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
   
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#ifndef __NSCString_h_OBJECTS_INCLUDE
#define __NSCString_h_OBJECTS_INCLUDE

#include <objects/stdobjects.h>
#include <foundation/NSString.h>

/* NSCString and NSMutableCString must have the same initial ivar layout
   because of class_add_behavior() in NSMutableCString's +initialize. */

@interface NSCString : NSString
{
  char * _contents_chars;
  int _count;
}
@end

@interface NSMutableCString : NSMutableString
{
  char * _contents_chars;
  int _count;
  int _capacity;
}
@end

#endif /* __NSCString_h_OBJECTS_INCLUDE */
