from cs50 import get_string

print("hello, world")




answer = get_string("Qual o seu nome? ")
print("ola, " + answer)



from PIL import Image, ImageFilter

before = Image.open("bridge.bmp")
after = before.filter(ImageFilter.BoxBlur(1))
after.save("out.bmp")



