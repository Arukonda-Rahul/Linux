savedcmd_find_task_by_pid.mod := printf '%s\n'   find_task_by_pid.o | awk '!x[$$0]++ { print("./"$$0) }' > find_task_by_pid.mod
