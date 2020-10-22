#include "../inc/libmx.h"

char *ptr_delim_checking(char **ptr, char delim) {
	char *lineptr = NULL;
	int j;

	j = mx_get_char_index(*ptr, delim);
	if (j == -1) {
		lineptr = mx_strdup(*ptr);
		mx_strdel(ptr);
	}
	else {
		lineptr = mx_strndup(*ptr,  j);
		if (ptr[j + 1])
			*ptr = mx_str_size_dup_free(*ptr, j + 1, (mx_strlen(*ptr)));
	}
	return lineptr;
}
