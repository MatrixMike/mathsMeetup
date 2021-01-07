IDIR =../include
# Which compiler
CC=gcc
#CC=tcc
#CFLAGS=-I$(IDIR)

ODIR =obj
LDIR =../lib

# Options for development : check -ansi for comment style
CFLAGS=-g -Wall  -lm 

#all:	times11 seqTest buildSeq seqTestB logicAnd facebook1 diagonal
all:	buildSeq seqTest mathsMay19

# Local Libraries
MYLIB=mylib.a

_DEPS = hellomake.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = hellomake.o hellofunc.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildSeq: buildSeq.c  
	$(CC) -o $(ODIR)/buildSeq  buildSeq.c -I.

seqTest: seqTest.c  
	$(CC) -o $(ODIR)/seqTest seqTest.c  -I.

#times11: times11.c  
#	$(CC) -o $(ODIR)/times11 times11.c  -I.

#seqTestB: seqTestB.c  
#	$(CC) -o $(ODIR)/seqTestB seqTestB.c  -I.

hellomake: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~  $(hellomake)

# DO NOT DELETE
