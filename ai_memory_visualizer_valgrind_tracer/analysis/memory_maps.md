# Step-by-Step Memory Map
# 0. Ai Memory Visualiser
Text that has a ~~strikethrough~~ is where I have edited AI the AI's response. Text in *italics* has been added to the AI's response.

# aliasing_example.c
The following steps are for the program aliasing_example.c.

## Step 1 – `main()` begins

### Stack Frames and Local Variables

```text
main()
├── a = NULL
├── b = NULL
└── n = 5
```

### Heap Allocations

```text
None
```

### Pointer Values and Aliases

| Pointer | Value |
|---------|-------|
| `a` | NULL |
| `b` | NULL |

### Object Lifetimes

- `main()` stack frame: **Alive**
- Heap objects: **None**

---

## Step 2 – `make_numbers(5)` is called

### Stack Frames and Local Variables

```text
make_numbers()
├── n = 5
├── i = 0
└── arr = NULL

main()
├── a = NULL
├── b = NULL
└── n = 5
```

### Heap Allocations

```text
None
```

### Pointer Values and Aliases

| Pointer | Value |
|---------|-------|
| `arr` | NULL |

### Object Lifetimes

- `main()` frame: **Alive**
- `make_numbers()` frame: **Alive**

---

## Step 3 – `malloc()` allocates memory

### Stack Frames and Local Variables

```text
make_numbers()
├── n = 5
├── i = 0
└── arr ───► 0x1000
```

### Heap Allocations

```text
0x1000

[ ?, ?, ?, ?, ? ]
```

### Pointer Values and Aliases

| Pointer | Points To |
|---------|-----------|
| `arr` | Heap array |

### Object Lifetimes

- Heap array: **Alive**

---

## Step 4 – Array initialized

### Stack Frames and Local Variables

```text
make_numbers()
├── i = 5
└── arr ───► 0x1000
```

### Heap Allocations

```text
0x1000

[ 0, 11, 22, 33, 44 ]
```

### Pointer Values and Aliases

| Pointer | Points To |
|---------|-----------|
| `arr` | Heap array |

### Object Lifetimes

- Heap array: **Alive**

---

## Step 5 – Function returns

### Stack Frames and Local Variables

```text
main()
├── a ───► 0x1000
├── b = NULL
└── n = 5
```

### Heap Allocations

```text
0x1000

[ 0, 11, 22, 33, 44 ]
```

### Pointer Values and Aliases

| Pointer | Points To |
|---------|-----------|
| `a` | Heap array |
| `b` | NULL |

### Object Lifetimes

- `make_numbers()` frame: **Destroyed**
- Heap array: **Alive**

---

## Step 6 – `b = a`

### Stack Frames and Local Variables

```text
main()

a ─┐
   ├──► 0x1000
b ─┘
```

### Heap Allocations

```text
0x1000

[ 0, 11, 22, 33, 44 ]
```

### Pointer Values and Aliases

| Pointer | Points To |
|---------|-----------|
| `a` | Heap array |
| `b` | Same heap array (**alias**) |

### Object Lifetimes

- Heap array: **Alive**

---
## Step 7 – `printf("%d, %d", a[2], b[2])`

```text 
a[2] = 22 
b[2] = 22 
```
*Note: Step 7 was not in the AI response*
--- 

## Step *8* – `free(a)`

### Stack Frames and Local Variables

```text
main()

a ───► 0x1000
b ───► 0x1000
```

### Heap Allocations

```text
0x1000

[FREED]
```

### Pointer Values and Aliases

| Pointer | Status |
|---------|--------|
| `a` | Dangling |
| `b` | Dangling ~~(alias)~~ |

### Object Lifetimes

- Heap array: **Destroyed**

---

## *Step 9* – `printf("%p", (void *)b`
```
text b = 0x1000 
```
This step is fine because it is printing the pointer value, not accessing the memory.
---

## ~~Step 8~~ – `b[2]`
## Step 10 – `printf("%d", b[2])`

### Stack Frames and Local Variables

```text
main()

b ───► 0x1000
```

### Heap Allocations

```text
0x1000

[FREED]
```

### Pointer Values and Aliases

~~| Pointer | Status |
|---------|--------|
| `b` | Dangling |~~

| Pointer | Status |
|---------|--------|
| `a` | Dangling |
| `b` | *Dangling* |

### Object Lifetimes

- Heap array: **Destroyed**
- ~~Invalid read (use-after-free)~~
- *Use-after-free error*
  - *Program tries to access data in b[2], but the memory it was pointing at has been freed*

---

## Step *11* – `b[3] = 1234`

### Stack Frames and Local Variables

```text
main()

b ───► 0x1000
```

### Heap Allocations

