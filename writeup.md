# Walkthrough

Step 1. Connect to netcat using the following command:
nc localhost 54321

Step 2. Run the following command to get a listing of the files in the current working directory:
ls -la

Step 3. Display the contents of flag.txt to get the first flag by running the following command:
cat flag.txt
Answer Key: CTF_SDaT{Free_Points1!}

Step 4. Unzip book.zip by running the following command:
unzip book.zip

Step 5. Search the files in the book directory for "CTF_SDaT" by running the following command: 
grep -r book -e 'CTF_SDaT'
Answer Key: CTF_SDaT{Unzip_Grep_Points!}

Step 6. Run the executable C program 'main' to get a hint about the next secret flag using the following command:
./main

Step 7. Run the following command to debug the the C program 'main' using GDB:
gdb main

Step 8. Run the following command in GDB to set a breakpoint at the main function:
b*main

Step 9. Run the following command in GDB to start the C program 'main'
run

Step 10. Run the following command in GDB to get the name of the functions in the program with the word 'flag' in it:
info functions flag

Step 11. Call the function print_flag using the following command to display the flag:
call (char*) print_flag()
Answer Key: CTF_SDaT{Reverse_Engineering!}
