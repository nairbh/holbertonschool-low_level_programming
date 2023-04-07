<h2>Doubly Linked Lists in C</h2>
<p>Doubly linked lists are data structures that consist of a list of nodes, where each node contains a value and pointers to the previous and the next node in the list.</p>
<h3>Functions Implemented:</h3>
<ul>
  <li><b>add_dnodeint:</b> Adds a new node at the beginning of the list.</li>
  <li><b>add_dnodeint_end:</b> Adds a new node at the end of the list.</li>
  <li><b>free_dlistint:</b> Frees the memory occupied by the list.</li>
  <li><b>print_dlistint:</b> Prints the elements of the list.</li>
  <li><b>dlistint_len:</b> Returns the number of elements in the list.</li>
  <li><b>get_dnodeint_at_index:</b> Returns the node at a given index.</li>
  <li><b>sum_dlistint:</b> Returns the sum of the elements in the list.</li>
  <li><b>insert_dnodeint_at_index:</b> Inserts a new node at a given position.</li>
  <li><b>delete_dnodeint_at_index:</b> Deletes the node at a given index.</li>
</ul>
<h3>Usage:</h3>
<ul>
  <li>Clone the repository: <code>git clone https://github.com/username/repo.git</code></li>
  <li>Compile the code: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 8-delete_dnodeint.c -o k</code></li>
  <li>Run the binary file: <code>./k</code></li>
</ul>
<h3>Tips:</h3>
<ul>
  <li>Always initialize the previous and next pointers of each node to NULL.</li>
  <li>Use the <code>free</code> function to free the memory occupied by a node.</li>
  <li>When inserting or deleting a node, update the previous and next pointers of the neighboring nodes accordingly.</li>
  <li>When adding a node to the beginning of the list, make sure to update the head pointer.</li>
  <li>When deleting a node, handle the special cases where the node is the first or the last node in the list.</li>
</ul>
<h3>Conclusion:</h3>

<p>Doubly linked lists are powerful data structures that allow usto traverse the list in both directions. They have various applications, including implementation of stacks and queues and representation of complex data structures such as graphs.</p> 
<h3> Author </h3>
<p>
Nairbh
</p>
<h3> Repository </h3>
<p>
GitHub repository: holbertonschool-low_level_programming
Directory: singly_linked_lists
</p>
