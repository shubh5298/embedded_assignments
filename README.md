# embedded_assignments
 Why inline function needs static storage class ?
 =>Inline function whose defination is small & substituted at place where funtion call happened so there
   is no need to create seperate set of instruction in memory.Inline function is never ever provided to the linker which 
   is causing linker error, mentioned above.Using static keyword forces the compiler to consider this inline function 
   in the linker, and hence the program compiles and run successfully.
