savedcmd_param_wo_helper.mod := printf '%s\n'   param_wo_helper.o | awk '!x[$$0]++ { print("./"$$0) }' > param_wo_helper.mod
