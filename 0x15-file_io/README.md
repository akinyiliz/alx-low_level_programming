# C - File I/O
In this project, I learnt about file descriptors and the funtions `open()`, `read()`, `write()`.

## Header File
  [main.h](https://github.com/akinyiliz/alx-low_level_programming/blob/master/0x15-file_io/main.h): Header file containing all the function prototypes written in the project.

## Helper File
  [_putchar.c_](https://github.com/akinyiliz/alx-low_level_programming/blob/master/0x15-file_io/_putchar.c): C function that writes a character to `stdout`.
  
## Tasks
**0. Tread lightly, she is near**
  * [0-read_textfile.c](https://github.com/akinyiliz/alx-low_level_programming/blob/master/0x15-file_io/0-read_textfile.c): C function that reads and prints to the `POSIX` standard output. Returns:
      - Then actual number of letters it could read and print.
      - `0` if the file cn not be opened or read.

**1. Under the snow**
  * [1-create_file.c](https://github.com/akinyiliz/alx-low_level_programming/blob/master/0x15-file_io/1-create_file.c): C function that creates a file. Where `filename` is the name of the file to create and `text_content` is a `NULL` terminated string to write to the file. Returns: 
      - 1 on success.
      - -1 on failure.

**2. Speak gently, she can hear**
  * [2-append_text_to_file.c](https://github.com/akinyiliz/alx-low_level_programming/blob/master/0x15-file_io/2-append_text_to_file.c): C function that appends text at the end of a file. Where `filename` is the name of the file and `text_content` is the `NULL` terminated string to add at the end of the file. Returns: 
      - 1 on success.
      - -1 on failure.

**3. cp**
  * [3-cp.c](https://github.com/akinyiliz/alx-low_level_programming/blob/master/0x15-file_io/3-cp.c): C program that copies the content of a file to another file. Usage: `cp file_from file_to`.

**4. elf**
  * [100-elf_header.c](https://github.com/akinyiliz/alx-low_level_programming/blob/master/0x15-file_io/100-elf_header.c): C program that displays the information contained in the `ELF` header at the start of an `ELF` file. Usage: `elf_header elf_filename`.