```text
0x1000

[FREED]
```

### Pointer Values and Aliases

~~| Pointer | Status |
|---------|--------|
| `b` | Dangling |~~

| Pointer | Status |
|---------|--------|
| `a` | *Dangling* |
| `b` | Dangling |

### Object Lifetimes

- Heap array: **Destroyed**
- ~~Invalid write (use-after-free)~~
- Use-after-free error
  - *Program tries to write to b[3], but the memory b is pointer at his been freed*

---

## Step *12* – Program exits

### Stack Frames and Local Variables

```text
All stack frames destroyed.
```

### Heap Allocations

```text
None
```

### Pointer Values and Aliases

None

### Object Lifetimes

- `main()` frame: **Destroyed**
- Heap array: **Destroyed**

---

# Timeline Summary

| Step | `a` | `b` | Heap Object |
|------|-----|-----|-------------|
| Start | `NULL` | `NULL` | None |
| After `malloc()` | — | — | Alive |
| After return | Heap | `NULL` | Alive |
| After `b = a` | Heap | Heap | Alive |
| After `free(a)` | Dangling | Dangling | Destroyed |
| `printf("%d", b[2])` | Dangling | Dangling | ❌ Invalid Read |
| `b[3] = 1234` | Dangling | Dangling | ❌ Invalid Write |

---

# crash_example.c

## Step 1 – `main()` begins

### Stack Frames and Local Variables

```text
main()
├── nums = NULL
└── n = 0
```

### Heap Allocations

```text
None
```

### Pointer Values and Aliases

| Pointer | Value |
|---------|-------|
| `nums` | NULL |

### Object Lifetimes

- `main()` stack frame: **Alive**
- Heap objects: **None**

---

## Step 2 – `allocate_numbers(0)` is called

### Stack Frames and Local Variables

```text
allocate_numbers()
├── n = 0
├── arr = NULL
└── i = 0

main()
├── nums = NULL
└── n = 0
```

### Heap Allocations

```text
None
```

### Pointer Values and Aliases

| Pointer | Value |
|---------|-------|
| `arr` | NULL |

### Object Lifetimes

- `main()` frame: **Alive**
- `allocate_numbers()` frame: **Alive**

---

## Step 3 – `n <= 0`, function returns `NULL`

Since `n` is `0`, the function returns immediately without calling `malloc()`.

### Stack Frames and Local Variables

```text
main()
├── nums = NULL
└── n = 0
```

### Heap Allocations

```text
None
```

### Pointer Values and Aliases

| Pointer | Value |
|---------|-------|
| `nums` | NULL |

### Object Lifetimes

- `allocate_numbers()` frame: **Lifetime ended**
- Heap objects: **None**

---

## Step 4 – `nums[0] = 42`

The program attempts to write through a NULL pointer.

### Stack Frames and Local Variables

```text
main()

nums ───► NULL
```

### Heap Allocations

```text
None
```

### Pointer Values and Aliases

| Pointer | Status |
|---------|--------|
| `nums` | NULL |

### Object Lifetimes

- `main()` frame: **Alive**
- Heap objects: **None**
- **Program crashes (NULL pointer dereference)**

---

## Step 5 – Program terminates

Because the program crashes, the remaining statements are never executed:

```c
printf("  nums[0]=%d\n", nums[0]);
free(nums);
```

### Stack Frames and Local Variables

```text
Program terminated.
```

### Heap Allocations

```text
None
```

### Pointer Values and Aliases

None

### Object Lifetimes

- `main()` frame: **Lifetime ended (program terminated)**
- Heap objects: **None**

## Timeline Summary | Step | `nums` | Heap Object | |------|--------|-------------| | Program start | `NULL` | None | | `allocate_numbers(0)` called | `NULL` | None | | Function returns `NULL` | `NULL` | None | | `nums[0] = 42` | `NULL` | ❌ NULL pointer dereference (segmentation fault) | | Program terminates | — | No heap allocations were ever created |

---

# heap_example.c

## Step 1 – `main()` begins

### Stack Frames and Local Variables

```text
main()
├── alice = NULL
└── bob = NULL
```

### Heap Allocations

```text
None
```

### Pointer Values and Aliases

| Pointer | Value |
|---------|-------|
| `alice` | NULL |
| `bob` | NULL |

### Object Lifetimes

- `main()` stack frame: **Alive**
- Heap objects: **None**

---

## Step 2 – `person_new("Alice", 30)` is called

### Stack Frames and Local Variables

```text
person_new()
├── name = "Alice"
├── age = 30
├── len = 5
├── i = 5
└── p ───► Person

main()
├── alice = NULL
└── bob = NULL
```

### Heap Allocations

