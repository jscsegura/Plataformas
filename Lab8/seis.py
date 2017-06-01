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

def ordenar(orden,a=[]):

	if (orden=="a"):
		end=len(a)-1
		while True:
		    swapped=-1
		    for i in range(0,end):
		        if a[i]>a[i+1]:
		            temp=a[i]
		            a[i]=a[i+1]
		            a[i+1]=temp
		            swapped=i
		    if swapped == -1:
		        break
		print(a)

	elif(orden=="d"):
		end=len(a)-1
		while True:
		    swapped=-1
		    for i in range(0,end):
		        if a[i]<a[i+1]:
		            temp=a[i]
		            a[i]=a[i+1]
		            a[i+1]=temp
		            swapped=i
		    if swapped == -1:
		        break
		print(a)
	else:
		print("No ha ingresado una letra valida")




x = int(input("Ingrese el tamaño de la lista: "))
orden = input("Ingrese a para ascendente o d para descendente:")

b=GenerarLista(x)

ordenar(orden, b)
