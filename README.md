cmath
========

*cmath* is a collection of math functions defined in the ISO C programming
language. All functions in <math.h>, except for long double versions (sinl(x), expl(x), etc.),
are included with the prefix `c_`. For example, `log10(x)` can be called by:

    SELECT c_log10(100);

`c_log10(x)`, unlike the PostgreSQL native function `log(x)`,
does not raise error when `x < 0`. Instead, `c_log10(x)` returns `NaN`
or `-Infinity` in such cases.

Another example:

    SELECT c_exp(1e100);

`c_exp(x)`, unlike the PostgreSQL native function `exp(x)`,
does not raise error when the return value is overflowing.
Instead, `c_exp(x)` returns `+Infinity` in such cases.

Single precision versions of functions are also available:

    SELECT c_sinf(0.1), c_cosf(0.1);

Rather newly specified functions are available:

    SELECT c_erf(1), c_tgamma(5), c_nextafter(0, 'infinity');

If a function has output parameters, a tuple is returned:

    SELECT * FROM c_remquo(13, 5);
    /* ret_value | quo
      -----------+-----
              -2 |   3
    */


Install
-----------

PostgreSQL must be installed first.

Then

    $ make && make install

will install libraries into postgres's library directory.
To use it, you have to tell the postgres server to load it:

    $ psql -U {super user}
    sql> CREATE EXTENSION cmath;
    sql> \q


Source code maintenance
---------------------------

The source files are generated automatically by `generate_pg_cmath.py`.
Do not modify `src/pg_cmath.c` and `sql/cmath.sql.in` directly.
