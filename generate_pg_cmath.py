#!/usr/bin/env python
# encoding: utf-8

# postgres-cmath
# Copyright (C) 2018  Sogo Mineo
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

"""
This script generates:
  * src/pg_cmath.c
  * sql/cmath.sql.in
"""

# Copied from C11 Annex B.11
src = """
int fpclassify(real-floating x);
int isfinite(real-floating x);
int isinf(real-floating x);
int isnan(real-floating x);
int isnormal(real-floating x);
int signbit(real-floating x);
double acos(double x);
float acosf(float x);
long double acosl(long double x);
double asin(double x);
float asinf(float x);
long double asinl(long double x);
double atan(double x);
float atanf(float x);
long double atanl(long double x);
double atan2(double y, double x);
float atan2f(float y, float x);
long double atan2l(long double y, long double x);
double cos(double x);
float cosf(float x);
long double cosl(long double x);
double sin(double x);
float sinf(float x);
long double sinl(long double x);
double tan(double x);
float tanf(float x);
long double tanl(long double x);
double acosh(double x);
float acoshf(float x);
long double acoshl(long double x);
double asinh(double x);
float asinhf(float x);
long double asinhl(long double x);
double atanh(double x);
float atanhf(float x);
long double atanhl(long double x);
double cosh(double x);
float coshf(float x);
long double coshl(long double x);
double sinh(double x);
float sinhf(float x);
long double sinhl(long double x);
double tanh(double x);
float tanhf(float x);
long double tanhl(long double x);
double exp(double x);
float expf(float x);
long double expl(long double x);
double exp2(double x);
float exp2f(float x);
long double exp2l(long double x);
double expm1(double x);
float expm1f(float x);
long double expm1l(long double x);
double frexp(double value, int *exp);
float frexpf(float value, int *exp);
long double frexpl(long double value, int *exp);
int ilogb(double x);
int ilogbf(float x);
int ilogbl(long double x);
double ldexp(double x, int exp);
float ldexpf(float x, int exp);
long double ldexpl(long double x, int exp);
double log(double x);
float logf(float x);
long double logl(long double x);
double log10(double x);
float log10f(float x);
long double log10l(long double x);
double log1p(double x);
float log1pf(float x);
long double log1pl(long double x);
double log2(double x);
float log2f(float x);
long double log2l(long double x);
double logb(double x);
float logbf(float x);
long double logbl(long double x);
double modf(double value, double *iptr);
float modff(float value, float *iptr);
long double modfl(long double value, long double *iptr);
double scalbn(double x, int n);
float scalbnf(float x, int n);
long double scalbnl(long double x, int n);
double scalbln(double x, long int n);
float scalblnf(float x, long int n);
long double scalblnl(long double x, long int n);
double cbrt(double x);
float cbrtf(float x);
long double cbrtl(long double x);
double fabs(double x);
float fabsf(float x);
long double fabsl(long double x);
double hypot(double x, double y);
float hypotf(float x, float y);
long double hypotl(long double x, long double y);
double pow(double x, double y);
float powf(float x, float y);
long double powl(long double x, long double y);
double sqrt(double x);
float sqrtf(float x);
long double sqrtl(long double x);
double erf(double x);
float erff(float x);
long double erfl(long double x);
double erfc(double x);
float erfcf(float x);
long double erfcl(long double x);
double lgamma(double x);
float lgammaf(float x);
long double lgammal(long double x);
double tgamma(double x);
float tgammaf(float x);
long double tgammal(long double x);
double ceil(double x);
float ceilf(float x);
long double ceill(long double x);
double floor(double x);
float floorf(float x);
long double floorl(long double x);
double nearbyint(double x);
float nearbyintf(float x);
long double nearbyintl(long double x);
double rint(double x);
float rintf(float x);
long double rintl(long double x);
long int lrint(double x);
long int lrintf(float x);
long int lrintl(long double x);
long long int llrint(double x);
long long int llrintf(float x);
long long int llrintl(long double x);
double round(double x);
float roundf(float x);
long double roundl(long double x);
long int lround(double x);
long int lroundf(float x);
long int lroundl(long double x);
long long int llround(double x);
long long int llroundf(float x);
long long int llroundl(long double x);
double trunc(double x);
float truncf(float x);
long double truncl(long double x);
double fmod(double x, double y);
float fmodf(float x, float y);
long double fmodl(long double x, long double y);
double remainder(double x, double y);
float remainderf(float x, float y);
long double remainderl(long double x, long double y);
double remquo(double x, double y, int *quo);
float remquof(float x, float y, int *quo);
long double remquol(long double x, long double y,
int *quo);
double copysign(double x, double y);
float copysignf(float x, float y);
long double copysignl(long double x, long double y);
double nan(const char *tagp);
float nanf(const char *tagp);
long double nanl(const char *tagp);
double nextafter(double x, double y);
float nextafterf(float x, float y);
long double nextafterl(long double x, long double y);
double nexttoward(double x, long double y);
float nexttowardf(float x, long double y);
long double nexttowardl(long double x, long double y);
double fdim(double x, double y);
float fdimf(float x, float y);
long double fdiml(long double x, long double y);
double fmax(double x, double y);
float fmaxf(float x, float y);
long double fmaxl(long double x, long double y);
double fmin(double x, double y);
float fminf(float x, float y);
long double fminl(long double x, long double y);
double fma(double x, double y, double z);
float fmaf(float x, float y, float z);
long double fmal(long double x, long double y,
long double z);
int isgreater(real-floating x, real-floating y);
int isgreaterequal(real-floating x, real-floating y);
int isless(real-floating x, real-floating y);
int islessequal(real-floating x, real-floating y);
int islessgreater(real-floating x, real-floating y);
int isunordered(real-floating x, real-floating y);
"""

