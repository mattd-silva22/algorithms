xfile=open("nono.txt")
conta=dict()
for linha in xfile:
    palas = linha.split()
    for pala in palas:
        conta[pala] = conta.get(pala,0)+1
mconta=None
mpala=None
for pala , cont in conta.items():
    if mconta is None or cont > mconta:
        mpala = pala
        mconta= cont
print(mpala , mconta)
