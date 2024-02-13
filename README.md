# Lab1
1.cmake version- 3.28.3

2.terminal result on running `make help`

``` 
The following are some of the valid targets for this Makefile:
... all (the default if no target is provided)
... clean
... depend
... edit_cache
... rebuild_cache
... hello_world
... hello.o
... hello.i
... hello.s 
```
The valid target should be hello.o, hello.i, and hello.s
* list **all**: default target building entire project
* list **clean**: remove all the generated files
* list **hello.s**: assembly codes
* list **hello.i**: intermediate files
* list **hello.o** object file

4.the paths used by target_sources and target_include_directories are relative, not absolute. What file or folder are they relative to?
* list Relative to the same location of CMakeLists.txt

5.What are some differences between cmake and ninja?
* list cmake produces build tools while ninja itself is a building tools

6.Why is it important to run cmake in its own directory?
* list Keep the main directory clean, also we can keep rebuilding without affecting files

