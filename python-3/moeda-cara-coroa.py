import random
# 

y = int(input("quantas vezes voce quer jogar a moeda?"))
cara = 0
coroa = 0
total = []
cara_lista = []
coroa_lista = []
rcoroa = 0
rcara = 0
pca = None
pco = None
for x in range(y):
    x = random.randint(1, 2)
    if x == 1:
        cara += 1
        total.append("cara")

    else:
        coroa += 1
        total.append("coroa")
pca = cara / y * 100
pco = coroa / y * 100

for resultado in total:
    if resultado == "cara":
        rcara += 1
    else:
        cara_lista.append(rcara)
        rcara = 0
cara_lista.append(rcara)

for resultado in total:
    if resultado == "coroa":
        rcoroa += 1
    else:
        coroa_lista.append(rcoroa)
        rcoroa = 0
coroa_lista.append(rcoroa)

print("sequencia maxima de coroa")
print(max(coroa_lista))

print("sequencia maxima de cara")
print(max(cara_lista))

print("coroa: {0} em uma porcentagem de: {1} %" .format(coroa, pco))
print("cara: {0} em uma porcentagem de: {1} %" .format(cara, pca))


u = input("ver lista completa?: s/n")
if u == "s":
    print(total)
else:
    quit()
