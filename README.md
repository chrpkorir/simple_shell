# Description
A simple UNIX command Interpreter team project.
The shell works on interactive mode and non-interactive mode.

   * read,fork, wait, execve


# Compilation
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

# Testing

# Interactive mode

$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$

# Non-interactive mode

$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$

