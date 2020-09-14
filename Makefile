NAME = libmx.a

INC = inc/libmx.h

HDR = libmx.h

SRC = src/*.c \
    
SRCS = *.c \

OBJ = *.o \
    
CFLAG = -std=c11 -Wall -Wextra -Wpedantic -Werror -c

all: install clean
install:
	@mkdir obj
	@cp $(SRC) .
	@cp $(INC) .
	@clang $(CFLAG) $(SRCS)
	@ar rcs $(NAME) $(OBJ)
	@cp $(OBJ) obj

uninstall:
	@rm -rf $(SRCS)
	@rm -rf $(HDR)
	@rm -rf $(NAME)
	@rm -rf $(OBJ)
	@rm -rf obj
clean:
	@rm -rf $(SRCS)
	@rm -rf $(HDR)
	@rm -rf $(OBJ)

reinstall: uninstall all
