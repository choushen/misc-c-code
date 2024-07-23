 #
 #      Jacob McKenzie
 #      Week 2 Exercise: Makefiles and Modular Programming
 #
 #

# code details

EXE_DIR = .
EXE = $(EXE_DIR)/tree

SRC= tree_building_functions.c tree_traversal_algorithms.c

# generic build details

CC=      cc
COPT=    -O
CFLAGS=

# compile to  object code

OBJ= $(SRC:.c=.o)

.c.o:
	$(CC) $(COPT) -c -o $@ $<

# build executable

$(EXE): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(EXE)

# clean up compilation

clean:
	rm -f $(OBJ) $(EXE)

# dependencies

tree_building_functions.o:  tree_building_functions.c
tree_traversal_algorithms.o: tree_traversal_algorithms.c
