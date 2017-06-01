
def ordenar(x,y,z):
	a1 = min(x, y, z)
	a3 = max(x, y, z)
	a2 = (x + y + z) - a1 - a3
	print("Numeros en orden:", a1, a2, a3)



x = int(input("Ingrese el primer numero: "))
y = int(input("Ingrese segundo numero: "))
z = int(input("Ingrese tercer numero: "))

ordenar(x,y,z)


