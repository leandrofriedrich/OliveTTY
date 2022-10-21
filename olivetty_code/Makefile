PROJ = olivetty

COMPILER = arm-ecross-gcc
#COMPILER = arm-gcc

top_srcdir = ../NutOS/ethernut-4.9.10-svn-snapshot-20110721/nut
top_appdir = top_srcdir/app
top_blddir = ../NutOS/precompiled

LIBDIR = $(top_blddir)/lib
INCFIRST=$(INCPRE)$(top_blddir)/include 

include $(top_blddir)/NutConf.mk
include $(top_srcdir)/app/Makedefs.$(COMPILER)
include $(top_srcdir)/app/Makeburn.arm-oocd

SRCS =  $(PROJ).c
OBJS =  $(SRCS:.c=.o)
LIBS =  $(LIBDIR)/nutinit.o -lnutcrt -lnutarch -lnutdev -lnutfs -lnutos  
TARG =  $(PROJ).hex

CFLAGS+= -w

all: $(OBJS) $(TARG) $(ITARG) $(DTARG)

include $(top_srcdir)/app/Makerules.$(COMPILER)

clean:
	-rm -f $(OBJS)
	-rm -f $(TARG) $(ITARG) $(DTARG)
	-rm -f $(PROJ).eep
	-rm -f $(PROJ).obj
	-rm -f $(PROJ).map
	-rm -f $(PROJ).dbg
	-rm -f $(PROJ).cof
	-rm -f $(PROJ).mp
	-rm -f $(SRCS:.c=.lst)
	-rm -f $(SRCS:.c=.lis)
	-rm -f $(SRCS:.c=.s)
	-rm -f $(SRCS:.c=.bak)
	-rm -f $(SRCS:.c=.i)
