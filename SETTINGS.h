#define TAB 4

#define SEP_LINE 1

#if after IF more ONE_LINE:
# define {}  "using"
#else
# undef {} // "not using"
#elsif

// if-else, for-while-do while, function, class-struct:
#define {}  "using with NEW__LINE"

// swith:
#undef SWITH // "not using"

// number symbols in code:
#define SYMBOL__IN__LINE 80

