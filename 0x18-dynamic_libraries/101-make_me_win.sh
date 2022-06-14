#!/bin/bash
gcc 0x18.c -shared -c libgigamill.so
LD_PRELOAD=$PWD/libgigamill.so
