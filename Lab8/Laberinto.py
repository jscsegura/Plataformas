def readPath():
    with open('laberinto.txt') as my_file:
        laberinto = my_file.readlines()
        return laberinto

#print (laberinto[1][20])



def traductor(laberinto):
        a = [[0] * 36 for i in range(7)]
        for i in range(7):
            for j in range(36):
                if laberinto[i][j]=='#':
                    a[i][j] = 1
                elif laberinto[i][j]==' ':
                    a[i][j] = 0
                elif laberinto[i][j]=='S':
                    a[i][j] = 2
                else:
                    a[i][j] = 0
        return a

def traductorFinal(a,laberinto):
        final = [[0] * 36 for i in range(7)]
        for i in range(7):
            for j in range(36):
                if laberinto[i][j]=='#':
                    a[i][j] = 1
                elif laberinto[i][j]==' ':
                    a[i][j] = 0
                elif laberinto[i][j]=='S':
                    a[i][j] = 2
                else:
                    a[i][j] = 0
        return a



def search(x, y):
    if a[x][y] == 2:
        return True
    elif a[x][y] == 1:
        return False
    elif a[x][y] == 3:
        return False

    a[x][y] = 3

    # explore neighbors clockwise starting by the one on the right
    if ((x < len(a)-1 and search(x+1, y))
        or (y > 0 and search(x, y-1))
        or (x > 0 and search(x-1, y))
        or (y < len(a)-1 and search(x, y+1))):
        return True

    return False



laberinto= readPath()
a=traductor(laberinto)
search(1, 1)
print(a)
final= traductorFinal(a, laberinto)
print(final)
