savedcmd_print_processor_id.mod := printf '%s\n'   print_processor_id.o | awk '!x[$$0]++ { print("./"$$0) }' > print_processor_id.mod
