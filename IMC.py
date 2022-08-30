import os
 
altura = float(input("Digite sua altura em metros: "))
peso = float(input("Digite seu peso em Kg: "))
 
imc = peso / altura**2
 
print("Seu IMC é: %.4f" % imc)
 

if imc < 18.5:
	print("Magro")
elif imc < 25:
	print("Peso Normal")
elif imc < 30:
	print("Sobrepeso")
else:
	print("Obeso")

 
os.system("pause")
