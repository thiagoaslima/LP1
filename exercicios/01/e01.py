# -*- coding: utf-8 -*-

n1 = input("digite o primeiro número: ")
n2 = input("digite o segundo número: ")

if (n1 == n2):
    print("Você escolheu o número " + str(n1) + " duas vezes.")
else: 
    maior = n1 if n1 > n2 else n2
    menor = n1 if n1 < n2 else n2 

    print("Você escolheu os números " + str(menor) + " e " + str(maior) + ".")
        
    if (maior == menor + 2):
        print("Entre eles existe o número " + str(menor + 1))
    elif (maior > menor + 2):
        print("Entre eles existem os números: " + str(menor + 1)),
        menor = menor + 2
        while(maior > menor):
            print(", " + str(menor)),
            menor += 1
        print (".")
    