import requests as rq
from tkinter import *
import json
js = rq.get("http://localhost:3000/raw")

jsono = json.loads(js.text)
root = Tk()
root.pack_propagate(0)
root.title("Погода сейчас")
root.geometry("200x250")

up = Frame(root, bg="#ffb84d")
up2 = Frame(root, bg="#ffb84d")

up.pack(side=TOP, fill=X)
up2.pack(side=TOP, fill=X)

city = Label(up, font=("Calibri Bold", 12), text=f"Симферополь", bg="#ffb84d")
type_w = Label(up2, font=("Calibri", 12), text=jsono['description'], bg="#ffb84d")

temp = Label(root, font=("Calibri",64), text=jsono["temp"]+"°C")
d = Frame(root, bg="#ffb84d", width=200, height=64)


temp.pack()
type_w.pack()
city.pack(pady=0)
d.pack(expand=True)


root.mainloop()
