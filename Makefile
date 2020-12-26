NAME = Raycast
SRC  = main.c
LIB  = raycast.h
CC = gcc 

OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
CFLAGS += -I./hds/

LDLIBS = `pkg-config --libs --cflags sdl2`

all : $(NAME)

$(NAME) : $(OBJ)
	      $(CC) -o $(NAME) $(OBJ) $(LDLIBS)

clean :
	      $(RM) $(OBJ)
