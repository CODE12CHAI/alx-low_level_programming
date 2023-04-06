#ifndef _MAIN_H
#define _MAIN_H

#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create file(const char *filename, char *text_content);
int apprend_text_to_file(const char *filename, char *text_content);

#endif