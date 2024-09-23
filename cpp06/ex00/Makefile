NAME		= converter
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow
RM			= rm -rf

OBJDIR = .objFiles

FILES		= main ScalarConverter


SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= ScalarConverter.hpp

#Colors:
RESET		:= \033[0m
RED		    := \033[1;5;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[24;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m


#ascii name: big
BANNER = \n\
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓ \n\
┃                CPP06                 ┃ \n\
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛ \n\
:                EX 00                 : \n\


ifeq ($(DEBUG), 1)
   OPTS = -g
endif

.PHONY: all clean re

all: $(NAME)

$(NAME):print $(OBJ) $(HEADER)
	@$(CC) $(OBJ) $(OPTS) -o $(NAME)
	@printf "$(_SUCCESS) $(GREEN)- Executable ready.\n$(RESET)"

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) $(OPTS) -c $< -o $@

clean:
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"
	
fclean: clean
	@$(RM) $(OBJDIR)
	@printf "$(YELLOW)    - Objects removed.$(RESET)\n"

re: clean all

print:
	@echo "$(BLUE)$(BANNER)$(CLR_END)"