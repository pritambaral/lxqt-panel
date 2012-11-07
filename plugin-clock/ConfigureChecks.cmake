include(CheckCXXSourceCompiles)

unset(HAVE__NL_TIME_FIRST_WEEKDAY CACHE)

check_cxx_source_compiles("
    #include <langinfo.h>
    int main()
    {
        const char *r = nl_langinfo(_NL_TIME_FIRST_WEEKDAY);
        return 0;
    }
" HAVE__NL_TIME_FIRST_WEEKDAY)
