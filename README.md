# Data Structures and Algorithms in C++

## Table of Contents
1. [Introduction](#introduction)
2. [Array](#array)
3. [String](#string)
4. [HashMap and HashSet](#hashmap-and-hashset)
5. [Linked Lists](#linked-lists)
6. [Dynamic Arrays](#dynamic-arrays)
7. [Stack](#stack)
8. [Queue](#queue)
9. [Recursion](#recursion)
10. [Tree](#tree)
11. [Graph](#graph)

## Introduction
Data Structures and Algorithms (DSA) are fundamental concepts in computer science. Understanding DSA is crucial for optimizing code efficiency and improving problem-solving skills. 

### Types of Data Structures
- **Linear**: Arrays, Strings, Linked Lists, Stacks, Queues
- **Non-Linear**: Trees, Graphs

### Time and Space Complexities
Time complexity measures how the runtime of an algorithm increases with the size of the input. Space complexity measures the amount of memory an algorithm needs.

### Mathematical Concepts
Familiarity with basic mathematical concepts, patterns, and problem-solving techniques is essential before diving into DSA.

### Other Concepts
- **Intervals**: Used in algorithms to manage ranges and comparisons.
- **Greedy Algorithms**: Make locally optimal choices in hopes of finding a global optimum.

---

## Array
- **Description**: A collection of elements identified by index or key.
- **Syntax**: 
    ```cpp
    int arr[size];
    ```
- **Importance**: Fast access to elements using indexes.
- **Applications**: Used in sorting algorithms, storing data in a linear fashion.
- **Use Cases**: Storing data in a contiguous block.
- **Difference with Other Structures**: Fixed size, can lead to wastage of space.

---

## String
- **Description**: An array of characters terminated by a null character.
- **Syntax**: 
    ```cpp
    std::string str = "Hello";
    ```
- **Importance**: Essential for text manipulation.
- **Applications**: Used in data parsing, manipulation, and analysis.
- **Use Cases**: Handling user input, generating formatted output.
- **Difference with Other Structures**: Immutable vs mutable strings.

---

## HashMap and HashSet
- **Description**: HashMap stores key-value pairs; HashSet stores unique keys.
- **Syntax**:
    ```cpp
    std::unordered_map<int, std::string> map;
    std::unordered_set<int> set;
    ```
- **Importance**: Provides fast access to data.
- **Applications**: Caching, counting frequency of elements.
- **Use Cases**: Implementing dictionaries, frequency maps.
- **Difference with Other Structures**: No inherent order, allows fast retrieval.

---

## Linked Lists
- **Description**: A linear collection of elements, where each element points to the next.
- **Syntax**: 
    ```cpp
    struct Node {
        int data;
        Node* next;
    };
    ```
- **Importance**: Dynamic size, efficient insertions/deletions.
- **Applications**: Implementing stacks, queues, and adjacency lists.
- **Use Cases**: Situations where frequent insertions/deletions occur.
- **Difference with Other Structures**: Non-contiguous memory allocation.

---

## Dynamic Arrays
- **Description**: An array that can grow in size dynamically.
- **Syntax**:
    ```cpp
    std::vector<int> vec;
    ```
- **Importance**: Combines array advantages with dynamic sizing.
- **Applications**: Resizing data structures as needed.
- **Use Cases**: Storing lists where the size is not known beforehand.
- **Difference with Other Structures**: More overhead than static arrays.

---

## Stack
- **Description**: A linear structure that follows Last In First Out (LIFO).
- **Syntax**: 
    ```cpp
    std::stack<int> stack;
    ```
- **Importance**: Used for backtracking algorithms.
- **Applications**: Parsing expressions, function call management.
- **Use Cases**: Undo mechanisms in applications.
- **Difference with Other Structures**: Restrictive access (only top element).

---

## Queue
- **Description**: A linear structure that follows First In First Out (FIFO).
- **Syntax**: 
    ```cpp
    std::queue<int> queue;
    ```
- **Importance**: Used for scheduling processes.
- **Applications**: Buffer management, resource sharing.
- **Use Cases**: Print queues, task scheduling.
- **Difference with Other Structures**: Enqueue and dequeue operations.

---

## Recursion
- **Description**: A function that calls itself to solve smaller instances of a problem.
- **Syntax**: 
    ```cpp
    void recursiveFunction() {
        // base case
        recursiveFunction();
    }
    ```
- **Importance**: Simplifies code for complex problems.
- **Applications**: Tree traversals, backtracking problems.
- **Use Cases**: Factorials, Fibonacci series.
- **Difference with Other Structures**: Can lead to stack overflow if not managed.

---

## Tree
- **Description**: A hierarchical structure consisting of nodes.
- **Syntax**: 
    ```cpp
    struct TreeNode {
        int value;
        TreeNode* left;
        TreeNode* right;
    };
    ```
- **Importance**: Efficient for searching and sorting.
- **Applications**: File systems, databases.
- **Use Cases**: Binary search trees, heaps.
- **Difference with Other Structures**: Non-linear, parent-child relationships.

---

## Graph
- **Description**: A collection of nodes (vertices) connected by edges.
- **Syntax**: 
    ```cpp
    std::vector<std::vector<int>> graph;
    ```
- **Importance**: Represents complex relationships.
- **Applications**: Social networks, route planning.
- **Use Cases**: Finding the shortest path, network flow problems.
- **Difference with Other Structures**: Can be directed or undirected, weighted or unweighted.

---

## Conclusion
Understanding data structures and algorithms is vital for efficient programming. Mastery of these concepts will enhance your problem-solving skills and prepare you for technical interviews and real-world applications.
