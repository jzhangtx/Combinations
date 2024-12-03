Combinations


Given two integers n and k, return all possible combinations of size k containing distinct numbers between 1 and n.

Note: The list should not contain any duplicate combinations.

Example
n: 4
k: 2
Combinations: [
    [1, 2],
    [1, 3],
    [1, 4],
    [2, 3],
    [2, 4],
    [3, 4]
]
Testing
Input Format
The first line contains an integer ‘T’, denoting the number of test cases.

For each test case, the input has two integers n and k.

Output Format
For each test case, the output has the following lines:

The first line contains an integer ‘m’ denoting the total no of combinations.
The next m line contains space-separated integers denoting elements in that particular combination.
Sample Input
3
4 2
3 3
4 1
Expected Output
6
1 2
1 3
1 4
2 3
2 4
3 4
1
1 2 3
4
1
2
3
4