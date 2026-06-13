savedcmd_hello_compat.mod := printf '%s\n'   hello_compat.o | awk '!x[$$0]++ { print("./"$$0) }' > hello_compat.mod
