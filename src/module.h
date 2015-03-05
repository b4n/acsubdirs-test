#ifndef H_MODULE_HELLO
#define H_MODULE_HELLO

void module_hello (void);

/* this might as well not be in the header, but it doesn't change much */
#ifdef TEST
int module_hello_test (void);
#endif

#endif /* H_MODULE_HELLO */
