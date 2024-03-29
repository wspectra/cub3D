cmake_minimum_required(VERSION 3.17)
project(cub3D C)

set(CMAKE_C_STANDARD 99)

include_directories(.)
include_directories(mlx)
include_directories(libft)
include_directories(textures)

set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -L. -lmlx -framework OpenGL -framework AppKit")
add_executable(cub3D
        cub3d.h
        main.c
        read_file.c
        parsing/parsing.c
        make_structure.c
        parsing/check_resolution_validity.c
        parsing/check_colors_validity.c
        parsing/check_path_validity.c
        parsing/check_map_validity.c
        parsing/check_cell.c
        parsing/check_diag.c
        delete.c
        game/make_game.c
        game/make_image.c
        game/draw_textures.c
        game/make_sprite.c
        game/make_screenshot.c
        #        make_cub.c
        ./libft/ft_memset.c ./libft/ft_bzero.c ./libft/ft_memcpy.c ./libft/ft_memccpy.c ./libft/ft_memmove.c
        ./libft/ft_strlen.c ./libft/ft_strlcpy.c ./libft/ft_atoi.c ./libft/ft_isalpha.c ./libft/ft_isdigit.c
        ./libft/ft_isalnum.c ./libft/ft_isascii.c ./libft/ft_isprint.c ./libft/ft_toupper.c ./libft/ft_tolower.c
        ./libft/ft_memchr.c ./libft/ft_memcmp.c ./libft/ft_strlcat.c ./libft/ft_strrchr.c ./libft/ft_strnstr.c
        ./libft/ft_strchr.c ./libft/ft_strncmp.c ./libft/ft_calloc.c ./libft/ft_strdup.c ./libft/ft_substr.c
        ./libft/ft_strjoin.c ./libft/ft_strmapi.c ./libft/ft_putchar_fd.c ./libft/ft_putstr_fd.c ./libft/ft_split.c
        ./libft/ft_putendl_fd.c ./libft/ft_putnbr_fd.c ./libft/ft_strtrim.c ./libft/ft_itoa.c
        ./libft/ft_lstnew.c ./libft/ft_lstadd_front.c ./libft/ft_lstsize.c ./libft/ft_lstlast.c
        ./libft/ft_lstadd_back.c ./libft/ft_lstdelone.c ./libft/ft_lstclear.c ./libft/ft_lstiter.c
        ./libft/ft_lstmap.c ./libft/get_next_line.c ./game/moves.c ./utils.c
        )