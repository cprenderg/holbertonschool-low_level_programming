# Step-by-Step Memory Map
# 0. Ai Memory Visualiser
Text that has a ~~strikethrough~~ is where I have edited AI the AI's response. Text in *italics* has been added to the AI's response.

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