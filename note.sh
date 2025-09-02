sudo sh -c 'echo "core.%e.%p" > /proc/sys/kernel/core_pattern'
ulimit -c unlimited
