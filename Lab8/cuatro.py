def random():
	from random import randint	
	x=randint(0,50)
	return x


def respuesta(intento):
	print("El CPU ha dicho el número ",intento)
	respuesta = int(input("Ingrese 1 si respuesta es mayor, 2 si respuesta es menor, 3 si es la indicada: "))
	if respuesta==3:
		print("Ha adivinado el numero.")
		exit()
	elif respuesta==2:
		print("El numero propuesto es menor que la respuesta ")
		return 1
	else:
		print("El numero propuesto es mayor que la respuesta ")
		return 1
	
def adivinanza():
	x=random()
	h=respuesta(x)
	
	while h!=0:
		y=random()
		h=respuesta(y)
	

adivinanza()
