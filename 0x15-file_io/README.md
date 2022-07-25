# File I/O
## C - Syscall

Project done during the **Full Stack Software Engineering studies at ALX**. It aims learn about how to handle files (open, close, read and write) File Descriptors, System calls and file permissions in C Language.

## Technologies
* C Files are written in accordance to Betty coding style
* All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* No more than 5 functions per file
* Allowed syscalls: `read`, `write`, `open`, `close`
* Tip: always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instance read(STDIN_FILENO, ... vs read(0, ...

## Files

All the following are the programs written in C:

| Filename | Description |
| -------- | ----------- |
| `0-read_textfile.c` | Reads a text file and prints it to the `POSIX` standard output |
| `1-create_file.c` | Creates a file |
| `2-append_text_to_file.c` | Appends text at the end of a file |
| `3-cp.c` | Copies the content of a file to another file |
| `100-elf_header.c` | Displays the information contained in the `ELF` header at the start of an `ELF` file |
