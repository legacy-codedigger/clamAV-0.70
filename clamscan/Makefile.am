#
#  Copyright (C) 2002 - 2004 Tomasz Kojm <tkojm@clamav.net>
#  Fixes by Arkadiusz Miskiewicz <misiek@pld.org.pl>
#
#  This program is free software; you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation; either version 2 of the License, or
#  (at your option) any later version.
#
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software
#  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

bin_PROGRAMS = clamscan

clamscan_SOURCES = \
    $(top_srcdir)/shared/output.c \
    $(top_srcdir)/shared/output.h \
    $(top_srcdir)/shared/getopt.c \
    $(top_srcdir)/shared/getopt.h \
    $(top_srcdir)/shared/memory.c \
    $(top_srcdir)/shared/memory.h \
    clamscan.c \
    options.c \
    options.h \
    others.c \
    others.h \
    shared.h \
    manager.c \
    manager.h \
    treewalk.c \
    treewalk.h \
    defaults.h

DEFS = @DEFS@
LIBS = -L$(top_builddir)/libclamav -lclamav
INCLUDES = -I$(top_srcdir) -I$(top_srcdir)/shared -I$(top_srcdir)/libclamav
