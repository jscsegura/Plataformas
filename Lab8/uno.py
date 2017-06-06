
def ordenar(x,y,z):
	a1 = min(x, y, z)
	a3 = max(x, y, z)
	a2 = (x + y + z) - a1 - a3
	print("El numero mayor es:", a3)
	print("El numero menor es:", a1)



x = int(input("Ingrese el primer numero: "))
y = int(input("Ingrese segundo numero: "))
z = int(input("Ingrese tercer numero: "))

ordenar(x,y,z)
