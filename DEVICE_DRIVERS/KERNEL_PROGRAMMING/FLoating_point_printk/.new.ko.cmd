savedcmd_new.ko := ld -r -m elf_x86_64 -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T /home/amd/Rahul/linux/scripts/module.lds -o new.ko new.o new.mod.o .module-common.o
