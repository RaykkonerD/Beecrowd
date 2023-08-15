peca1, nPecas1, valorUnit1 = input().split()
peca2, nPecas2, valorUnit2 = input().split()
valor1 = int(nPecas1) * float(valorUnit1)
valor2 = int(nPecas2) * float(valorUnit2)

valorTotal = valor1 + valor2

print('VALOR A PAGAR: R$ {:.2f}'.format(valorTotal))