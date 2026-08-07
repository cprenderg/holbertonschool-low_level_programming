# Valgrind & AI Memory Tracer
Throughout this analysis there are steps in brackets, e.g. (Step 3). These steps relate to the memory_maps.md to show which step the analysis is exploring.

## aliasing_example.c

### Analysis - Invalid read of size 4
==713== Invalid read of size 4  
==713==    at 0x1092F5: main (in /home/chris-holberton/holbertonschool-low_level_programming/ai_memory_visualizer_valgrind_tracer/programs/a.out)  

The cause of this error is a use-after-free error. In this program, an integer array is assigned memory (Step 3). The pointers `a` and `b` (Step 6) are set to point at the same integer array in the heap. The program calls `free(a)` (Step 8), so the memory that `a` and `b` are pointing to his released from the heap. After freeing a, the program attempts to access the data at `b[2]` using `printf(%d\n", b[2])` (Step 10). The memory that `b` is pointing at has already been freed, so it is attempting to be used after being freed. The data that was originally stored in `b[2]` was an integer with a size of 4 bytes. This is why Valgrind reports "Invalid read of size 4".

### Analysis - Invalid write of size 4
==713== Invalid write of size 4
==713==    at 0x109315: main (in /home/chris-holberton/holbertonschool-low_level_programming/ai_memory_visualizer_valgrind_tracer/programs/a.out)

Valgrind reports a related error of "Invalid write of size 4", when the program attempts `b[3] = 1234` (Step 11). For similar reasons as the error above, the program is trying to assign an integer value to memory that has already been freed. As mentioned above, the size of an integer is 4 bytes, and the program is trying to write an integer to freed memory. This causes Valgrind to report "Invalid write of size 4".

### Full Valgrind report

==713== Invalid read of size 4  
==713==    at 0x1092F5: main (in /home/chris-holberton/holbertonschool-low_level_programming/ai_memory_visualizer_valgrind_tracer/programs/a.out)  
==713==  Address 0x4a74488 is 8 bytes inside a block of size 20 free'd  
==713==    at 0x484988F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)  
==713==    by 0x1092D1: main (in /home/chris-holberton/holbertonschool-low_level_programming/ai_memory_visualizer_valgrind_tracer/programs/a.out)  
==713==  Block was alloc'd at  
==713==    at 0x4846828: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)  
==713==    by 0x1091E4: make_numbers (in /home/chris-holberton/holbertonschool-low_level_programming/ai_memory_visualizer_valgrind_tracer/programs/a.out)  
==713==    by 0x109272: main (in /home/chris-holberton/holbertonschool-low_level_programming/ai_memory_visualizer_valgrind_tracer/programs/a.out)  
==713==   
  reading b[2]=22  
==713== Invalid write of size 4  
==713==    at 0x109315: main (in /home/chris-holberton/holbertonschool-low_level_programming/ai_memory_visualizer_valgrind_tracer/programs/a.out)  
==713==  Address 0x4a7448c is 12 bytes inside a block of size 20 free'd  
==713==    at 0x484988F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)  
==713==    by 0x1092D1: main (in /home/chris-holberton/holbertonschool-low_level_programming/ai_memory_visualizer_valgrind_tracer/programs/a.out)  
==713==  Block was alloc'd at  
==713==    at 0x4846828: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)  
==713==    by 0x1091E4: make_numbers (in /home/chris-holberton/holbertonschool-low_level_programming/ai_memory_visualizer_valgrind_tracer/programs/a.out)  
==713==    by 0x109272: main (in /home/chris-holberton/holbertonschool-low_level_programming/ai_memory_visualizer_valgrind_tracer/programs/a.out)  
==713==   
==713== Invalid read of size 4  
==713==    at 0x109323: main (in /home/chris-holberton/holbertonschool-low_level_programming/ai_memory_visualizer_valgrind_tracer/programs/a.out)  
==713==  Address 0x4a7448c is 12 bytes inside a block of size 20 free'd  
==713==    at 0x484988F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)  
==713==    by 0x1092D1: main (in /home/chris-holberton/holbertonschool-low_level_programming/ai_memory_visualizer_valgrind_tracer/programs/a.out)  
==713==  Block was alloc'd at  
==713==    at 0x4846828: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)  
==713==    by 0x1091E4: make_numbers (in /home/chris-holberton/holbertonschool-low_level_programming/ai_memory_visualizer_valgrind_tracer/programs/a.out)  
==713==    by 0x109272: main (in /home/chris-holberton/holbertonschool-low_level_programming/ai_memory_visualizer_valgrind_tracer/programs/a.out)  
==713==   
  wrote b[3]=1234  
