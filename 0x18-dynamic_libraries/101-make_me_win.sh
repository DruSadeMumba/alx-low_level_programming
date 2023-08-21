#!/bin/bash
wget -P /tmp https://github.com/DruSadeMumba/alx-low_level_programming/raw/main/0x18-dynamic_libraries/gigamill.so
export LD_PRELOAD=/tmp/gigamill.so
