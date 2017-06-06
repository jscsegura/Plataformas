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
                elif laberinto[i][j]=='E':
                    a[i][j] = 2
                else:
                    a[i][j] = 0
        return a

def traductorFinal(a,laberinto):
        final = [[0] * 36 for i in range(7)]
        final[1][1]='E'
        for i in range(7):
            for j in range(36):
                if a[i][j]==1:
                    final[i][j] = '#'
                elif a[i][j]==0:
                    final[i][j] = ' '
                elif a[i][j]==2:
                    final[i][j] = 'S'
                elif a[i][j]==3:
                    final[i][j] = 'o'
        final[5][34]='S'
        final[1][1]='E'
        return final



def search(x, y):
    if a[x][y] == 2:
        return True
    elif a[x][y] == 1:
        return False
    elif a[x][y] == 3:
        return False

    a[x][y] = 3

    if ((x > 0 and search(x-1, y))
        or (y < len(a)-1 and search(x, y+1))
        or (y > 0 and search(x, y-1))
        or (x < len(a)-1 and search(x+1, y))):
        return True

    return False

def imprimirText():
    datos=open('laberintofinal.txt', 'w')

    for i in range(7):
        for j in range(36):
            temp=final[i][j]
            datos.write(temp)

        datos.write("\n")


    datos.close()



laberinto= readPath()
a=traductor(laberinto)
search(5, 34)
print(a)
final= traductorFinal(a, laberinto)
print(final)
imprimirText()