import collections, ctypes, re

def main():
    functionDefs = []
    for dfn in re.split(r";\s*", re.sub("real-floating", "double", src)):
        if dfn.strip():
            functionDefs.append(parseFunctionDefinition(dfn))

    functionDefs = removeLongDoubleFunctions(functionDefs)

    cWrapper = open("src/pg_cmath.c", "w")
    cWrapper.write(
    """
#include "postgres.h"
#include "fmgr.h"
#include "funcapi.h"
#include "access/tuptoaster.h"
#include <math.h>
    """[1:].rstrip() + "\n\n\n")

    sqlWrapper = open("sql/cmath.sql.in", "w")

    for f in functionDefs:
        genWrapper_c(f, cWrapper)
        genWrapper_sql(f, sqlWrapper)

    cWrapper.close()
    sqlWrapper.close()

def parseFunctionDefinition(dfn):
    """
    Incomplete but easy parser of a function definition
    """

    dfn = re.sub(r"\*", " * ", dfn)
    dfn = re.sub(r"\s+", " ", dfn)

    type = r"(?:char|int|long int|long long int|float|double|long double)"
    identifier = r"(?:[_A-Za-z][_0-9A-Za-z]*)"

    reFunc = re.compile(r"^ *({type}) +({identifier}) *\( *([^)]*?) *\) *$".format(**locals()))
    reParam  = re.compile(r"^ *((?:const )?{type}(?: *\*)?) +({identifier}) *$".format(**locals()))

    returnType, name, params = reFunc.match(dfn).groups()
    params = [ FunctionParam(*reParam.match(par).groups()) for par in re.split(r", *", params) ]

    return FunctionDef(returnType, name, params)


def removeLongDoubleFunctions(functionDefs):
    """
    Remove "long double" versions of functions,
    for long double is not supported by PostgreSQL
    """
    names = set(f.name for f in functionDefs)

    newFunctionDefs = []
    for f in functionDefs:
        if (f.name.endswith("l")
        and f.name[:-1] in names
        and (any(par.type == "long double" for par in f.params) or f.type == "long double")
        ):
            continue

        newFunctionDefs.append(f)

    return newFunctionDefs


def genWrapper_c(func, fout):
    # Declare that this function has the V1 interface
    fout.write("PG_FUNCTION_INFO_V1(cmath_{func.name});\n".format(**locals()))
    # Declare the function prototype to ward off warnings coming from -Wmissing-prototypes
    fout.write("PGDLLEXPORT Datum cmath_{func.name}(PG_FUNCTION_ARGS);\n".format(**locals()))

    # Start the function definition
    fout.write("PGDLLEXPORT Datum cmath_{func.name}(PG_FUNCTION_ARGS)\n".format(**locals()))
    fout.write("{\n")

    # Variable declarations
    params = []
    returns = []

    i = 0
    for par in func.params:
        if isOutputParam(par.type):
            deref = par.type[:-1].strip()
            fout.write("    {deref} {par.name} = 0;".format(**locals()))
            params.append("&{par.name}".format(**locals()))
            returns.append("{getdatum}({par.name})".format(getdatum = GetDatum[deref],  **locals()))
        else:
            fout.write("    {par.type} {par.name} = {getarg}({i});\n".format(getarg=PG_GETARG[par.type], **locals()))
            params.append(par.name)
            i += 1

    fout.write("\n")

    # Call the wrappee
    fout.write("    {func.type} ret_value = {func.name}({parlist});\n".format(parlist=', '.join(params), **locals()))
    fout.write("\n")

    if returns:
        returns.insert(0, "{getdatum}(ret_value)".format(getdatum = GetDatum[func.type]))

        fout.write("""
    TupleDesc unblessedDesc;
    TypeFuncClass typefunc = get_call_result_type(fcinfo, NULL, &unblessedDesc);
    if(typefunc == TYPEFUNC_COMPOSITE){{
        TupleDesc tupleDesc = BlessTupleDesc(unblessedDesc);

        Datum data[{nRet}] = {{ {data} }};
        bool  isnull[{nRet}] = {{}};
        HeapTuple tuple = heap_form_tuple(tupleDesc, data, isnull);

        return HeapTupleGetDatum(tuple);
    }}
    else{{
        ereport(ERROR, (
            errcode(ERRCODE_INTERNAL_ERROR),
            errmsg("inconsistent declaration for c_{func.name}")
            ));
    }}
        """.format(nRet=len(returns), data=', '.join(returns), **locals())[1:].rstrip() + "\n")

    else:
        fout.write("    {ret}(ret_value);\n".format(ret=PG_RETURN[func.type]))

    fout.write("}\n\n\n")


