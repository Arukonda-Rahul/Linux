savedcmd_no_kthread_should_stop.mod := printf '%s\n'   no_kthread_should_stop.o | awk '!x[$$0]++ { print("./"$$0) }' > no_kthread_should_stop.mod
