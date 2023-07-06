#ifndef MAIN_H
#define MAIN_H

/* _putchar */
int _putchar(char c);

/* Question 0 */
unsigned int binary_to_uint(const char *b);

/* Question 1 */
void print_binary(unsigned long int n);

/* Question 2 */
int get_bit(unsigned long int n, unsigned int index);

/* Question 3 */
int set_bit(unsigned long int *n, unsigned int index);

/* Question 4 */
int clear_bit(unsigned long int *n, unsigned int index);

/* Question 5 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* Question 6 */
int get_endianness(void);

#endif /* MAIN_H */
