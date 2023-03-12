#!/bin/bash
gcc -c *.c
ar -rc lsball.a *o
ranlib liball.a
