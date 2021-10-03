count = 0


def solution(n):
    board = [0]
    visited = [False] * (n + 1)
    queen(n, board, visited)
    print(count)


def check(board, x):
    for i in range(1, len(board)):
        if abs(i - len(board)) == abs(board[i] - x):
            return False
    return True


def queen(n, board, visited):
    global count
    if len(board) == n + 1:
        count += 1
    else:
        for i in range(1, n + 1):
            if not visited[i]:
                if not check(board, i):
                    continue
                board.append(i)
                visited[i] = True
                queen(n, board, visited)
                visited[i] = False
                board.pop()

printf("how many?")
solution(int(input()))
