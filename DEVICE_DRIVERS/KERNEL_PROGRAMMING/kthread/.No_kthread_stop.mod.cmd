savedcmd_No_kthread_stop.mod := printf '%s\n'   No_kthread_stop.o | awk '!x[$$0]++ { print("./"$$0) }' > No_kthread_stop.mod
