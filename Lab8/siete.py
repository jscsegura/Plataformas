def GenerarLista(n):
	i=0
	a=[]
	while i!=n:
		h=random()
		a.append(h)
		i=i+1
	return a

def random():
	from random import randint	
	x=randint(0,50)
	return x

def Imprimir(a=[]):

	end=len(a)-1
	for i in range(0,end):
		print (a[i])



x = int(input("Ingrese el tamaño de la lista: "))
b=GenerarLista(x)
Imprimir(b)

