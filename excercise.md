# Exercise

```python
Exercise: ft_linked_list_reverse
Allowed functions: malloc, free

Create a function, ft_linked_list_reverse, that reverses a singly linked list.

A linked list node is defined by a structure like:

```c
typedef struct linked_list {
    int data;
    struct linked_list* next;
} t_list;
```

The function should not create any new nodes; instead, it should rearrange the pointers in the existing nodes to reverse the order of the nodes.

Here's how it should be prototyped:

```c
t_list* ft_linked_list_reverse(t_list* head);
```

Your solution should not use any additional memory other than the input list. So you can't create an additional list and copy elements into it in reverse order. You must reverse the list in-place. You can assume the argument given to your function is a pointer to the head node of the linked list. Your function should return a pointer to the new head node of the list after it has been reversed.
```
# Submissions 
 git push your solution in this repo and hit /submit in Discord