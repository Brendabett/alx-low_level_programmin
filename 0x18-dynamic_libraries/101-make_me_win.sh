#!/bin/bash
wget -P /tmp/ https://raw.github.com/Brendabett/alx-low_level_programming/master/0x18-dynamic_libraries/libgigamill.so
export LD_PRELOAD="$PWD/tmp/libgigamill.so"
