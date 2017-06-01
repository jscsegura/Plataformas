def random():
	from random import randint	
	x=randint(0,50)
	return x

def obtenerInt():
	y = int(input("Ingrese su adivinanza: "))
	return y

def respuesta(respuesta,intento):
	if respuesta==intento:
		print("Ha adivinado el numero. ")
		exit()
	elif respuesta > intento:
		print("El numero ingresado es menor que la respuesta ")
		return 1
	else:
		print("El numero ingresado es mayor que la respuesta ")
		return 1
	
def adivinanza():
	x=random()
	y=obtenerInt()
	h=respuesta(x,y)
	
	while h!=0:
		y=obtenerInt()
		h=respuesta(x,y)

	





adivinanza()
