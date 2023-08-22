# Monty

Welcome to the "Stacks, Queues, and Monty Python" project! In this project, you will explore the concepts of stacks and queues in the context of the Monty Python programming language. Through this project, you will gain a deeper understanding of data structures and their applications, while enjoying a touch of Monty Python humor.

## LIFO and FIFO

**LIFO** stands for "Last-In, First-Out." It's a principle where the last element added to a collection is the first one to be removed. Think of it like a stack of plates; you remove the top plate first.

**FIFO** stands for "First-In, First-Out." This means that the first element added is the first one to be removed. Imagine a line of people waiting for a bus; the person who arrived first gets on the bus first.

## Stack

A **stack** is a data structure that follows the LIFO principle. It's like a stack of books where you can only add or remove items from the top. Use a stack when you need to keep track of elements in a particular order and want to process them in reverse order of their addition.

## Queue

A **queue** is a data structure that follows the FIFO principle. It's similar to people standing in a line; the person at the front gets served first. Use a queue when you want to maintain the order of items and process them in the same order they were added.

## Common Implementations

Common implementations of stacks include arrays and linked lists. For queues, arrays and linked lists are also used, along with more specialized implementations like circular queues.

## Common Use Cases

**Stacks** are used for tasks like implementing function calls and managing expressions. They're handy for reversing the order of elements and tracking state changes.

**Queues** are often used in scenarios like task scheduling, managing resources, and handling breadth-first search algorithms.

## Proper Use of Global Variables

Using global variables should be done with caution. It's best to limit their use to cases where a value needs to be accessible throughout the entire program. Always choose meaningful names for global variables, and try to minimize their use to avoid potential conflicts and make your code more maintainable.

Remember, the key is to use the appropriate data structure (stack or queue) based on the problem you're trying to solve and the behavior you need.



In C, the `extern` keyword is used to declare a variable that is defined in one source file and can be accessed from other source files. This is useful for sharing variables between different parts of a program.

To use `extern` to share variables between source files:

1. **Create a Header File:**
   In one of your source files (usually referred to as the "main" or "driver" file), declare the variable as `extern` in a header file (let's call it "shared.h"):
   
   ```c
   // shared.h
   extern int sharedVariable;
   ```

2. **Define the Variable:**
   In one of your source files (the same or a different one), define the variable without using `extern`:
   
   ```c
   // source1.c
   int sharedVariable = 42; // Define the variable
   ```

3. **Include the Header:**
   In any source file where you want to access the shared variable, include the "shared.h" header:
   
   ```c
   // source2.c
   #include "shared.h"
   
   // Now you can access the sharedVariable here
   ```

By doing this, you're effectively telling the compiler that the variable `sharedVariable` is defined in another source file and that its actual definition will be resolved during the linking phase of compilation.

Remember that you should only define the shared variable in one source file to avoid multiple definitions. The `extern` declaration in the header file provides a reference to the variable, allowing other source files to access it.

Finally, during the compilation and linking process, make sure to compile all source files together to create the final executable, so that the linker can resolve the references properly.
