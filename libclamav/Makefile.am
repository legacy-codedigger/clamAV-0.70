#
#  Copyright (C) 2002 - 2004 Tomasz Kojm <tkojm@clamav.net>
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


INCLUDES = -I$(top_srcdir) -I@srcdir@/zziplib

libclamav_la_LIBADD = @LIBCLAMAV_LIBS@

libclamav_la_LDFLAGS = @TH_SAFE@ -version-info @LIBCLAMAV_VERSION@

include_HEADERS = clamav.h

libclamav_la_SOURCES = \
	clamav.h \
        matcher.c \
        matcher.h \
        md5.c \
        md5.h \
        others.c \
        others.h \
        readdb.c \
	cvd.c \
	cvd.h \
	dsig.c \
	dsig.h \
        str.c \
	str.h \
	defaults.h \
	scanners.c \
	scanners.h \
	unrarlib.c \
	unrarlib.h \
	zziplib/zzip-conf.h \
	zziplib/zzip-config.h \
	zziplib/zzip-dir.c \
	zziplib/zzip-err.c \
	zziplib/zzip-file.c \
	zziplib/zzip-file.h \
	zziplib/zzip-info.c \
	zziplib/zzip-io.c \
	zziplib/zzip-io.h \
	zziplib/zzip-stat.c \
	zziplib/zzip-stdint.h \
	zziplib/zzip-zip.c \
	zziplib/zzip.h \
	zziplib/zzipformat.h \
	zziplib/zziplib.h \
	zziplib/strc.c \
	zziplib/strc.h \
	blob.c \
	blob.h \
	mbox.c \
	mbox.h \
	message.c \
	message.h \
	snprintf.c \
	snprintf.h \
	strrcpy.c \
	strrcpy.h \
	table.c \
	table.h \
	text.c \
	text.h \
	ole2_extract.c \
	ole2_extract.h \
	vba_extract.c \
	vba_extract.h \
	cltypes.h

lib_LTLIBRARIES = libclamav.la
