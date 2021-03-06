/*
 *  Copyright (C) 2002 Nigel Horne <njh@bandsman.co.uk>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

/* See RFC1521 */
typedef	enum {
	NOMIME, APPLICATION, AUDIO, IMAGE, MESSAGE, MULTIPART, TEXT, VIDEO, MEXTENSION
} mime_type;

typedef enum {
	NOENCODING, QUOTEDPRINTABLE, BASE64, EIGHTBIT, BINARY, UUENCODE, EEXTENSION
} encoding_type;

#define	MAXALTERNATIVE	5	/* The maximum number of alternatives allowed in a message */

/* tk: shut up manager.c warning */
#include <clamav.h>

/* classes supported by this system */
typedef enum {
	INVALID, BLOB
} object_type;

#ifdef C_BSD
#define UNIX
#endif
