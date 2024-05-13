from collections import deque

def bfs(graph) :
    visited = set()
    queue = deque([0])
    answer = []

    while queue :
        node = queue.popleft()
        if node not in visited :
answer.append(node)
visited.add(node)
neighbors = sorted(graph[node])
for neighbor in neighbors :
if neighbor not in visited :
queue.append(neighbor)

return answer

def dfs(graph) :
    visited = set()
    stack = [0]
    answer = []

    while stack :
        node = stack.pop()
        if node not in visited :
answer.append(node)
visited.add(node)
neighbors = sorted(graph[node], reverse = True)
for neighbor in neighbors :
if neighbor not in visited :
stack.append(neighbor)

return answer

# �־��� �׷���
A = {
    0: [1, 2, 3] ,
    1 : [0, 2, 4, 5] ,
    2 : [0, 1, 6] ,
    3 : [0] ,
    4 : [1] ,
    5 : [1] ,
    6 : [2]
}

# BFS�� DFS�� �湮�� ���
bfs_result = bfs(A)
dfs_result = dfs(A)

# ��� Ȯ��
assert bfs_result == [0, 1, 2, 3, 4, 5, 6]
assert dfs_result == [0, 1, 4, 5, 2, 6, 3]
print('PASSED!')