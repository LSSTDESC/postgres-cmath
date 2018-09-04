MODULE_big = cmath
SOURCES := $(wildcard src/*.c)
OBJS := $(SOURCES:.c=.o)

EXTENSION = cmath
DATA_built = sql/$(EXTENSION)--1.2.sql sql/$(EXTENSION)--1.0--1.1.sql sql/$(EXTENSION)--1.1--1.2.sql

TESTS        = $(wildcard test/sql/*.sql)
REGRESS      = $(patsubst test/sql/%.sql,%,$(TESTS))
REGRESS_OPTS = --inputdir=test --user postgres

COPT = -std=gnu99 -fvisibility=hidden -DPGDLLEXPORT='__attribute__((visibility ("default")))'
SHLIB_LINK = -lm -Wall

PG_CONFIG = pg_config
PGXS := $(shell $(PG_CONFIG) --pgxs)
include $(PGXS)

$(DATA_built): sql/$(EXTENSION).sql.in sql/$(EXTENSION)-additionals.sql.in
	cat $^ > $@
