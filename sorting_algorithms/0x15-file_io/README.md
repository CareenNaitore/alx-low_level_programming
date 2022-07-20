### C PROGRAMMING PROJECT FILE I/O
In this project, I learned about the three standard file descriptors and there `POSIX` names as well as the 
difference between function and system calls. I practiced using the I/O system calls `open`, `close`, `read`, 
and `write` and the flags `O_RDONLY`, `WR_ONLY`, and `O_RDWR` to create, open, close, read, write, set 
permissions of files in C. `0_RDWR` is equal 2.

## Tasks :page_with_curl:
* **0. Tread lightly, she is near** * [0-read_textfile.c](./0-read_textfile.c): C function that reads a text 
  file and prints it to the `POSIX` standard output. * The parameter `letters` is the number of letters the 
  function should read and print. * If the file is `NULL` or cannot be opened or read - returns `0`. * If the 
  `write` call fails or does not write theer of test files. Provided by alx-intranet.
## Header File :file_folder:
* [mainn.h](./main.h): Header file containing prototypes fo expected number of bytes - returns `0`. * 
  Otherwise - returns the actual number of bytes the function can read and print.
* **1. Under the snow** * [1-create_file.c](./1-create_file.c): C function that creates a file. * The paramter 
  `filename` is the name of the file to create. * The parameter `text_content` is a null-terminated string to 
  write to the file. * If `text_content` is `NULL`, the function creates an empty file. her file. * Usage: `cp 
  file_from file_to` * If `file_to` already exists, it is truncated. * The created file has the permissions 
  `rw-rw-r--`. * If the file already exists, the existing permissions are not changed. * If the number of 
  arguments is incorrect, the function prints `Usage: cp file_from file_to`, followed by a new line on the 
  `POSIX` standard error and exits with code `97`. * If `file_from` does not exist or the user lacks read 
  permissions on it, the function prints `Error: Can't read from file NAME_OF_THE_FILE`, followed by a new line 
  and exits with code `98`.
    * Where `NAME_OF_THE_FILE` is the first argument passed to the program. * If firror occurs or the file is 
  not an `ELF` file, the function displays a corresponding error message to `stderr` and exits with a status 
  value of `98`.
LENO| stderr |
## Tests :heavy_check_mark:
* [tests](./tests): Fold
