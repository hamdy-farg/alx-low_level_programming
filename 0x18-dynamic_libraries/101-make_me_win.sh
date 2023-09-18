#!/bin/bash
wget -P /tmp https://github.com/hamdy-farg/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELPAD=/tmp/libgiga.so
