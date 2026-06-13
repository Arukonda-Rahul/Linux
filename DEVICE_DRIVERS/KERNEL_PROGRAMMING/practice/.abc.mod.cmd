savedcmd_abc.mod := printf '%s\n'   abc.o | awk '!x[$$0]++ { print("./"$$0) }' > abc.mod
