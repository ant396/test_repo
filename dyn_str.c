#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define CHAR sizeof(char)

char* my_append(char *, char *);

int main() {
	int oper_qty;
	char *my_str = NULL;
	scanf("%d", &oper_qty);

	char *new = "hello";
	char *old = " world";
	char *ok = my_append(new, old);

	printf("%s\n", ok);
	ok = NULL;
	return 0;
}

char* my_append(char *old_str, char *append_str)
{
	size_t old_str_len = strlen(old_str);
	size_t append_str_len = strlen(append_str);
	char *new_str = malloc((old_str_len + append_str_len + 1) * CHAR);
	strcat(new_str, old_str);
	strcat(new_str, append_str);

	return new_str;
}
