// /usr/bin/clang

#include <stdio.h>
#include <stdbool.h>

#define TERM_KEYS {"l", "a"}


int main(int arguments_end, char* arguments[]) {
	_Bool end_line = true;
	int arguments_begin = 2;

	// if  count more 1  and  2 argument it's a key  then
	if(arguments_end > 1 && arguments[1][0] == '-' ) {
		// if  this key it's a -n  then
		if (arguments[1][1] == 'n') {
			end_line = false;
		} else {
			arguments_begin = 1;
		}
	}
	
	for (int i = arguments_begin; i < arguments_end; i++) {
		printf("%s ", arguments[i]);
	}

	if (end_line) {
		printf("\n");
	}
	
	return 0;
}

