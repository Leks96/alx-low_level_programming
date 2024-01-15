#!/bin/bash

# Check if there are any C source files in the current directory
if ! ls *.c > /dev/null 2>&1; then
	echo "No C source files found in the current directory."
	exit 1
fi

# Compile C source files to object files
gcc *.c -c -fPIC

# Check if the compilation was successful
if [ $? -ne 0 ]; then
	echo "Compilation failed. Exiting."
	exit 1
fi

# Link object files into a shared library
gcc *.o -shared -o liball.so

# Check if the linking was successful
if [ $? -ne 0 ]; then
	echo "Linking failed. Exiting."
	exit 1
fi

echo "Shared library liball.so created successfully."
