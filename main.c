#include <stdio.h>

#include "opt.h"

static int opt_test_callback(int short_name, char *value)
{
    printf("test callback called");
    return 0;
}

struct opt_option opt_all[] = {
    { 'h', "help", no_argument, 0, NULL, NULL, "display this help and exit", { 0 } },
    { 'f', "set-flag", no_argument, 0, NULL, NULL, "set a flag", { 0 } },
    { 'c', "callback", no_argument, 0, NULL, opt_test_callback, "test callback", { 0 } },
    { 'i', "int", required_argument, 0, "999", NULL, "int, defauls to 999", { OPT_FILTER_INT, 1, 4 } },
};

int main(char *argv[], int argc)
{
    if (opt_init(opt_all, NULL, "help prepend or NULL", "help append or NULL") ||
        opt_parse(argc, argv)) {
        return 1;
    }

    return 0;
}
