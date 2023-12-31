#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int _putchar(char c);
int append_text_to_file(const char *filename, char *text_content);
void error_from_to(char *filename, int type);
void error_close(int filedescr);
#endif
