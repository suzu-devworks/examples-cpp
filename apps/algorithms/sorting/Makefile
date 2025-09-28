CC		= clang
CFLAGS 	= -Werror -Wall -Wextra -Wpedantic -g -DDEBUG -std=c11

SRCS	= $(wildcard *.c)
OBJS	= $(notdir $(SRCS:.c=.o))
DEPS	= $(notdir $(OBJS:.o=.d))
TARGETS	= $(notdir $(basename $(SRCS)))

.PHONY: all
all: $(TARGETS)

.PHONY: clean
clean:
	$(RM) $(OBJS) $(DEPS) $(TARGETS)
