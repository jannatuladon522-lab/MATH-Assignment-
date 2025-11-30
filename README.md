Matrix Operations in C++

This repository contains multiple C++ programs that perform fundamental matrix operations such as:

Transpose of a matrix (rectangular & square)

Check if a matrix is symmetric

Check if a matrix is skew-symmetric

Matrix addition

Matrix subtraction

Matrix multiplication

Each task is explained clearly below.

##️⃣ Task 1: Transpose of a Rectangular Matrix
Concept

The transpose of an 
𝑟
×
𝑐
r×c matrix becomes a 
𝑐
×
𝑟
c×r matrix.
Every element swaps its row and column:

𝑇
[
𝑗
]
[
𝑖
]
=
𝐴
[
𝑖
]
[
𝑗
]
T[j][i]=A[i][j]
Steps

Input rows and columns

Take the matrix as input

Create another matrix of reversed dimensions

Swap rows with columns

Print the transposed matrix

##️⃣ Task 1B: Transpose of a Square Matrix (In-Place)
Concept

A square matrix can be transposed without using a second matrix.

Only swap elements above the diagonal with those below it:

swap
(
𝐴
[
𝑖
]
[
𝑗
]
,
𝐴
[
𝑗
]
[
𝑖
]
)
for 
𝑗
>
𝑖
swap(A[i][j],A[j][i])for j>i
Why In-Place Transpose Works

Diagonal elements remain unchanged

Swaps only half of the matrix

Efficient in both time and memory

##️⃣ Task 2: Check Whether a Matrix is Symmetric
Definition

A matrix is symmetric if:

𝐴
[
𝑖
]
[
𝑗
]
=
𝐴
[
𝑗
]
[
𝑖
]
A[i][j]=A[j][i]
Rules

Must be a square matrix

Each element must mirror across the diagonal

Process

Read matrix

Compare each element with its transpose counterpart

If all match → Symmetric

Else → Not symmetric

##️⃣ Task 3: Check Whether a Matrix is Skew-Symmetric
Definition

A matrix is skew-symmetric if:

𝐴
[
𝑖
]
[
𝑗
]
=
−
𝐴
[
𝑗
]
[
𝑖
]
A[i][j]=−A[j][i]

And diagonal elements must be zero:

𝐴
[
𝑖
]
[
𝑖
]
=
0
A[i][i]=0
Rules

Must be square

Diagonal must be all zeros

Off-diagonal pairs must be negatives of each other

##️⃣ Task 4: Matrix Addition, Subtraction & Multiplication

This section handles:

✔ Matrix Addition

Possible only when:

𝑟
𝐴
=
𝑟
𝐵
and
𝑐
𝐴
=
𝑐
𝐵
rA=rBandcA=cB

Performed element-wise:

𝐶
[
𝑖
]
[
𝑗
]
=
𝐴
[
𝑖
]
[
𝑗
]
+
𝐵
[
𝑖
]
[
𝑗
]
C[i][j]=A[i][j]+B[i][j]
✔ Matrix Subtraction

Same size requirement as addition.

𝐶
[
𝑖
]
[
𝑗
]
=
𝐴
[
𝑖
]
[
𝑗
]
−
𝐵
[
𝑖
]
[
𝑗
]
C[i][j]=A[i][j]−B[i][j]
✔ Matrix Multiplication

Possible only when:

𝑐
𝐴
=
𝑟
𝐵
cA=rB

Each element of the result matrix is computed as:

𝐶
[
𝑖
]
[
𝑗
]
=
∑
𝑘
=
0
𝑚
𝑖
𝑑
−
1
𝐴
[
𝑖
]
[
𝑘
]
×
𝐵
[
𝑘
]
[
𝑗
]
C[i][j]=
k=0
∑
mid−1
	​

A[i][k]×B[k][j]

This multiplies:

Row of Matrix A

Column of Matrix B

Sums the products
