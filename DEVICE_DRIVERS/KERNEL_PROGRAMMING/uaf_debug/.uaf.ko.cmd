savedcmd_uaf.ko := ld -r -m elf_x86_64 -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T /home/amd/Rahul/linux/scripts/module.lds -o uaf.ko uaf.o uaf.mod.o .module-common.o
