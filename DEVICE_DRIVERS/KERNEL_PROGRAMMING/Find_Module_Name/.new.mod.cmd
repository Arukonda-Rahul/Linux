savedcmd_new.mod := printf '%s\n'   new.o | awk '!x[$$0]++ { print("./"$$0) }' > new.mod
