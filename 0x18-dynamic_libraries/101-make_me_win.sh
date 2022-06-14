#!/bin/bash
wget -P .. https://raw.githubusercontent.com/thala254/alx-low_level_programming/master/0x18-dynamic_libraries/libgigamill.so
export LD_PRELOAD="$PWD/../libgigamill.so"
