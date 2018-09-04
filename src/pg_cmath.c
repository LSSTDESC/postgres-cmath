#include "postgres.h"
#include "fmgr.h"
#include "funcapi.h"
#include "access/tuptoaster.h"
#include <math.h>


PG_FUNCTION_INFO_V1(cmath_fpclassify);
PGDLLEXPORT Datum cmath_fpclassify(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_fpclassify(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    int ret_value = fpclassify(x);

    PG_RETURN_INT32(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_isfinite);
PGDLLEXPORT Datum cmath_isfinite(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_isfinite(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    int ret_value = isfinite(x);

    PG_RETURN_INT32(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_isinf);
PGDLLEXPORT Datum cmath_isinf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_isinf(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    int ret_value = isinf(x);

    PG_RETURN_INT32(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_isnan);
PGDLLEXPORT Datum cmath_isnan(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_isnan(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    int ret_value = isnan(x);

    PG_RETURN_INT32(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_isnormal);
PGDLLEXPORT Datum cmath_isnormal(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_isnormal(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    int ret_value = isnormal(x);

    PG_RETURN_INT32(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_signbit);
PGDLLEXPORT Datum cmath_signbit(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_signbit(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    int ret_value = signbit(x);

    PG_RETURN_INT32(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_acos);
PGDLLEXPORT Datum cmath_acos(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_acos(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = acos(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_acosf);
PGDLLEXPORT Datum cmath_acosf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_acosf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = acosf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_asin);
PGDLLEXPORT Datum cmath_asin(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_asin(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = asin(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_asinf);
PGDLLEXPORT Datum cmath_asinf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_asinf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = asinf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_atan);
PGDLLEXPORT Datum cmath_atan(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_atan(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = atan(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_atanf);
PGDLLEXPORT Datum cmath_atanf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_atanf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = atanf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_atan2);
PGDLLEXPORT Datum cmath_atan2(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_atan2(PG_FUNCTION_ARGS)
{
    double y = PG_GETARG_FLOAT8(0);
    double x = PG_GETARG_FLOAT8(1);

    double ret_value = atan2(y, x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_atan2f);
PGDLLEXPORT Datum cmath_atan2f(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_atan2f(PG_FUNCTION_ARGS)
{
    float y = PG_GETARG_FLOAT4(0);
    float x = PG_GETARG_FLOAT4(1);

    float ret_value = atan2f(y, x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_cos);
PGDLLEXPORT Datum cmath_cos(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_cos(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = cos(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_cosf);
PGDLLEXPORT Datum cmath_cosf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_cosf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = cosf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_sin);
PGDLLEXPORT Datum cmath_sin(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_sin(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = sin(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_sinf);
PGDLLEXPORT Datum cmath_sinf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_sinf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = sinf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_tan);
PGDLLEXPORT Datum cmath_tan(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_tan(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = tan(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_tanf);
PGDLLEXPORT Datum cmath_tanf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_tanf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = tanf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_acosh);
PGDLLEXPORT Datum cmath_acosh(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_acosh(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = acosh(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_acoshf);
PGDLLEXPORT Datum cmath_acoshf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_acoshf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = acoshf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_asinh);
PGDLLEXPORT Datum cmath_asinh(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_asinh(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = asinh(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_asinhf);
PGDLLEXPORT Datum cmath_asinhf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_asinhf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = asinhf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_atanh);
PGDLLEXPORT Datum cmath_atanh(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_atanh(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = atanh(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_atanhf);
PGDLLEXPORT Datum cmath_atanhf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_atanhf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = atanhf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_cosh);
PGDLLEXPORT Datum cmath_cosh(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_cosh(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = cosh(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_coshf);
PGDLLEXPORT Datum cmath_coshf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_coshf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = coshf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_sinh);
PGDLLEXPORT Datum cmath_sinh(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_sinh(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = sinh(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_sinhf);
PGDLLEXPORT Datum cmath_sinhf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_sinhf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = sinhf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_tanh);
PGDLLEXPORT Datum cmath_tanh(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_tanh(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = tanh(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_tanhf);
PGDLLEXPORT Datum cmath_tanhf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_tanhf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = tanhf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_exp);
PGDLLEXPORT Datum cmath_exp(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_exp(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = exp(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_expf);
PGDLLEXPORT Datum cmath_expf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_expf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = expf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_exp2);
PGDLLEXPORT Datum cmath_exp2(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_exp2(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = exp2(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_exp2f);
PGDLLEXPORT Datum cmath_exp2f(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_exp2f(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = exp2f(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_expm1);
PGDLLEXPORT Datum cmath_expm1(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_expm1(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = expm1(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_expm1f);
PGDLLEXPORT Datum cmath_expm1f(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_expm1f(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = expm1f(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_frexp);
PGDLLEXPORT Datum cmath_frexp(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_frexp(PG_FUNCTION_ARGS)
{
    double value = PG_GETARG_FLOAT8(0);
    int exp = 0;
    double ret_value = frexp(value, &exp);

    TupleDesc unblessedDesc;
    TypeFuncClass typefunc = get_call_result_type(fcinfo, NULL, &unblessedDesc);
    if(typefunc == TYPEFUNC_COMPOSITE){
        TupleDesc tupleDesc = BlessTupleDesc(unblessedDesc);

        Datum data[2] = { Float8GetDatum(ret_value), Int32GetDatum(exp) };
        bool  isnull[2] = {};
        HeapTuple tuple = heap_form_tuple(tupleDesc, data, isnull);

        return HeapTupleGetDatum(tuple);
    }
    else{
        ereport(ERROR, (
            errcode(ERRCODE_INTERNAL_ERROR),
            errmsg("inconsistent declaration for c_frexp")
            ));
    }
}


PG_FUNCTION_INFO_V1(cmath_frexpf);
PGDLLEXPORT Datum cmath_frexpf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_frexpf(PG_FUNCTION_ARGS)
{
    float value = PG_GETARG_FLOAT4(0);
    int exp = 0;
    float ret_value = frexpf(value, &exp);

    TupleDesc unblessedDesc;
    TypeFuncClass typefunc = get_call_result_type(fcinfo, NULL, &unblessedDesc);
    if(typefunc == TYPEFUNC_COMPOSITE){
        TupleDesc tupleDesc = BlessTupleDesc(unblessedDesc);

        Datum data[2] = { Float4GetDatum(ret_value), Int32GetDatum(exp) };
        bool  isnull[2] = {};
        HeapTuple tuple = heap_form_tuple(tupleDesc, data, isnull);

        return HeapTupleGetDatum(tuple);
    }
    else{
        ereport(ERROR, (
            errcode(ERRCODE_INTERNAL_ERROR),
            errmsg("inconsistent declaration for c_frexpf")
            ));
    }
}


PG_FUNCTION_INFO_V1(cmath_ilogb);
PGDLLEXPORT Datum cmath_ilogb(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_ilogb(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    int ret_value = ilogb(x);

    PG_RETURN_INT32(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_ilogbf);
PGDLLEXPORT Datum cmath_ilogbf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_ilogbf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    int ret_value = ilogbf(x);

    PG_RETURN_INT32(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_ldexp);
PGDLLEXPORT Datum cmath_ldexp(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_ldexp(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);
    int exp = PG_GETARG_INT32(1);

    double ret_value = ldexp(x, exp);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_ldexpf);
PGDLLEXPORT Datum cmath_ldexpf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_ldexpf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);
    int exp = PG_GETARG_INT32(1);

    float ret_value = ldexpf(x, exp);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_log);
PGDLLEXPORT Datum cmath_log(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_log(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = log(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_logf);
PGDLLEXPORT Datum cmath_logf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_logf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = logf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_log10);
PGDLLEXPORT Datum cmath_log10(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_log10(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = log10(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_log10f);
PGDLLEXPORT Datum cmath_log10f(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_log10f(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = log10f(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_log1p);
PGDLLEXPORT Datum cmath_log1p(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_log1p(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = log1p(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_log1pf);
PGDLLEXPORT Datum cmath_log1pf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_log1pf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = log1pf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_log2);
PGDLLEXPORT Datum cmath_log2(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_log2(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = log2(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_log2f);
PGDLLEXPORT Datum cmath_log2f(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_log2f(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = log2f(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_logb);
PGDLLEXPORT Datum cmath_logb(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_logb(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = logb(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_logbf);
PGDLLEXPORT Datum cmath_logbf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_logbf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = logbf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_modf);
PGDLLEXPORT Datum cmath_modf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_modf(PG_FUNCTION_ARGS)
{
    double value = PG_GETARG_FLOAT8(0);
    double iptr = 0;
    double ret_value = modf(value, &iptr);

    TupleDesc unblessedDesc;
    TypeFuncClass typefunc = get_call_result_type(fcinfo, NULL, &unblessedDesc);
    if(typefunc == TYPEFUNC_COMPOSITE){
        TupleDesc tupleDesc = BlessTupleDesc(unblessedDesc);

        Datum data[2] = { Float8GetDatum(ret_value), Float8GetDatum(iptr) };
        bool  isnull[2] = {};
        HeapTuple tuple = heap_form_tuple(tupleDesc, data, isnull);

        return HeapTupleGetDatum(tuple);
    }
    else{
        ereport(ERROR, (
            errcode(ERRCODE_INTERNAL_ERROR),
            errmsg("inconsistent declaration for c_modf")
            ));
    }
}


PG_FUNCTION_INFO_V1(cmath_modff);
PGDLLEXPORT Datum cmath_modff(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_modff(PG_FUNCTION_ARGS)
{
    float value = PG_GETARG_FLOAT4(0);
    float iptr = 0;
    float ret_value = modff(value, &iptr);

    TupleDesc unblessedDesc;
    TypeFuncClass typefunc = get_call_result_type(fcinfo, NULL, &unblessedDesc);
    if(typefunc == TYPEFUNC_COMPOSITE){
        TupleDesc tupleDesc = BlessTupleDesc(unblessedDesc);

        Datum data[2] = { Float4GetDatum(ret_value), Float4GetDatum(iptr) };
        bool  isnull[2] = {};
        HeapTuple tuple = heap_form_tuple(tupleDesc, data, isnull);

        return HeapTupleGetDatum(tuple);
    }
    else{
        ereport(ERROR, (
            errcode(ERRCODE_INTERNAL_ERROR),
            errmsg("inconsistent declaration for c_modff")
            ));
    }
}


PG_FUNCTION_INFO_V1(cmath_scalbn);
PGDLLEXPORT Datum cmath_scalbn(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_scalbn(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);
    int n = PG_GETARG_INT32(1);

    double ret_value = scalbn(x, n);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_scalbnf);
PGDLLEXPORT Datum cmath_scalbnf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_scalbnf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);
    int n = PG_GETARG_INT32(1);

    float ret_value = scalbnf(x, n);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_scalbln);
PGDLLEXPORT Datum cmath_scalbln(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_scalbln(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);
    long int n = PG_GETARG_INT64(1);

    double ret_value = scalbln(x, n);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_scalblnf);
PGDLLEXPORT Datum cmath_scalblnf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_scalblnf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);
    long int n = PG_GETARG_INT64(1);

    float ret_value = scalblnf(x, n);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_cbrt);
PGDLLEXPORT Datum cmath_cbrt(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_cbrt(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = cbrt(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_cbrtf);
PGDLLEXPORT Datum cmath_cbrtf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_cbrtf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = cbrtf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_fabs);
PGDLLEXPORT Datum cmath_fabs(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_fabs(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = fabs(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_fabsf);
PGDLLEXPORT Datum cmath_fabsf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_fabsf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = fabsf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_hypot);
PGDLLEXPORT Datum cmath_hypot(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_hypot(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);
    double y = PG_GETARG_FLOAT8(1);

    double ret_value = hypot(x, y);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_hypotf);
PGDLLEXPORT Datum cmath_hypotf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_hypotf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);
    float y = PG_GETARG_FLOAT4(1);

    float ret_value = hypotf(x, y);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_pow);
PGDLLEXPORT Datum cmath_pow(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_pow(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);
    double y = PG_GETARG_FLOAT8(1);

    double ret_value = pow(x, y);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_powf);
PGDLLEXPORT Datum cmath_powf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_powf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);
    float y = PG_GETARG_FLOAT4(1);

    float ret_value = powf(x, y);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_sqrt);
PGDLLEXPORT Datum cmath_sqrt(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_sqrt(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = sqrt(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_sqrtf);
PGDLLEXPORT Datum cmath_sqrtf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_sqrtf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = sqrtf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_erf);
PGDLLEXPORT Datum cmath_erf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_erf(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = erf(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_erff);
PGDLLEXPORT Datum cmath_erff(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_erff(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = erff(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_erfc);
PGDLLEXPORT Datum cmath_erfc(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_erfc(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = erfc(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_erfcf);
PGDLLEXPORT Datum cmath_erfcf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_erfcf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = erfcf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_lgamma);
PGDLLEXPORT Datum cmath_lgamma(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_lgamma(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = lgamma(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_lgammaf);
PGDLLEXPORT Datum cmath_lgammaf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_lgammaf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = lgammaf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_tgamma);
PGDLLEXPORT Datum cmath_tgamma(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_tgamma(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = tgamma(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_tgammaf);
PGDLLEXPORT Datum cmath_tgammaf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_tgammaf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = tgammaf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_ceil);
PGDLLEXPORT Datum cmath_ceil(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_ceil(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = ceil(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_ceilf);
PGDLLEXPORT Datum cmath_ceilf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_ceilf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = ceilf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_floor);
PGDLLEXPORT Datum cmath_floor(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_floor(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = floor(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_floorf);
PGDLLEXPORT Datum cmath_floorf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_floorf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = floorf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_nearbyint);
PGDLLEXPORT Datum cmath_nearbyint(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_nearbyint(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = nearbyint(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_nearbyintf);
PGDLLEXPORT Datum cmath_nearbyintf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_nearbyintf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = nearbyintf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_rint);
PGDLLEXPORT Datum cmath_rint(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_rint(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = rint(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_rintf);
PGDLLEXPORT Datum cmath_rintf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_rintf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = rintf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_lrint);
PGDLLEXPORT Datum cmath_lrint(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_lrint(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    long int ret_value = lrint(x);

    PG_RETURN_INT64(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_lrintf);
PGDLLEXPORT Datum cmath_lrintf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_lrintf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    long int ret_value = lrintf(x);

    PG_RETURN_INT64(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_llrint);
PGDLLEXPORT Datum cmath_llrint(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_llrint(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    long long int ret_value = llrint(x);

    PG_RETURN_INT64(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_llrintf);
PGDLLEXPORT Datum cmath_llrintf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_llrintf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    long long int ret_value = llrintf(x);

    PG_RETURN_INT64(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_round);
PGDLLEXPORT Datum cmath_round(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_round(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = round(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_roundf);
PGDLLEXPORT Datum cmath_roundf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_roundf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = roundf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_lround);
PGDLLEXPORT Datum cmath_lround(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_lround(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    long int ret_value = lround(x);

    PG_RETURN_INT64(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_lroundf);
PGDLLEXPORT Datum cmath_lroundf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_lroundf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    long int ret_value = lroundf(x);

    PG_RETURN_INT64(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_llround);
PGDLLEXPORT Datum cmath_llround(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_llround(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    long long int ret_value = llround(x);

    PG_RETURN_INT64(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_llroundf);
PGDLLEXPORT Datum cmath_llroundf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_llroundf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    long long int ret_value = llroundf(x);

    PG_RETURN_INT64(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_trunc);
PGDLLEXPORT Datum cmath_trunc(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_trunc(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);

    double ret_value = trunc(x);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_truncf);
PGDLLEXPORT Datum cmath_truncf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_truncf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);

    float ret_value = truncf(x);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_fmod);
PGDLLEXPORT Datum cmath_fmod(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_fmod(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);
    double y = PG_GETARG_FLOAT8(1);

    double ret_value = fmod(x, y);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_fmodf);
PGDLLEXPORT Datum cmath_fmodf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_fmodf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);
    float y = PG_GETARG_FLOAT4(1);

    float ret_value = fmodf(x, y);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_remainder);
PGDLLEXPORT Datum cmath_remainder(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_remainder(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);
    double y = PG_GETARG_FLOAT8(1);

    double ret_value = remainder(x, y);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_remainderf);
PGDLLEXPORT Datum cmath_remainderf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_remainderf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);
    float y = PG_GETARG_FLOAT4(1);

    float ret_value = remainderf(x, y);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_remquo);
PGDLLEXPORT Datum cmath_remquo(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_remquo(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);
    double y = PG_GETARG_FLOAT8(1);
    int quo = 0;
    double ret_value = remquo(x, y, &quo);

    TupleDesc unblessedDesc;
    TypeFuncClass typefunc = get_call_result_type(fcinfo, NULL, &unblessedDesc);
    if(typefunc == TYPEFUNC_COMPOSITE){
        TupleDesc tupleDesc = BlessTupleDesc(unblessedDesc);

        Datum data[2] = { Float8GetDatum(ret_value), Int32GetDatum(quo) };
        bool  isnull[2] = {};
        HeapTuple tuple = heap_form_tuple(tupleDesc, data, isnull);

        return HeapTupleGetDatum(tuple);
    }
    else{
        ereport(ERROR, (
            errcode(ERRCODE_INTERNAL_ERROR),
            errmsg("inconsistent declaration for c_remquo")
            ));
    }
}


PG_FUNCTION_INFO_V1(cmath_remquof);
PGDLLEXPORT Datum cmath_remquof(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_remquof(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);
    float y = PG_GETARG_FLOAT4(1);
    int quo = 0;
    float ret_value = remquof(x, y, &quo);

    TupleDesc unblessedDesc;
    TypeFuncClass typefunc = get_call_result_type(fcinfo, NULL, &unblessedDesc);
    if(typefunc == TYPEFUNC_COMPOSITE){
        TupleDesc tupleDesc = BlessTupleDesc(unblessedDesc);

        Datum data[2] = { Float4GetDatum(ret_value), Int32GetDatum(quo) };
        bool  isnull[2] = {};
        HeapTuple tuple = heap_form_tuple(tupleDesc, data, isnull);

        return HeapTupleGetDatum(tuple);
    }
    else{
        ereport(ERROR, (
            errcode(ERRCODE_INTERNAL_ERROR),
            errmsg("inconsistent declaration for c_remquof")
            ));
    }
}


PG_FUNCTION_INFO_V1(cmath_copysign);
PGDLLEXPORT Datum cmath_copysign(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_copysign(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);
    double y = PG_GETARG_FLOAT8(1);

    double ret_value = copysign(x, y);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_copysignf);
PGDLLEXPORT Datum cmath_copysignf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_copysignf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);
    float y = PG_GETARG_FLOAT4(1);

    float ret_value = copysignf(x, y);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_nan);
PGDLLEXPORT Datum cmath_nan(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_nan(PG_FUNCTION_ARGS)
{
    const char * tagp = PG_GETARG_CSTRING(0);

    double ret_value = nan(tagp);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_nanf);
PGDLLEXPORT Datum cmath_nanf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_nanf(PG_FUNCTION_ARGS)
{
    const char * tagp = PG_GETARG_CSTRING(0);

    float ret_value = nanf(tagp);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_nextafter);
PGDLLEXPORT Datum cmath_nextafter(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_nextafter(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);
    double y = PG_GETARG_FLOAT8(1);

    double ret_value = nextafter(x, y);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_nextafterf);
PGDLLEXPORT Datum cmath_nextafterf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_nextafterf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);
    float y = PG_GETARG_FLOAT4(1);

    float ret_value = nextafterf(x, y);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_nexttoward);
PGDLLEXPORT Datum cmath_nexttoward(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_nexttoward(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);
    long double y = (long double) PG_GETARG_FLOAT8(1);

    double ret_value = nexttoward(x, y);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_nexttowardf);
PGDLLEXPORT Datum cmath_nexttowardf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_nexttowardf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);
    long double y = (long double) PG_GETARG_FLOAT8(1);

    float ret_value = nexttowardf(x, y);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_fdim);
PGDLLEXPORT Datum cmath_fdim(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_fdim(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);
    double y = PG_GETARG_FLOAT8(1);

    double ret_value = fdim(x, y);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_fdimf);
PGDLLEXPORT Datum cmath_fdimf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_fdimf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);
    float y = PG_GETARG_FLOAT4(1);

    float ret_value = fdimf(x, y);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_fmax);
PGDLLEXPORT Datum cmath_fmax(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_fmax(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);
    double y = PG_GETARG_FLOAT8(1);

    double ret_value = fmax(x, y);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_fmaxf);
PGDLLEXPORT Datum cmath_fmaxf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_fmaxf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);
    float y = PG_GETARG_FLOAT4(1);

    float ret_value = fmaxf(x, y);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_fmin);
PGDLLEXPORT Datum cmath_fmin(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_fmin(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);
    double y = PG_GETARG_FLOAT8(1);

    double ret_value = fmin(x, y);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_fminf);
PGDLLEXPORT Datum cmath_fminf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_fminf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);
    float y = PG_GETARG_FLOAT4(1);

    float ret_value = fminf(x, y);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_fma);
PGDLLEXPORT Datum cmath_fma(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_fma(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);
    double y = PG_GETARG_FLOAT8(1);
    double z = PG_GETARG_FLOAT8(2);

    double ret_value = fma(x, y, z);

    PG_RETURN_FLOAT8(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_fmaf);
PGDLLEXPORT Datum cmath_fmaf(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_fmaf(PG_FUNCTION_ARGS)
{
    float x = PG_GETARG_FLOAT4(0);
    float y = PG_GETARG_FLOAT4(1);
    float z = PG_GETARG_FLOAT4(2);

    float ret_value = fmaf(x, y, z);

    PG_RETURN_FLOAT4(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_isgreater);
PGDLLEXPORT Datum cmath_isgreater(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_isgreater(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);
    double y = PG_GETARG_FLOAT8(1);

    int ret_value = isgreater(x, y);

    PG_RETURN_INT32(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_isgreaterequal);
PGDLLEXPORT Datum cmath_isgreaterequal(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_isgreaterequal(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);
    double y = PG_GETARG_FLOAT8(1);

    int ret_value = isgreaterequal(x, y);

    PG_RETURN_INT32(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_isless);
PGDLLEXPORT Datum cmath_isless(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_isless(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);
    double y = PG_GETARG_FLOAT8(1);

    int ret_value = isless(x, y);

    PG_RETURN_INT32(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_islessequal);
PGDLLEXPORT Datum cmath_islessequal(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_islessequal(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);
    double y = PG_GETARG_FLOAT8(1);

    int ret_value = islessequal(x, y);

    PG_RETURN_INT32(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_islessgreater);
PGDLLEXPORT Datum cmath_islessgreater(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_islessgreater(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);
    double y = PG_GETARG_FLOAT8(1);

    int ret_value = islessgreater(x, y);

    PG_RETURN_INT32(ret_value);
}


PG_FUNCTION_INFO_V1(cmath_isunordered);
PGDLLEXPORT Datum cmath_isunordered(PG_FUNCTION_ARGS);
PGDLLEXPORT Datum cmath_isunordered(PG_FUNCTION_ARGS)
{
    double x = PG_GETARG_FLOAT8(0);
    double y = PG_GETARG_FLOAT8(1);

    int ret_value = isunordered(x, y);

    PG_RETURN_INT32(ret_value);
}


