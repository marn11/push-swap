# push_swap

42 cursus project: sort a stack of integers using a limited set of operations, with the goal of minimizing the number of moves.

Given a random list of numbers, `push_swap` must output the shortest possible sequence of stack operations (`sa`, `pb`, `ra`, `rra`, ...) that leaves the stack sorted — for the 100-number and 500-number test cases, the grader caps the allowed move count.

## The approach

- **3–5 numbers** — hardcoded optimal instruction sequences
- **Large stacks (100/500)** — index-based chunked distribution: partition the stack into rolling ranges (thirds/quarts with dynamic boundaries), push cheaper chunks to B, then greedily push back the biggest remaining index with smart rotations (`rb` vs `rrb` decisions)

## Build & run

```bash
make
./push_swap 2 1 3 5 4
./push_swap $(shuf -i 1-500 -n 500 | tr '\n' ' ')
```

Checker (`bonus`): `make bonus` builds `checker` (and `checker_bonus`), which reads instructions on stdin and reports `OK`/`KO`.

## Stack

C · index-based chunking · doubly-linked list stack ops
