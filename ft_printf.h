#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

/* Funciones FT_PRINTF */
int ft_printf(const char *format, ...);
void ft_checkarg(char c, va_list argva);

/* F. Utilidades */
void ft_putchar(char c);
void ft_putstr(char *str);

# endif
