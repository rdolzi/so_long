NAME = so_long

SRCS = main1.c \

FLAGS = -Wextra -Werror -Wall

CC = gcc ${FLAGS}

RM = rm -f

OBJS = ${SRCS:.c=.o}

%.o: %.c
	$(CC) -Imlx -g -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	$(CC) $(OBJS) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

all: $(NAME)

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME} 
	
re: fclean all




