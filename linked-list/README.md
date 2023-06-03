# Linked List

## Definition

A linked list is a linear data structure in which the elements are not stored at contiguous memory locations. Instead, each element, known as a node, contains both data and a reference (link) to the next node in the list.
Advantages

- Dynamic size: Unlike arrays, linked lists can dynamically grow and shrink as needed.
- Ease of insertion/deletion: Adding or removing elements from a linked list is efficient, as it involves updating the references between nodes.

## Disadvantages

- Lack of random access: Unlike arrays, accessing elements in a linked list requires traversing the list from the beginning, making random access operations inefficient.
- Extra memory space: Each node in a linked list requires additional memory for storing the reference to the next node, which can lead to increased memory usage.
- Lack of cache-friendliness: Linked lists do not exhibit locality of reference like arrays do, which can result in poorer performance when accessing elements.

## How to Use

### Compilation

To compile the code, run the following command:

```bash
make
```
### Execution

To run the program, use the following command:

```bash
./payment_app
```

Feel free to adjust and modify the code according to your specific needs and requirements.