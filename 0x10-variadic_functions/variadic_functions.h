#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void op_c(va_list var);
void op_i(va_list var);
void op_f(va_list var);
void op_s(va_list var);
#endif
