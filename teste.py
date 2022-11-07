answer = input("Qual é seu nome? ")
print(f"olá, {answer}")


from cs50 import get_int

# Solicitar x ao usuário
x = get_int("x:")

# Solicitar ao usuário y
y = get_int("y:")

# Executar adição
print(x + y)





# Solicitar x ao usuário
x = input("x:")

# Solicitar ao usuário y
y = input("y:")

# Executar adição
print(x + y)




# Solicitar x ao usuário
x = int(input( "x:" ))

# Solicitar ao usuário y
y = int(input ( "y:" ))

# Executar adição
print(x + y)





from cs50 import get_int

x = get_int("x:")
y = get_int("y:")

if x < y:
   print("x é menor que y")
elif x > y:
   print("x é maior que y")
else:
   print("x é igual a y")






from cs50 import get_string

s = get_string("Você concorda?")

if s == "Y" or s == "y":
   print("Concordo")
elif s == "N" or s == "n" :
   print("Não concordo.")





def main():
   for i in range(3):
      miau()

def miau():
   print("miau")

main()






def main():
   miau(3)
def miau(n):
   for i in range(n):
       print("miau")

main()

