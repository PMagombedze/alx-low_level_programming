# 0x1E. C - Search Algorithms

### `C`  `Algorithm`

## General

- What is a search algorithm

- What is a linear search

- What is a binary search

- What is the best search algorithm to use depending on your needs

## Tasks

0. function that searches for a value in an array of integers using the Linear search algorithm

1. function that searches for a value in a sorted array of integers using the Binary search algorithm

2. What is the time complexity (worst case) of a linear search in an array of size n?

3. What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

4. What is the time complexity (worst case) of a binary search in an array of size n?

5. What is the space complexity (worst case) of a binary search in an array of size n?

6. What is the space complexity of this function / algorithm?

```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```
