NAME = mysbbst
TARBALL = mcolozzo-$(NAME).tar.gz
SRC = main.cpp add.cpp remove.cpp rotate.cpp balance.cpp height.cpp search.cpp printout.cpp comparators.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -f

CXXFLAGS = -g

all: $(OBJ)
	g++ -g $(OBJ) -o $(NAME)

clean:
	-$(RM) *~
	-$(RM) \#*
	-$(RM) *.o
	-$(RM) *.core

fclean:	clean
	-$(RM) $(NAME)

re: fclean all

submit: fclean
	tar cvzf $(TARBALL) *


