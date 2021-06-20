import turtle
turtle.speed(0)
def corona(color):
	import turtle
	trt = turtle.Turtle()
	scr = turtle.Screen()
	scr.bgcolor('black')   
	trt.speed(0)  
	scr.title('Corona virus Structure')
	trt.color(color)
	for x in range(210):
	    if x in range(50):
	        trt.hideturtle()
	    else:
	        trt.forward(10+x)
	        trt.left(x)      
corona('white')
turtle.forward(50)
corona('green')
turtle.forward(50)
corona('red')
turtle.done()
