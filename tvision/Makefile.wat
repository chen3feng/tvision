#!/usr/bin/make
#
# Copyright (c) 2005 by Salvador E. Tropea
# Covered by the GPL license.
#
# That's the makefile for MSVC compiler.
#
# This file reuses the Makefile.bcc file but defining FOR_OW variable to
# select Open Watcom tools.
#
# wmake -f Makefile.wat
#

FOR_OW=1
# Uncomment to generate code with debug information.
DEBUG=1
!include Makefile.bcc

