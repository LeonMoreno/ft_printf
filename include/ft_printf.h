#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

/* Funciones FT_PRINTF */
int ft_printf(const char *format, ...);
void ft_checkarg(char c, va_list argva, int *len);

/* F. Utilidades */
void ft_putchar(char c, int *len);
void ft_putstr(char *s, int *len);
void ft_putnbr(int nb, int *len);
int ft_strlen(char *str);
void ft_puthexa_mayus(unsigned int nb, int *len);

# endif
