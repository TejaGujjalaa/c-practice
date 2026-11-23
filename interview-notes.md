## Day 2
**Date:** 19/Nov/2026
**Time:** 11:30 pm


**1. What is the size of int, and does it depend on the machine?**

A.the size of int is 4bytes. it depends on system and compiler.

**2. What is the diff b/w signed and unsigned?**

A.signed stores both +ve and -ve numbers include zero. where as unsigned store only zero to +ve numbers.

**3. what does 5/2 gives in C, and why?**

A.5/2 gives 2. because it has both int operands.

**4. diif b/w i++ and ++i?**

A.i++ is post increment, uses the current value and then increment it. where as ++i pre increment, first increments it and then use it.

**5. what happens on a integer overflow?**

A.integer overflow can cause or goes beyond the range of that data type can store.a = a + b goes past INT_MAX for big inputs, and that is signed overflow, which is undefined behavior.

## Day 3
**Date:** 20/Nov/2026
**Time:** 11:19pm


**1. What is the difference between while and do-while?**

A. A while loop checks its condition before executing the body.A do-while loop executes the body first and checks the condition afterward, so it always executes at least once.

**2. What happens in a switch if you forget break?**

A. Without break, C continues executing the statements in the next case. it is also called falsethrough

**3. Can a switch use a float or a string in C?**

A. No, float, strings are not valid switch choices.switch must have an integer type, such as int, char.

**4. What is the difference between = and ==, and what does if (x = 5) do?**

A. = is the assignment operator. == is the equality operator.

**5. What is the difference between break and continue?**

A. break immediately terminates the nearest loop.continue does not end the loop and it skips the some of statements.


## Day 4
**Date:** 21/Nov/2026
**Time:** 11:50pm


**1. What is the difference between declaring and defining a function?**

A. declaring is like telling compiler about datatypes, names and parameters while defining is like implementation of function and like actual operations to be performed.

**2. What is the difference between a parameter and an argument?**

A. a parameter is a variable that assign in the function where as arguments are values that are passed to that function to the place of parameters.

**3. What does void mean as a return type?**

A. to exit a function early we  use void, but that does not return any value. 

## Day 5
**Date:** 23/Nov/2026
**Time:** 09:05pm

**1. Is C call by value or call by reference?**

A. C supports call by value. When we pass an argument to a function, a copy of its value is passed, so modifications inside the function do not affect the original variable.

**2. What is the difference between scope and lifetime?**

A. Scope defines where a variable can be accessed in a program, whereas lifetime defines how long a variable exists in memory during program execution.

**3. What happens if a local and global variable have the same name?**

A. The local variable shadows the global variable within its scope. When we access that variable inside the local scope, the local variable takes precedence over the global variable.

**1. What does static do to a local variable?**

A. The static keyword extends the lifetime of a local variable throughout the entire program execution. It retains its value between function calls, but its scope remains limited to the block in which it is declared.

**2. What does extern mean?**

A. The extern keyword declares a variable or function that is defined elsewhere. It tells the compiler that the declaration refers to an existing external definition.

**3. What is the default value of an uninitialized local, global and static variable?**

A. Local variable Has an indeterminate value.Global variable and Static variable automatically initialized to zero.

