CFLAGS=-O2 -Wall -Wextra -lX11 -lpci
PREFIX=/usr/local
CACHE=$(shell if [ "$$XDG_CACHE_HOME" ]; then echo "$$XDG_CACHE_HOME"; else echo "$$HOME"/.cache; fi)

all: fetch

clean:
	rm -f fetch $(CACHE)/fetch

fetch: fetch.c fetch.h config.h
	$(eval battery_path := $(shell ./config_scripts/battery_config.sh))
	$(CC) fetch.c -o fetch $(CFLAGS) -D $(battery_path)
	strip fetch

install: fetch
	mkdir -p $(PREFIX)/bin
	install ./fetch $(PREFIX)/bin/fetch
