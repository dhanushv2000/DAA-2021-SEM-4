# Assignment-1

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIT2019207  |   Subhash Balla | subhash2909 |
|    IIT2019002  |   Dhanush Vasa | dhanushv2000 | 

**Group No-**"8"

**Faculty Name-**"Rahul Kala"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
We are given  an un-directed weighted graph.our goal is to find build  minimum spanning tree using kruskal's algorithm.

---
## How to use code

We can just run the code.input is generated RANDOMLY.
Random input considered is displayed on screen.

```
#Download project
git clone https://github.com/dhanushv2000/DAA-2021-SEM-4
```
Project Initialize 
```
cd daa
#create Assignment_06 folder
mkdir Assignment_06

#go to Assignment_06
cd Assignment_06

#Create file
touch readme.md
touch Assignment_06_code.cpp
.
.
```
---

Run the code
```
g++ Assignment_06_code.cpp
```
Output
```

```
---

**Test case**
```
Test Case-1
input-
n  ---> 14
m  ---> 9

input graph-->

13 3 5
14 10 10
12 7 3
8 6 4
3 11 9
8 10 9
14 1 6
11 4 6
8 3 1


Output-->

cost --> 53

minimum spanning forest --->

8 3 1
12 7 3
8 6 4
13 3 5
14 1 6
11 4 6
3 11 9
8 10 9
14 10 10

Test Case-2
input-
n  ---> 23
m  ---> 243

input graph-->

2 16 8
11 6 3
22 5 6
6 22 7
4 20 4
23 18 1
1 20 5
16 12 7
14 6 6
13 21 3
23 14 3
6 8 7
14 16 4
23 8 9
10 6 8
5 3 4
15 23 1
9 2 6
6 20 6
13 10 1
23 17 8
22 18 4
15 19 2
17 3 7
23 11 9
9 15 9
20 15 8
7 22 5
11 20 7
4 22 8
8 2 5
14 13 6
7 9 9
18 20 9
8 21 1
23 22 6
12 7 7
16 4 5
5 17 4
18 2 5
12 18 1
7 14 10
7 6 2
3 23 5
8 9 10
3 4 8
20 19 7
19 5 4
11 2 8
21 19 8
18 21 4
6 18 2
10 21 6
6 1 1
20 10 6
11 14 5
3 7 7
2 14 6
2 17 7
1 16 6
6 23 1
3 2 4
18 1 1
2 7 10
13 9 8
14 10 1
23 12 6
21 6 2
11 10 1
12 5 6
12 9 6
22 16 5
5 23 10
2 21 5
20 8 10
5 1 2
12 22 3
9 10 8
7 10 10
18 15 9
19 18 1
10 2 7
8 15 7
19 17 4
18 7 2
8 12 10
19 13 2
10 15 4
10 12 10
22 20 1
2 15 3
15 11 9
19 14 1
12 2 3
13 20 8
17 14 5
13 4 6
1 12 1
3 9 3
22 21 7
1 8 4
19 8 8
16 10 2
19 7 9
11 22 5
10 19 2
6 3 3
12 17 7
20 17 7
3 13 10
21 3 5
21 9 1
7 20 8
21 4 5
8 7 8
22 17 9
4 6 1
1 17 4
3 12 7
20 21 8
9 20 3
14 5 3
17 9 6
14 18 1
5 15 3
4 8 5
19 11 1
10 22 10
2 22 3
19 1 6
11 9 1
10 5 8
22 3 7
3 14 6
22 15 5
9 23 9
4 18 6
9 4 8
13 23 10
8 18 10
1 7 9
23 20 1
13 1 6
2 19 3
19 6 10
11 5 9
5 6 7
6 16 1
14 8 3
4 5 9
16 3 8
4 11 5
18 16 2
9 5 2
4 23 4
21 17 9
13 5 7
21 1 6
8 13 5
17 8 5
19 23 9
10 23 10
9 16 9
13 7 5
19 4 2
1 3 7
11 1 1
3 19 1
3 18 4
6 9 3
18 10 4
11 17 5
18 13 6
4 12 7
22 14 2
23 1 2
14 20 10
20 2 9
17 6 8
11 18 2
17 13 1
21 14 2
22 9 2
19 16 5
3 15 2
7 23 9
16 7 4
16 17 3
2 23 2
6 13 4
22 19 1
23 16 6
3 20 4
10 17 9
14 9 7
13 22 3
13 16 1
11 13 1
15 16 6
6 2 1
7 15 1
7 17 2
21 12 6
15 14 7
18 5 6
11 8 1
3 8 4
14 4 2
10 1 1
7 11 5
1 4 7
15 21 8
12 6 2
22 8 8
10 8 1
13 15 3
7 5 6
4 2 6
12 19 5
16 11 9
9 1 4
2 5 4
7 21 6
3 11 10
2 13 5
11 21 8
16 8 6
2 1 4
5 21 7
6 15 5
19 9 4
1 22 3
4 15 7
1 15 3
5 8 6
16 21 5
17 15 9
11 12 5
12 15 5
12 20 7
18 9 8
5 16 4
5 20 5

Output-

cost --> 23

minimum spanning forest --->

11 9 1
21 9 1
4 6 1
6 23 1
14 18 1
18 1 1
17 13 1
19 11 1
22 20 1
13 10 1
3 19 1
11 1 1
12 18 1
23 20 1
8 21 1
14 10 1
6 16 1
23 18 1
7 15 1
6 2 1
15 23 1
5 1 2

Output-->

cost --> 53

minimum spanning forest --->

8 3 1
12 7 3
8 6 4
13 3 5
14 1 6
11 4 6
3 11 9
8 10 9
14 10 10

```

---

### Theory
We are given an un-directed weighted graph.our goal is to find build minimum spanning tree using kruskal’s algorithm.
Minimum Spanning Tree- A sub graph(basically a tree)made from set of edges of input graph G(m,n) such
that the graph still remains connected and sum of weights of all edges is minimum

Firstly,we sort all edges with respect to weights in ascending order.Then we consider each edge sequentially and
check if those 2 vertices forming that edge are in same set or not.
If they are in same set,then including that edge creates a cycle which we don’t want, since those 2 vertices are already
connected,including that edge is useless.Hence we exclude that edge.
If they belong to 2 different sets ,we include that edge in our MST and combine those 2 sets.
We use disjoint-set-union(DSU) data structure to work with sets.

---

### Analysis

**Time Complexity**

sorting step -O(m ∗ log(m)).
For each check if both vertices belong to same set or not(find() in dsu) and combine 2 sets (union() in dsu) if they
belong to different sets.
In our implementation of DSU,we used both rank-heursitic and path compression technique.
Hence find() and union() works in α(m, n) time,where α(m, n) is inverse ackermann function.
It doesn’t cross ’5’ for any practically large real input.

Hence time taken=O(m ∗ log(m) + m ∗ α(m, n)).



**Space Complexity**

We used rank[] and parent[] arrays to work with sets ,which are linear.
Hence, Auxillary space = O(m+n).
---

### References


https://en.wikipedia.org/wiki/Kruskal%27salgorithm
