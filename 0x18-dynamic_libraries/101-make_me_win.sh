#!/bin/bash
gcc *.o -shared -o libgigamill.so
LD_PRELOAD=$PWD/libgigamill.so
