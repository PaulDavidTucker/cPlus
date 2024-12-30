### Learning C++ Blog and checklist

## Objectives and Aims:

- Aim to have a strong understanding of c++ by the end of study. Build some cool projects using https://learncodethehardway.com/blog/32-very-deep-not-boring-beginner-projects/
- Have fun! Understand some deeper concepts here - Finally get pointers, combine your embedded systems knowledge with the learnings from other settings that you've undertaken!
- Build some cool projects! My main ones are a game engine, a game using that engine, a load balancer from scratch and something machine learning related.
- Learn some vim along the way! I'm using vim rn!
- Actually stick to and learn something for once rather than being a lazy ass developer who doesn't actually know anything. Keep use of AI/LLM help to a minimum unless learning from it.

## Day 0:

Spent the day reading book etc.

- Read through chapter 1 outlining the design decisions for c++11, use and formative sections of the language. 
- Setup dev toolchain with GCC version 14, setup and enabled clang to use gcc 14, linked standard libs for c++ in bashrc
- Wrote first hello world program, began reading through chapter 2 for basic syntax

C++ is a compiled language, we must process the program with a compiler that produces object files that are then linked to produce an executable. C++ is also statically typed.

As with most languages, we have a defined main function, with the int value for main returning the exit code of the program. Non-Zero indicates failure here! Return values are useful for unix envs, less so for windows imo.

Something new I learned -> the put to operator writes the second given arguement onto the first. using std:: infers that the code or method to follow is from the standard library. We prevent reuse of this by including using namespace std;

We also have the opposite of put to, which is put in, with > repeated twice to enable us to take the result from the target operation and send it to the given var.

We have switch statements which behave basically the same as in Java it looks like? Same thing with while loops, we essentially define the syntax and conditional to be met the same as Java.

# Constants / immutability

C ++ has two kinds of constants

- Const meaning "I promise not to change my data". Used to specify interfaces, so that data can be passed to functions without fear of it being modifed. The compiler enforces this promise
- constexpr meaning "to be evaluated at compile time". Used to specify constants, and allow placement of data in read only memory and for performance.

Use const for values that may need runtime initialization but should not change.
Use constexpr for values or functions that you want to guarantee compile-time evaluation, improving performance and enabling template metaprogramming.

# Pointers, Arrays and Chars

An array of elemetns of type char can be defined with the size of the array, and a name. We also have a pointer (stored address of another value) by using the * notation. Arrays are lower bounded to 0 as the start index. 

## Day 1

- Continued with chapter 2 looking at basic syntax. Continued looking at pointers and references.

We can declare pointers to items - the * prefix operating means the "contents of" and the & prefix means the address of. A suffix & means "reference to". A reference acts similarly to a pointer, except that we don't need to use a prefix * to access the value referred to by the reference. This reference cannot be made to refer to a different object after it's initialization. (These are all called dlclarator operators)

Copied and pasted a fibonacci sequence solution using the CMG package for large stored numbers. Also fiddled around with using chrono, a library for timing the execution of functions. I thought it was pretty cool. 

Began watching through Dave Churchills Intro to c++ as it looks at all sorts of useful c++ features, not just some syntax three hour slop.

## Day 2 

- Began the day watching some primeaegen for obvious inspo, read an article as to why c++ is a cool and fun language. Looking to complete the C++ yt vid, then read through physical copy of book. Discovered that the GNU compiler I was using simply has the ability to compile to various versions of C++. I thought I'd need a whole new toolchain, compiler and utils/libs etc! Very cool. 

Ended up learning lots of syntax from the first part of the lecture I watched, biggest takeaway was better ways to create constructors for classes where we eliminate the need to assign a default value (saves assignment cycles!) and just assign the passed value. 

The second part I learnt was the proper use of passing values by reference to functions, rather than needing to pass in whole values that may be massive (like vectors or strings!!), we can just pass a reference to them. We also use const to prevent functions from modifying return types, passed args or modifying data within the method body itself. 

Didn't write a whole lot of code today, did mainly handwritten notes in the end. Eager to continue watching and reading more as I have the physcial book in my hands now. 
