#!/bin/bash
wget -O /tmp/wutlul.so https://github.com/szbrooks2017/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/wutlul.so
export LD_PRELOAD=/tmp/wutlul.so
