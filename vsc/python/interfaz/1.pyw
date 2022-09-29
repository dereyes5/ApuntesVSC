from tkinter import *
raiz = Tk()
raiz.title("Primera interfaz")
#raiz.resizable(False, False) #ancho,alto
raiz.iconbitmap("python.ico")
#raiz.geometry("650x350") #ancho x alto
raiz.config(bg="#9feff4")
frame = Frame()
frame.pack(fill="both", expand=True) #side="left", anchor="n", expand="True"
frame.config(bg="red")
frame.config(width="650", height="350")
frame.config(bd=20)
frame.config(relief="groove")
#frame.config(cursor="hand2")
raiz.mainloop()