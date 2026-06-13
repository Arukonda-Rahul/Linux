savedcmd_kern_cont.mod := printf '%s\n'   kern_cont.o | awk '!x[$$0]++ { print("./"$$0) }' > kern_cont.mod
