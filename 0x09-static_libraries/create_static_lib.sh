#!/bin/bash
gcc -c *.c
ar rs liball.a *.0 
nm liball.a
