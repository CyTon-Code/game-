// /usr/bin/g++

#include <cstdio>

#define TERM_KEYS {"l", "a"}


int main(int count_argumnets, char* arguments[]) {
	bool _enter = false;

	if (1 < count_argumnets) {
		if (not (arguments[1][0] == '-' and arguments[1][1] == 'n')) {
			_enter = true;

			// is a key = 2 but not 1
		}
	}
	

	for (int i = 1; i < count_argumnets; i++) {
		printf("%s", arguments[i]);
		printf(" ");
	}

	if (_enter) {
		printf("\n");
	}
	
	return 0;
}


