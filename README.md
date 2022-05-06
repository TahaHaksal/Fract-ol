# Fract-ol
A program that shows a handful of different fractal examples that you can zoom in and out.

Allowed Functions:
	-open,
	-close,
	-read,
	-write,
	-malloc,
	-free,
	-perror,
	-strerror,
	-exit,
	-All functions included the math library,
	-All functions included in the MiniLibX,
	-printf.

Description:
	Write a program that takes a fractal set as input and draw it in a window.

Requirements:
	-Program must offer at least the Julia set and the Mandelbrot set,
	-The mouse wheel zooms in and out, almost infinitely(within the limits of the computer),
	-You must be able to create different Julia sets by passing different parameters to the program,
	-A parameter is passed on the command line to define what type of fractal will be displayed in a window,
	-If no parameter is passed or the parameter is invalid, the program displays a list of available parameters and exits properly,
	-You must use at least a few colors to show the depth of each fractal,
	-Your program has to display the image in a window,
	-Pressing ESC must close the window and quit the program properly,
	-Clicking on the x on the window frame must close the window and quit the program properly.

Goal of the project:
	-Teaching about fractals and how they work,
	-Getting accustomed with trgb values and making use of a buffer window,
	-Getting accustomed with using a graphical engine to create a window and displaying an image,
	-Using the math library functions.

Usage:
	-Press Esc or click on the x on the window frame to close the program,
	-Use Mouse Wheel Up/Down to zoom in/out,
	-Press C to change colors,
	-Use arrow keys to slide the image,
	-Use provided parameters,
	-Have fun :)
