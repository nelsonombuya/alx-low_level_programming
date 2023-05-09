#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/* _putchar */
int _putchar(char c);

/* Question 0 */
ssize_t read_textfile(const char *filename, size_t letters);

/* Question 1 */
int create_file(const char *filename, char *text_content);

/* Question 2 */
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
