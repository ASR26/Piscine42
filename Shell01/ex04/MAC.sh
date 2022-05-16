ifconfig | awk -F "ether " '{print $2}' | tr -d '\n' | tr " " "\n"
