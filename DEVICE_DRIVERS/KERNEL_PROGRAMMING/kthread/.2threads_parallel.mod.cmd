savedcmd_2threads_parallel.mod := printf '%s\n'   2threads_parallel.o | awk '!x[$$0]++ { print("./"$$0) }' > 2threads_parallel.mod
