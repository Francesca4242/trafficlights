from flask import Flask, render_template, request
app = Flask("MyApp")
import serial
ser=serial.Serial('COM3', 9600)

@app.route("/clouds")
def clouds():
	return app.send_static_file('clouds.jpeg')

@app.route("/")
def traffic():
	return render_template ("traffic_light.html")

@app.route("/red")
def red():
	ser.write('1')
	return render_template ("traffic_light.html")

@app.route("/orange")
def orange():
	ser.write('2')
	return render_template ("traffic_light.html")

@app.route("/green")
def green():
	ser.write('3')
	return render_template ("traffic_light.html")
	

app.run(debug=False)