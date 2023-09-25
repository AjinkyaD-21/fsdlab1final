from tkinter import *
root=Tk() 
frm1=Frame(root) 
frm1.pack(side=LEFT) 

frm2=Frame(root)
frm2.pack(side=RIGHT)

b1=Button(frm1,text="Click Here",fg="RED")
b2=Button(frm2,text="Press on this",fg="BLUE")


b1.pack()
b2.pack()
root.mainloop()