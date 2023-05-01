import turtle

# Create a turtle object
devil_turtle = turtle.Turtle()

# Draw the head
devil_turtle.circle(50)

# Draw the horns
devil_turtle.penup()
devil_turtle.goto(-40, 90)
devil_turtle.pendown()
devil_turtle.setheading(225)
devil_turtle.circle(40, -90)
devil_turtle.setheading(135)
devil_turtle.circle(40, -90)

# Draw the eyes
devil_turtle.penup()
devil_turtle.goto(-20, 30)
devil_turtle.pendown()
devil_turtle.dot(10)
devil_turtle.penup()
devil_turtle.goto(20, 30)
devil_turtle.pendown()
devil_turtle.dot(10)

# Draw the mouth
devil_turtle.penup()
devil_turtle.goto(-25, 0)
devil_turtle.pendown()
devil_turtle.circle(25, 180)

# Draw the pitchfork
devil_turtle.penup()
devil_turtle.goto(-60, -60)
devil_turtle.pendown()
devil_turtle.setheading(60)
devil_turtle.forward(100)
devil_turtle.setheading(0)
devil_turtle.forward(30)
devil_turtle.setheading(30)
devil_turtle.forward(30)
devil_turtle.setheading(180)
devil_turtle.forward(30)
devil_turtle.setheading(210)
devil_turtle.forward(30)
devil_turtle.setheading(90)
devil_turtle.forward(30)

# Hide the turtle
devil_turtle.hideturtle()

# Close the turtle graphics window
turtle.done()