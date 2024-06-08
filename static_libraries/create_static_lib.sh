#!/bin/bash
gcc -c ./*glob*.c
ar ar rc liball.a /*glob*.o