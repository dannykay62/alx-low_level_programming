#ifndef MAIN_H
#define MAIN_H

/**
 * FILE_ main.h
 * AUTH: Daniel Adejoro
 * Desc: Header file for project 0x15. C - File I/O
 *
 * filename: pointer to name of file
 * letters: number of letters
 * read_textfile - reads a textfile
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
