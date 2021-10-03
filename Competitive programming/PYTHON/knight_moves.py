

# input
#The input begins with the number n of scenarios on a single line by itself.
# Next follow n scenarios. Each scenario consists of three lines containing integer numbers. The ﬁrst line speciﬁes the length l of a side of the chess board (4 ≤ l ≤ 300). The entire board has size l × l. The second and third line contain pair of integers {0, ..., l−1}× {0, ..., l−1} specifying the starting and ending position of the knight on the board. The integers are separated by a single blank. You can assume that the positions are valid positions on the chess board of that scenario
# output
# For each scenario of the input you have to calculate the minimal amount of knight moves which are necessary to move from the starting point to the ending point. If starting point and ending point are equal, distance is zero. The distance must be written on a single line.
import sys
from collections import deque


def solution():
    move = [[2, 1], [1, 2], [-1, 2], [-2, 1], [-2, -1], [-1, -2], [1, -2], [2, -1]]
    IC = int(sys.stdin.readline())
    for _ in range(IC):
        row = int(sys.stdin.readline())
        arr = [[0 for _ in range(row)] for _ in range(row)]
        sy, sx = list(map(int, sys.stdin.readline().split()))
        dy, dx = list(map(int, sys.stdin.readline().split()))
        queue = deque()
        queue.append((sy, sx))
        while queue:
            cy, cx = queue.popleft()
            if dx == cx and dy == cy:
                print(arr[dy][dx])
                break
            for i in range(8):
                my = cy + move[i][0]
                mx = cx + move[i][1]
                if not (0 <= my and 0 <= mx and my < row and mx < row):
                    continue
                if arr[my][mx]:
                    continue
                arr[my][mx] = arr[cy][cx] + 1
                queue.append((my, mx))


solution()
