#------------------------------------------------------------------------------
# File       : Makefile
# Description: build romas library
# Author     : Sensor Processing Team
#
# $Id: Makefile,v 1.15.2.1 2005/10/24 14:53:11 heres Exp $
#
# $Log: Makefile,v $
#
# Copyright (c) %y, Holland Institute of Traffic Technology B.V.
#------------------------------------------------------------------------------

# Note: needs BSD's pmake

# Available `built-in' targets:
#  - all    build a local (target) library (the default)
#  - depend    build automatically a dependency file
#  - install    install local library in program library
#  - tags    build a TAGS file for vi/emacs
#  - clean    clean directory (partly)
#  - cleandir    clean directory (full)


# additional flags to the C-compiler
COPTS += -fno-exceptions -DUNIX -DBSD -DACMS \
    -I../../include\
    -I$(GEO_DIR)/include\
    -I$(BC_DIR)/include\
    -I$(HITT_DIR)/include\
    -I$(TOOLSH_DIR)/include\
    -I$(SIC_DIR)/include
#    -I$(ROUTE_DIR)/include\

# additional loader objects/libraries
# LDADD +=

# linking libraries
LIBEXT += \
    -L$(GEO_DIR)/lib/${TARGETARCH}        -litf${LIB_EXT}\
                        -lpsr${LIB_EXT}\
                        -lgeo${LIB_EXT}\
                        -lposition${LIB_EXT}\
    -L$(SIC_DIR)/lib/${TARGETARCH}        -lifhitt${LIB_EXT}\
    -L$(BC_DIR)/lib/${TARGETARCH}        -lbc${LIB_EXT}\
    -L$(HITT_DIR)/lib/$(TARGETARCH)        -lhitt$(LIB_EXT)\
    -L$(AGENTX_DIR)/lib            -lagentx\
    -L$(TOOLSH_DIR)/lib            -lrwtool

# additional loader flags
#LDFLAGS +=

# additional files to remove for the clean/cleandir targets
#CLEANFILES +=

# add following link flags when running on alpha
.if ${.MACHINE} == "alpha"
LDADD += -lbsd -lm
.endif

# add following link flags when running on sun4
.if ${.MACHINE} == "sun4u"
LDADD += -lsocket -lnsl -lm
.endif

# name of library to build
LIB = fasttest

# name of program to build
PROG = fasttest${LIB_EXT}

# list of sources to build program
SRCS =     \
    fasttest.cxx\

# name of the program (object) library
#PROGLIB =

# list of subdirectories to built as well
#SUBDIR =

.include <hitt.mk>

CC=g++
CCC=g++
