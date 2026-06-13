savedcmd_macro_.mod := printf '%s\n'   macro_.o | awk '!x[$$0]++ { print("./"$$0) }' > macro_.mod
