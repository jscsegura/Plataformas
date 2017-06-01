
def PrimerYUltimo(a=[]):
	primer= a[0]
	ultimo = a[-1]
	o = [primer, ultimo]
	return o 
	



x = int(input("Ingrese el primer numero de lista: "))
y = int(input("Ingrese segundo numero de lista: "))
z = int(input("Ingrese tercer numero de lista: "))

a=[x,y,z]
b= PrimerYUltimo(a)
print(b)




