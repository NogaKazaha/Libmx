#include "../inc/libmx.h"

char *buf_to_lineptr(char *lineptr, char **buf, int index) {
	char *temp = NULL;

	temp = mx_strndup(*buf, index);
	lineptr = mx_strjoin_free(lineptr, temp);
	mx_strdel(&temp);
   
	return lineptr;
}
