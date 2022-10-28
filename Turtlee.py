import turtle

t=turtle.Turtle()
s=turtle.Screen()

s.bgcolor("black")
t.speed(0)

for i in range(0,80):
    t.pencolor("#d17bed")
    t.backward(i+125) 
    
    t.left(90)

for i in range(80,0,-1):
    t.pencolor("#00BFFF")
    t.forward(i+125) 
    
    t.left(90)   

t.penup()
t.setposition(40,245)
t.left(135)
t.pendown()
t.pencolor("#00BFFF")
t.width(2)
t.forward(100)
t.left(45)
for i in range(0,4):
    t.width(4)
    t.forward(250)
    t.left(90)

t.penup ()
t.setposition(-110,178)
t.pendown()
t.width(0.5)
t.pencolor("#878d94")
for i in range(1,40):
    for i in range(0,3):
        t.forward(150)
        t.right(130)
    t.right(20)

t.penup()
t.setposition(42,-166)
t.pendown()
# t.right(180)
t.right(65)
t.pencolor("#d17bed")

t.width(2)
t.forward(100)
t.left(35)
for i in range(0,4):
    t.width(4)
    t.forward(250)
    
    t.left(90)

t.penup ()
t.setposition(200,-87)
t.pendown()
t.pencolor("#878d94")
t.width(0.5)
for i in range(1,40):
    for i in range(0,3):
        t.forward(150)
        t.right(130)
    t.right(20)

t.right(30)
t.penup()
t.setposition(40,-225)
t.pendown()
t.width(6)
t.pencolor("white")
t.forward(275)
t.right(90)
t.forward(250)

t.right(90)
t.penup()
t.setposition(40,-245)
t.pendown()
t.width(6)
t.backward(275)
t.left(90)
t.forward(250)

t.left(270)
t.penup()
t.setposition(40,300)
t.pendown()
# t.pencolor("#d17bed")
t.width(6)
t.forward(275)
t.right(90)
t.forward(250)

t.right(270)
t.penup()
t.setposition(40,320)
t.pendown()
t.width(6)
t.forward(275)
t.right(90)
t.forward(250)

t.penup()
t.pencolor("#ebc471")
t.setposition(450,350)
t.pendown()
for i in range(0,35):
    t.width(0.5)
    
    t.backward(i+30) 
    
    t.left(120)

t.penup()
t.setposition(525,300)
t.pendown()
for i in range(0,25):
    t.width(0.5)
    # t.pencolor("#d17bed")
    t.backward(i+30) 
    
    t.left(120)

t.penup()
t.setposition(625,350)
t.pendown()
for i in range(0,15):
    t.width(0.5)
    # t.pencolor("#d17bed")
    t.backward(i+30) 
    
    t.left(120)

t.penup()
t.setposition(700,300)
t.pendown()
for i in range(0,5):
    t.width(0.5)
    # t.pencolor("#d17bed")
    t.backward(i+30) 
    
    t.left(120)

t.penup()
t.setposition(-450,-275)
t.pendown()
for i in range(0,35):
    t.width(0.5)
    # t.pencolor("#d17bed")
    t.forward(i+30) 
    
    t.left(120)

t.penup()
t.setposition(-575,-350)
t.pendown()
for i in range(0,25):
    t.width(0.5)
    # t.pencolor("#d17bed")
    t.forward(i+30) 
    
    t.left(120)

t.penup()
t.setposition(-625,-275)
t.pendown()
for i in range(0,15):
    t.width(0.5)
    # t.pencolor("#d17bed")
    t.forward(i+30) 
    
    t.left(120)

t.penup()
t.setposition(-700,-350)
t.pendown()
for i in range(0,5):
    t.width(0.5)
    # t.pencolor("#d17bed")
    t.forward(i+30) 
    
    t.left(120)

turtle.done()
