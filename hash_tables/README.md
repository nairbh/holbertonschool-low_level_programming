# Hash Tables

This repository contains C programs that implement Hash Tables.

## Compilation and Execution

### Requirements

* Linux Ubuntu 14.04 LTS
* GCC compiler

### How to Compile

1. Clone the repository to your local directory:
git clone https://github.com/<username>/hash_tables.git


2. Navigate to the cloned directory:
cd hash_tables


3. Compile the C programs using GCC:
gcc -Wall -pedantic -Werror -Wextra <main_file.c> <function_files.c> -o <output_file>

For example:
gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-hash_table_create.c -o a

### How to Execute

1. After compiling, execute the output file:

./<output_file>

For example:
./a

## Program Descriptions

### 0-hash_table_create.c

This program creates a hash table with a given size.

### 1-djb2.c

This program implements the djb2 hash function.

### 2-key_index.c

This program generates an index for a given key using a hash table's size.

### 3-hash_table_set.c

This program sets a key-value pair in the hash table.

### 4-hash_table_get.c

This program retrieves the value associated with a given key in the hash table.

### 5-hash_table_print.c

This program prints the contents of a hash table.

### 6-hash_table_delete.c

This program deletes a hash table.

## Authors

* [Nairbh]
