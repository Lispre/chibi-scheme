_FN0(_I(SEXP_FIXNUM), "random-integer", 0, sexp_rand),
_FN1(_I(SEXP_FIXNUM), _I(SEXP_FIXNUM), "random-seed", 0, sexp_srand),
_FN0(_I(SEXP_STRING), "current-directory", 0, sexp_getwd),
_FN0(_I(SEXP_STRING), "current-user", 0, sexp_getuser),
_FN0(_I(SEXP_STRING), "system-name", 0, sexp_sysname),
_FN1(_I(SEXP_FIXNUM), _I(SEXP_IPORT), "port-fileno", 0, sexp_fileno),
_FN2(_I(SEXP_IPORT), _I(SEXP_FIXNUM), _I(SEXP_STRING), "fileno->port", 0, sexp_fdopen),
_FN0(_I(SEXP_FIXNUM), "fork", 0, sexp_fork),
_FN2(SEXP_VOID, _I(SEXP_STRING), _I(SEXP_PAIR), "exec", 0, sexp_exec),
_FN1(SEXP_VOID, _I(SEXP_STRING), "exits", 0, sexp_exits),
_FN2(_I(SEXP_FIXNUM), _I(SEXP_FIXNUM), _I(SEXP_FIXNUM), "dup", 0, sexp_dup),
_FN0(_I(SEXP_PAIR), "pipe", 0, sexp_pipe),
_FN1(_I(SEXP_FIXNUM), _I(SEXP_FIXNUM), "sleep", 0, sexp_sleep),
_FN1(_I(SEXP_STRING), _I(SEXP_STRING), "getenv", 0, sexp_getenv),
_FN1(_I(SEXP_FIXNUM), _I(SEXP_STRING), "change-directory", 0, sexp_chdir),
_FN0(_I(SEXP_FIXNUM), "wait", 0, sexp_wait),
_FN2(_I(SEXP_FIXNUM), _I(SEXP_FIXNUM), _I(SEXP_STRING), "post-note", 0, sexp_postnote),
_FN4(_I(SEXP_FIXNUM), _I(SEXP_PAIR), _I(SEXP_STRING), _I(SEXP_STRING), "%postmountsrv", 0, sexp_postmountsrv),
_FN1(_I(SEXP_FIXNUM), _I(SEXP_STRING), "file-exists?", 0, sexp_file_exists_p),
