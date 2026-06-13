savedcmd_kthread_create.mod := printf '%s\n'   kthread_create.o | awk '!x[$$0]++ { print("./"$$0) }' > kthread_create.mod
