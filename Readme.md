## Day2
1. Booting procedure
   - ROM BL
   - PBL
   - SBL (Uboot)
   - Kernel (Linux)
   - RFS (Buildroot)
2. Commands 
   1. cat file.c
   2. gcc -c -o main.o main.c
      -c - complie the .c and give me output file
      -o - object file
      main.o - output file
      main.c - input file
   3. ls -la - It will show the object file
   4. file main.o - 
        main.o: ELF 64-bit LSB relocatable, x86-64, version 1 (SYSV), not stripped
   5. LSB - Little Endian
   6. MSB - Big Endian 
   7. gcc -c -o add.o add.c
   8. ld - linking functionality
   9. gcc -o arithprog main.o add.o
      link the main.o and add.o to arithprog. arithprog is a binary file.
   10. file arithprog 
       arithprog: ELF 64-bit LSB pie executable, x86-64, version 1 (SYSV), dynamically linked, interpreter /lib64/ld-linux-x86-64.so.2, BuildID[sha1]=1c2e38e9238019b72bbf78f45b1934d81fab8f70, for GNU/Linux 3.2.0, not stripped
   11. ./arithprog - execute the command result will in the console.
3. Git commands
