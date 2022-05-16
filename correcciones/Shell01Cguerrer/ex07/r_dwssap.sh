#!/bin/sh
cat /etc/passwd | awk '/^[^#]/' | awk 'NR % 2 == 0' | awk -F':' '{print $1}' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | awk '{if (NR > 1) printf ", %s", $0; else printf "%s", $0} END {printf "."}'
