/* ho-ansi.h  Host-specific header file for generic ansi environments.
   Copyright (C) 1987, 1991 Free Software Foundation, Inc.

This file is part of GAS, the GNU Assembler.

GAS is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GAS is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GAS; see the file COPYING.  If not, write to
the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* $Id$ */

#define M_ANSI 1

#include <stdlib.h>
#include <string.h>
#include <memory.h>

#define sys_nerr	_sys_nerr
#define sys_errlist	_sys_errlist
#define bzero(b,l)	(memset((b),0,(l)))

/*
 * $Log$
 * Revision 1.2  1991/06/14 14:01:54  rich
 * Version 2 GPL.
 *
 * Revision 1.1.1.1  1991/04/04  18:15:39  rich
 * new gas main line
 *
 * Revision 1.1  1991/04/04  18:15:38  rich
 * Initial revision
 *
 *
 */

/* end of ho-ansi.h */