def genWrapper_sql(func, fout):
    in_params = []
    out_params = []

    for par in func.params:
        if isOutputParam(par.type):
            deref = par.type[:-1].strip()
            out_params.append('OUT "{par.name}" {sqltype}'.format(sqltype = sqlType[deref], **locals()))
        else:
            in_params.append('IN  "{par.name}" {sqltype}'.format(sqltype = sqlType[par.type], **locals()))

    out_params.insert(0, 'OUT "ret_value" {sqltype}'.format(sqltype = sqlType[func.type]))

    fout.write("""
CREATE OR REPLACE FUNCTION
  c_{func.name}
  ( {parlist}
  )
  AS 'MODULE_PATHNAME', 'cmath_{func.name}'
  LANGUAGE C STRICT IMMUTABLE PARALLEL SAFE;
    """.format(parlist = "\n  , ".join(in_params + out_params), **locals())[1:].rstrip()
    )

    fout.write("\n\n\n")


def isOutputParam(type):
    """
    @param type  "int", "const int *" etc.
    """
    return type.endswith("*") and not type.startswith("const")


def getTypeSize(c_type):
    """
    Guess the size, in bits, of the C type c_type
    """
    return getByteSize() * len(memoryview(c_type(0)).tobytes())


def getByteSize():
    """
    Guess the size of a byte in bits
    """
    for size in range(1, 17):
        tester =  1 << size
        if ctypes.c_ubyte(tester).value != tester:
            return size

    raise RuntimeError("Cannot guess the size of type: " + str(c_utype))


typeSize = {
    "short"    : getTypeSize(ctypes.c_short),
    "int"      : getTypeSize(ctypes.c_int),
    "long"     : getTypeSize(ctypes.c_long),
    "long long": getTypeSize(ctypes.c_longlong),
    "pointer"  : getTypeSize(ctypes.c_void_p),
}

PG_GETARG = {
    "const char *"  : "PG_GETARG_CSTRING",
    "int"           : "PG_GETARG_INT{0}".format(typeSize["int"]),
    "long int"      : "PG_GETARG_INT{0}".format(typeSize["long"]),
    "long long int" : "PG_GETARG_INT{0}".format(typeSize["long long"]),
    "float"         : "PG_GETARG_FLOAT4",
    "double"        : "PG_GETARG_FLOAT8",
    "long double"   : "(long double) PG_GETARG_FLOAT8",
}

PG_RETURN = {
    "int"           : "PG_RETURN_INT{0}".format(typeSize["int"]),
    "long int"      : "PG_RETURN_INT{0}".format(typeSize["long"]),
    "long long int" : "PG_RETURN_INT{0}".format(typeSize["long long"]),
    "float"         : "PG_RETURN_FLOAT4",
    "double"        : "PG_RETURN_FLOAT8",
}

GetDatum = {
    "int"           : "Int{0}GetDatum".format(typeSize["int"]),
    "long int"      : "Int{0}GetDatum".format(typeSize["long"]),
    "long long int" : "Int{0}GetDatum".format(typeSize["long long"]),
    "float"         : "Float4GetDatum",
    "double"        : "Float8GetDatum",
}

sqlType = {
    "const char *"  : "CString",
    "int"           : "Int{0}".format(typeSize["int"] // 8),
    "long int"      : "Int{0}".format(typeSize["long"] // 8),
    "long long int" : "Int{0}".format(typeSize["long long"] // 8),
    "float"         : "Float4",
    "double"        : "Float8",
    "long double"   : "Float8",
}

FunctionDef = collections.namedtuple("FunctionDef", ["type", "name", "params"])
FunctionParam = collections.namedtuple("FunctionParam", ["type", "name"])

main()