```text
Person object (0x1000)

┌──────────────┐
│ name ─────┐  │
│ age = 30  │  │
└───────────│──┘
            │
            ▼

String (0x2000)

"Alice\0"
```

### Pointer Values and Aliases

| Pointer | Points To |
|---------|-----------|
| `p` | Person object |
| `p->name` | `"Alice"` string |

### Object Lifetimes

- Person object: **Alive**
- Name string: **Alive**

---

## Step 3 – `person_new()` returns

### Stack Frames and Local Variables

```text
main()

alice ───► Person
bob = NULL
```

### Heap Allocations

```text
Person (0x1000)
│
├── age = 30
└── name ───► "Alice"
```

### Pointer Values and Aliases

| Pointer | Points To |
|---------|-----------|
| `alice` | Person object |

### Object Lifetimes

- `person_new()` frame: **Lifetime ended**
- Alice Person object: **Alive**
- Alice name string: **Alive**

---

## Step 4 – `person_new("Bob", 41)` is called and returns

### Stack Frames and Local Variables

```text
main()

alice ───► Person (Alice)
bob   ───► Person (Bob)
```

### Heap Allocations

```text
Person (Alice)
│
├── age = 30
└── name ───► "Alice"

Person (Bob)
│
├── age = 41
└── name ───► "Bob"
```

### Pointer Values and Aliases

| Pointer | Points To |
|---------|-----------|
| `alice` | Alice Person |
| `bob` | Bob Person |

### Object Lifetimes

- Alice Person: **Alive**
- Alice name: **Alive**
- Bob Person: **Alive**
- Bob name: **Alive**

---

## Step 5 – `free(bob->name)`

### Stack Frames and Local Variables

```text
main()

alice ───► Person (Alice)
bob   ───► Person (Bob)
```

### Heap Allocations

```text
Person (Alice)
│
├── age = 30
└── name ───► "Alice"

Person (Bob)
│
├── age = 41
└── name ───► [FREED]
```

### Pointer Values and Aliases

| Pointer | Status |
|---------|--------|
| `bob` | Valid |
| `bob->name` | Dangling |

### Object Lifetimes

- Bob Person: **Alive**
- Bob name string: **Lifetime ended**

---

## Step 6 – `free(bob)`

### Stack Frames and Local Variables

```text
main()

alice ───► Person (Alice)
bob   ───► Person (freed)
```

### Heap Allocations

```text
Person (Alice)
│
├── age = 30
└── name ───► "Alice"

Bob Person: [FREED]
Bob name:   [FREED]
```

### Pointer Values and Aliases

| Pointer | Status |
|---------|--------|
| `bob` | Dangling |

### Object Lifetimes

- Bob Person: **Lifetime ended**
- Bob name: **Lifetime ended**
- Alice Person: **Alive**
- Alice name: **Alive**

---

## Step 7 – `person_free_partial(alice)`

`person_free_partial()` only calls:

```c
free(p);
```

It **does not free `p->name`**.

### Stack Frames and Local Variables

```text
main()

alice ───► Person (freed)
bob   ───► Person (freed)
```

### Heap Allocations

```text
Alice Person: [FREED]

Alice name:

"Alice"
(LEAKED)
```

### Pointer Values and Aliases

| Pointer | Status |
|---------|--------|
| `alice` | Dangling |
| `bob` | Dangling |

### Object Lifetimes

- Alice Person: **Lifetime ended**
- Alice name string: **Still allocated (memory leak)**
- Bob Person: **Lifetime ended**
- Bob name string: **Lifetime ended**

---

## Step 8 – Program exits

### Stack Frames and Local Variables

```text
All stack frames destroyed.
```

### Heap Allocations

```text
Alice name string still allocated.

Memory leak:
"Alice"
```

### Pointer Values and Aliases

None

### Object Lifetimes

- `main()` frame: **Lifetime ended**
- Alice Person: **Lifetime ended**
- Bob Person: **Lifetime ended**
- Bob name string: **Lifetime ended**
- Alice name string: **Still allocated (leaked)**


## Timeline Summary

| Step | `alice` | `bob` | Heap Objects |
|------|---------|-------|--------------|
| Program start | `NULL` | `NULL` | None |
| `person_new("Alice")` returns | Alice Person | `NULL` | Alice Person + Alice name allocated |
| `person_new("Bob")` returns | Alice Person | Bob Person | Alice Person + Alice name + Bob Person + Bob name allocated |
| `free(bob->name)` | Alice Person | Bob Person | Bob name freed |
| `free(bob)` | Alice Person | Dangling | Bob Person freed |
| `person_free_partial(alice)` | Dangling | Dangling | Alice Person freed, **Alice name leaked** |
| Program exits | — | — | **Alice name still allocated (memory leak)** |

---