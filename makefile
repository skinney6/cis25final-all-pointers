# Sat Nov 23 15:37:03 PST 2013
# taken from wiki.osdev.org/Makefile
# search gihub for "pdclib" for an example
# c++ debug -D_GLIBCXX_DEBUG
# compile shared library (.so) -shared -fPIC
CC := g++
CPARMS := -Wall -Wextra -g
LDFLAGS := -g

PROJDIRS := .
SRCFILES := $(shell find $(PROJDIRS) -maxdepth 1 -type f -name "*.cpp")
HDRFILES := $(shell find $(PROJDIRS) -maxdepth 1 -type f -name "*.h")
OBJFILES := $(patsubst %.cpp,%.o,$(SRCFILES))
DEPFILES := $(patsubst %.cpp,%.d,$(SRCFILES))
TSTFILES := $(patsubst %.cpp,%_t,$(SRCFILES))
AUXFILES := makefile README
ALLFILES := $(SRCFILES) $(HDRFILES) $(AUXFILES)

-include $(DEPFILES) $(TSTDEPFILES)

.PHONY: all clean dist check testdrivers todolist

all: final

final: $(OBJFILES)
	$(CC) $(LDFLAGS) $(OBJFILES) -o $@

lib.final.so: $(OBJFILES)
	$(CC) -shared -DLIB -o lib.final.so $?

%.o: %.cpp makefile
	$(CC) -c $(CFLAGS) $(CPARMS) -MMD -MP $< -o $@

todolist:
	-@for file in $(ALLFILES:makefile=); do grep -H -e TODO -e FIXME $$file; done; true

dist:
	@tar czf /mnt/backup/cis25/cis25Fall2013FinalExamScottKinney`date +%m%d%H%M`.tar.gz $(ALLFILES) 
#@tar czf /mnt/backup/cis25/final.`date +%m%d%y.%H%M`.tar.gz $(ALLFILES) 

clean:
	-rm *.o *.d *~

