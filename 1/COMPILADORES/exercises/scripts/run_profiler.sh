#!/usr/bin/sh

# Uso: run_profiler <caminho arquivo>

gcc -pg $1
gprof -b -Q
