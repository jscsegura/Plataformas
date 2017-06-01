

def Divisores(numero):

	print("Divisores:")
	divisor = 0
	if numero % 2 == 0:
	    iterar = numero / 2
	else:
	    iterar = (numero - 1) / 2
	
	for i in range(1, int(iterar) + 1):
	    if numero % i == 0:
	        aux = numero / i
	        if aux != divisor:
	            divisor = aux
	        if i == iterar:
	            print(int(divisor), end = "")
	        else:
	            print("%d," % (divisor), end = "")

numero = int(input("Ingrese un numero: "))

Divisores(numero)
