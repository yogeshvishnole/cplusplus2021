The work of linker

The work of linker is clear that it has to find the defintions of each and every functions \
and variables , across different obj files which are converted from compiler from a source file
or translational unit to a obj file , if we give compiler a declaration of a variable
it trust as that it give also its definition in linking stage.

main function is must to be in any one of the obj file during linking.

if some symbols definitions not found we get the linking error.

# Some linker errors

1. Incorrect function signature
2. misnamed the function which we have to link
3. when we have two function with same names in different translational units

# so conclude

the work of linker is to link all obj files
the obj files can come from

a. C runtime library
b. c++ standard library
c. if necessaryy it may come from platform apisetc.

# types of linking

1. static
2. Dynamic

more on this later