==713==   
==713== HEAP SUMMARY:  
==713==     in use at exit: 0 bytes in 0 blocks  
==713==   total heap usage: 2 allocs, 2 frees, 1,044 bytes allocated  
==713==   
==713== All heap blocks were freed -- no leaks are possible  
==713==   
==713== For lists of detected and suppressed errors, rerun with: -s  
==713== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)  

---


## crash_example.c

### Analysis - Invalid write of size 4

==720== Invalid write of size 4  
==720==    at 0x10928A: main (crash_example.c:32)  
==720==  Address 0x0 is not stack'd, malloc'd or (recently) free'd  
==720==   
==720==   
==720== Process terminating with default action of signal 11 (SIGSEGV)  

Program tries to dereference a null pointer. The variable `n = 0` is passed into `nums = allocate_numbers(n)` (Step 2). In `allocate_numbers()` when `n = 0` it returns `NULL` (Step 3). This means that after `nums = allocate_numbers(n)` , nums is a null pointer. When the the program reaches the line `nums[0] = 42` (Step 4), the program attempts to assign the integer value `42` to `NULL`. The size of an integer is 4 bytes, since the program cannot write the integer `42` to a NULL pointer, Valgrind reports "Invalid write size of 4".

### Full Valgrind report

==720== Invalid write of size 4  
==720==    at 0x10928A: main (crash_example.c:32)  
==720==  Address 0x0 is not stack'd, malloc'd or (recently) free'd  
==720==   
==720==   
==720== Process terminating with default action of signal 11 (SIGSEGV)  
==720==  Access not within mapped region at address 0x0  
==720==    at 0x10928A: main (crash_example.c:32)  
==720==  If you believe this happened as a result of a stack  
==720==  overflow in your program's main thread (unlikely but  
==720==  possible), you can try to increase the size of the  
==720==  main thread stack using the --main-stacksize= flag.  
==720==  The main thread stack size used in this run was 8388608.  
==720==   
==720== HEAP SUMMARY:  
==720==     in use at exit: 1,024 bytes in 1 blocks  
==720==   total heap usage: 1 allocs, 0 frees, 1,024 bytes allocated  
==720==   
==720== LEAK SUMMARY:  
==720==    definitely lost: 0 bytes in 0 blocks  
==720==    indirectly lost: 0 bytes in 0 blocks  
==720==      possibly lost: 0 bytes in 0 blocks  
==720==    still reachable: 1,024 bytes in 1 blocks  
==720==         suppressed: 0 bytes in 0 blocks  
==720== Reachable blocks (those to which a pointer was found) are not shown.  
==720== To see them, rerun with: --leak-check=full --show-leak-kinds=all  
==720==   
==720== For lists of detected and suppressed errors, rerun with: -s  
==720== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)  
Segmentation fault (core dumped)  

---

## heap_example.c

### Analysis - 6 bytes in 1 blocks are definitely lost in loss record 1 of 1

==643== HEAP SUMMARY:  
==724==     in use at exit: 6 bytes in 1 blocks  
==724==   total heap usage: 5 allocs, 4 frees, 1,066 bytes allocated  
==724==   
==724== 6 bytes in 1 blocks are definitely lost in loss record 1 of 1  
==724==    at 0x4846828: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)  
==724==    by 0x109211: person_new (heap_example.c:21)  
==724==    by 0x1092FA: main (heap_example.c:51)  

The pointer to the structure person for Alice is free, but the string inside the structure it not freed. This means there is a memory leak, as some data stored in the heap was not freed. Valgrind reports this as "6 bytes… definitely lost". The culprit of this leak is the `Person` structure. Within the `Person` structure there is a field called name with the type char *. To make space for this field, memory is allocated in the heap using malloc (Step 2). At the end of the program the function `person_free_partial(alice)` is called (Step 7), that only frees the pointer to alice's Person structure, but leaves alice's name still in the heap. Each character is 1 byte of memory, and alice's name is stored as the string `Alice\0`, which is 6 bytes total. Therefore, Valgrind reports a leak of 6 bytes lost.

### Full Valgrind report

==724== HEAP SUMMARY:  
==724==     in use at exit: 6 bytes in 1 blocks  
==724==   total heap usage: 5 allocs, 4 frees, 1,066 bytes allocated  
==724==   
==724== 6 bytes in 1 blocks are definitely lost in loss record 1 of 1  
==724==    at 0x4846828: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)  
==724==    by 0x109211: person_new (heap_example.c:21)  
==724==    by 0x1092FA: main (heap_example.c:51)  
==724==   
==724== LEAK SUMMARY:  
==724==    definitely lost: 6 bytes in 1 blocks  
==724==    indirectly lost: 0 bytes in 0 blocks  
==724==      possibly lost: 0 bytes in 0 blocks  
==724==    still reachable: 0 bytes in 0 blocks  
==724==         suppressed: 0 bytes in 0 blocks  
==724==   
==724== For lists of detected and suppressed errors, rerun with: -s  
==724== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)  

---