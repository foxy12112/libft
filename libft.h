/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:58:18 by ldick             #+#    #+#             */
/*   Updated: 2024/04/28 19:13:28 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/**
 * @brief checks if character is alphabetical
 * 
 * @param[in] c - the character to check
 * @return 1 if the test is true
 * @return 0 if the test is false
*/
int					ft_isalpha(int c);

/**
 * @brief checks if character is a number
 * 
 * @param[in] c - the character to check
 * @return 1 if the test is true
 * @return 0 if the test is false
*/
int					ft_isdigit(int c);

/**
 * @brief checks if character is alphanumerical
 * 
 * @param[in] c - the character to check
 * @return 1 if the test is true
 * @return 0 if the test is false
*/
int					ft_isalnum(int c);

/**
 * @brief checks if character is a valid ascii character
 * 
 * @note ascii characters are between 0 and 127
 * 
 * @param[in] c - the character to check
 * @return 1 if the test is true
 * @return 0 if the test is false
*/
int					ft_isascii(int c);

/**
 * @brief checks if character is printable
 * 
 * @param[in] c - the character to check
 * @return 1 if the test is true
 * @return 0 if the test is false
*/
int					ft_isprint(int c);

/**
 * @brief turns a lowercase character into an uppercase character
 * @note only works if the character is lowercase
 * 
 * @param[in] c - the character to turn
 * @return lowercase->uppercase input character
 * @return nothing if its not a lowercase character
*/
int					ft_toupper(int c);

/**
 * @brief turns a uppercase character into an lowercase character
 * @note only works if the character is uppercase
 * 
 * @param[in] c - the character to turn
 * @return uppercase->lowercase input character
 * @return nothing if its not a uppercase character
*/
int					ft_tolower(int c);

/**
 * @brief this function take a character string and turns it into an integer
 * @brief it skips all whitespaces at the beginning of a string
 * @note only works if the character is lowercase
 * 
 * @param[in] str - the character string
 * @return str as an integer
*/
int					ft_atoi(const char *str);

/**
 * @brief compares the ascii value between two strings
 * @note only compares until a difference is found or until n
 * 
 * @param[in] s1 - string to compare
 * @param[in] s2 - string to compare to
 * @param[in] n - how much of the string to compare
 * @return the ascii difference between the two strings
*/
int					ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief compares the ascii value between two strings
 * @note only compares until a difference is found or until n
 * 
 * @param[in] s1 - memory area to compare
 * @param[in] s2 - memory area to compare to
 * @param[in] n - how much of to compare
 * @return the ascii difference between the two memory areas
*/
int					ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief counts the number in nodes in a list
 * 
 * @param[in] lst - the beginning of the list
 * @return the lenght of the list
*/
int					ft_lstsize(t_list *lst);

/**
 * @brief counts the lenght of a string but skips a letter
 * @note skips the letter you input as int c
 * 
 * @param[in] str - the string to count
 * @param[in] c - a character to skip over while counting
 * @return the lenght of the string
*/
size_t				ft_strlen_s(char *str, int c);

/**
 * @brief counts the lenght of a string
 * 
 * @param[in] s - the string to count
 * @return the lenght of the string
*/
size_t				ft_strlen(const char *s);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);

void				*ft_calloc(size_t count, size_t size);
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				ft_putnbr_fd(int n, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));

char				*ft_strchr(const char *s, int c);
char				*ft_strdup(const char *s1);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_itoa(int n);
char				**ft_split(char const *s, char c);

t_list				*ft_lstnew(void *content);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void(*del)(void *));

#endif