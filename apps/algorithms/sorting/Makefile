CC		= clang
CFLAGS 	= -Werror -Wall -Wextra -Wpedantic -g -DDEBUG -std=c11

srcs	= $(wildcard *.c)
objs	= $(notdir $(srcs:.c=.o))
deps	= $(notdir $(objs:.o=.d))
targets	= $(notdir $(basename $(srcs)))

.PHONY: all
all: $(targets)

.PHONY: clean
clean:
	$(RM) $(objs) $(deps) $(targets)
