#include "postgres.h"
#include "fmgr.h"
#include "funcapi.h"
#include "access/tuptoaster.h"

#ifdef PG_MODULE_MAGIC
    PG_MODULE_MAGIC;
#endif

/* Additional functions that're not generated automatically
*/

/** c_float(double x) -> float
    This function, unlike CAST(x as Real),
    won't throw exception on underflow or overflow.
*/
PG_FUNCTION_INFO_V1(cmath_float);
PGDLLEXPORT Datum cmath_float(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_float(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    float ret_value = (float)x;

    PG_RETURN_FLOAT4(ret_value);
}

/** c_multiply(double x, double y) -> double
    This function, unlike x / y,
    won't throw exception on underflow or overflow.
*/
PG_FUNCTION_INFO_V1(cmath_multiply);
PGDLLEXPORT Datum cmath_multiply(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_multiply(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);
    double y = PG_GETARG_FLOAT8(1);

    double ret_value = x * y;

    PG_RETURN_FLOAT8(ret_value);
}


/** c_multiply(float x, float y) -> float
    This function, unlike x / y,
    won't throw exception on underflow or overflow.
*/
PG_FUNCTION_INFO_V1(cmath_multiplyf);
PGDLLEXPORT Datum cmath_multiplyf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_multiplyf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);
    float y = PG_GETARG_FLOAT4(1);

    float ret_value = x * y;

    PG_RETURN_FLOAT4(ret_value);
}


/** c_divide(double x, double y) -> double
    This function, unlike x / y,
    won't throw exception on underflow or overflow.
*/
PG_FUNCTION_INFO_V1(cmath_divide);
PGDLLEXPORT Datum cmath_divide(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_divide(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);
    double y = PG_GETARG_FLOAT8(1);

    double ret_value = x / y;

    PG_RETURN_FLOAT8(ret_value);
}


/** c_divide(float x, float y) -> float
    This function, unlike x / y,
    won't throw exception on underflow or overflow.
*/
PG_FUNCTION_INFO_V1(cmath_dividef);
PGDLLEXPORT Datum cmath_dividef(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_dividef(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);
    float y = PG_GETARG_FLOAT4(1);

    float ret_value = x / y;

    PG_RETURN_FLOAT4(ret_value);
}
