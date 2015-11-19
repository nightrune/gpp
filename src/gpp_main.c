/* File:      gpp_main.c  -- generic preprocessor
** Author:    Denis Auroux, Tristan Miller
** Contact:   psychonaut@nothingisreal.com
**
** Copyright (C) 1996, 1999, 2001 Denis Auroux
** Copyright (C) 2003, 2004 Tristan Miller
**
** GPP is free software; you can redistribute it and/or modify it under the
** terms of the GNU Lesser General Public License as published by the Free
** Software Foundation; either version 2.1 of the License, or (at your option)
** any later version.
**
** GPP is distributed in the hope that it will be useful, but WITHOUT ANY
** WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
** FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
** more details.
**
** You should have received a copy of the GNU Lesser General Public License
** along with this software; if not, write to the Free Software Foundation,
** Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
**
** $Id: gpp.c,v 1.10 2004/09/19 20:19:16 psy Exp $
**
*/

/* To compile under MS VC++, one must define WIN_NT */

#include "gpp.h"

int main(int argc,char **argv)
{
  return MainProgram(argc, argv);
}
