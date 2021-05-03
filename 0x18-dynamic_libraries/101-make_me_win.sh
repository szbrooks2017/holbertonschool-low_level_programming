#!/bin/bash
wget -O ../wutlul.so dynamic lib https://github.com/szbrooks2017/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/wutlul.so
export LD_PRELOAD=../wutlul.so
