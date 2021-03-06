// PlantillaGraficos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

#include <math.h>

using namespace std;

void dibujarPoligono() {
	glBegin(GL_POLYGON);

	glColor3f(0.4f, 0.4f, 0.9f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 0.5f, 0.0f);
	glVertex3f(0.2f, 0.3f, 0.0f);
	glVertex3f(0.6, -0.4f, 0.0f);
	glVertex3f(0.4f, -0.6f, 0.0f);

	glEnd();
}

/*void dibujarTrianguloContinuo() {
	glBegin(GL_TRIANGLE_STRIP);

	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.1f, 0.1f, 0.0f);
	glVertex3f(0.2f, 0.0f, 0.0f);

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(0.2f, 0.15f, 0.0f);

	glEnd();
}*/


void dibujarLineaContinua() {
	glBegin(GL_LINE_STRIP);
	glColor3f(0.17f, 0.38f, 0.21f);

	glVertex3f(-0.5f, -0.8f, 0.0f);
	glVertex3f(-0.4f, -0.9f, 0.0f);
	glVertex3f(-0.3f, -0.8f, 0.0f);
	glEnd();
}

/*void dibujarLineas() {
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.4f, 0.6f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.2f, -0.4f, 0.0f);

	glVertex3f(-0.3f, 0.1f, 0.0f);
	glVertex3f(-0.3f, -0.4f, 0.0f);

	glEnd();
}*/

void dibujarTriangulos() {
	//Establecemos el tipo de primitiva
	glBegin(GL_TRIANGLES);
	//Establecemos color
			/*glColor3f(1.0f, 0.0f, 0.0f);*/
	//Enviar vertices
			/*glVertex3f(0.0f, 0.7f, 0.0f);
			glColor3f(0.0f, 1.0f, 0.0f);
			glVertex3f(-0.7f, -0.7f, 0.0f);
			glColor3f(0.0f, 0.0f, 1.0f);
			glVertex3f(0.7f, -0.7f, 0.0f);*/
			//Especificar que dejaremos de dibujar

			//cesped
	glColor3f(0.26f, 0.68f, 0.13f);

	glVertex3f(-1.0f, -0.6f, 0.0f);
	glVertex3f(1.0f, -0.6f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);

	glVertex3f(-1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, -0.6f, 0.0f);

	//casa
	glColor3f(0.73f, 0.4f, 0.06f);

	glVertex3f(-0.2f, 0.2f, 0.0f);
	glVertex3f(0.7f, 0.2f, 0.0f);
	glVertex3f(0.7f, -0.7f, 0.0f);

	glVertex3f(-0.2f, 0.2f, 0.0f);
	glVertex3f(-0.2f, -0.7f, 0.0f);
	glVertex3f(0.7f, -0.7f, 0.0f);


	//ventana
	glColor3f(0.69f, 0.88f, 0.96f);

	glVertex3f(-0.13f, 0.13f, 0.0f);
	glVertex3f(0.13f, 0.13f, 0.0f);
	glVertex3f(0.13f, -0.13f, 0.0f);

	glVertex3f(-0.13f, 0.13f, 0.0f);
	glVertex3f(-0.13f, -0.13f, 0.0f);
	glVertex3f(0.13f, -0.13f, 0.0f);

	//puerta
	glColor3f(0.81f, 0.78f, 0.69f);

	glVertex3f(0.25f, -0.25f, 0.0f);
	glVertex3f(0.6f, -0.25f, 0.0f);
	glVertex3f(0.6f, -0.7f, 0.0f);

	glVertex3f(0.25f, -0.25f, 0.0f);
	glVertex3f(0.25f, -0.7f, 0.0f);
	glVertex3f(0.6f, -0.7f, 0.0f);

	//techo
	glColor3f(0.62f, 0.25f, 0.07f);

	glVertex3f(0.3f, 0.7f, 0.0f);
	glVertex3f(-0.4f, 0.2f, 0.0f);
	glVertex3f(0.9f, 0.2f, 0.0f);

	//tronco
	glColor3f(0.59f, 0.32f, 0.2f);

	glVertex3f(-0.75f, -0.25f, 0.0f);
	glVertex3f(-0.60f, -0.25f, 0.0f);
	glVertex3f(-0.60f, -0.7f, 0.0f);

	glVertex3f(-0.75f, -0.25f, 0.0f);
	glVertex3f(-0.75f, -0.7f, 0.0f);
	glVertex3f(-0.6f, -0.7f, 0.0f);

	glEnd();
}

void dibujarCirculo() {

	//sol
	glBegin(GL_POLYGON);
	glColor3f(0.94f, 0.82f, 0.06f);
	for (double i = 0; i < 360.0; i += 5.0) {
		glVertex3f(
			(0.15 * cos(i * 3.14159 / 180.0)) - 0.7, //tamaño X y offset X
			(0.15 * sin(i * 3.14159 / 180.0)) + 0.7, //tamaño Y y offset Y
			0.0f);
	}
	glEnd();

	//nubes
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	for (double i = 0; i < 360.0; i += 5.0) {
		glVertex3f(
			(0.1 * cos(i * 3.14159 / 180.0)) - 0.2, //tamaño X y offset X
			(0.05 * sin(i * 3.14159 / 180.0)) + 0.7, //tamaño Y y offset Y
			0.0f);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	for (double i = 0; i < 360.0; i += 5.0) {
		glVertex3f(
			(0.1 * cos(i * 3.14159 / 180.0)) - 0.1, //tamaño X y offset X
			(0.05 * sin(i * 3.14159 / 180.0)) + 0.75, //tamaño Y y offset Y
			0.0f);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	for (double i = 0; i < 360.0; i += 5.0) {
		glVertex3f(
			(0.1 * cos(i * 3.14159 / 180.0)) - (-0.6), //tamaño X y offset X
			(0.05 * sin(i * 3.14159 / 180.0)) + 0.8, //tamaño Y y offset Y
			0.0f);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	for (double i = 0; i < 360.0; i += 5.0) {
		glVertex3f(
			(0.1 * cos(i * 3.14159 / 180.0)) - (-0.7), //tamaño X y offset X
			(0.05 * sin(i * 3.14159 / 180.0)) + 0.85, //tamaño Y y offset Y
			0.0f);
	}
	glEnd();

	//perilla
	glBegin(GL_POLYGON);
	glColor3f(0.62f, 0.25f, 0.07f);
	for (double i = 0; i < 360.0; i += 5.0) {
		glVertex3f(
			(0.05 * cos(i * 3.14159 / 180.0)) - (-0.55), //tamaño X y offset X
			(0.05 * sin(i * 3.14159 / 180.0)) + (-0.5), //tamaño Y y offset Y
			0.0f);
	}
	glEnd();

	//arbolito
	glBegin(GL_POLYGON);
	glColor3f(0.26f, 0.68f, 0.13f);
	for (double i = 0; i < 360.0; i += 5.0) {
		glVertex3f(
			(0.14 * cos(i * 3.14159 / 180.0)) - 0.75, //tamaño X y offset X
			(0.17 * sin(i * 3.14159 / 180.0)) + (-0.2), //tamaño Y y offset Y
			0.0f);
	}
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.26f, 0.68f, 0.13f);
	for (double i = 0; i < 360.0; i += 5.0) {
		glVertex3f(
			(0.14 * cos(i * 3.14159 / 180.0)) - 0.60, //tamaño X y offset X
			(0.17 * sin(i * 3.14159 / 180.0)) + (-0.079), //tamaño Y y offset Y
			0.0f);
	}
	glEnd();
}

void dibujarLineas() {
	glBegin(GL_LINES);
	//ventana afuera
	glColor3f(0.16f, 0.08f, 0.03f);


	glVertex3f(0.13f, -0.13f, 0.0f);
	glVertex3f(-0.13f, -0.13f, 0.0f);

	glVertex3f(-0.13f, -0.13f, 0.0f);
	glVertex3f(-0.13f, 0.13f, 0.0f);

	glVertex3f(-0.13f, 0.13f, 0.0f);
	glVertex3f(0.13f, 0.13f, 0.0f);

	glVertex3f(0.13f, 0.13f, 0.0f);
	glVertex3f(0.13f, -0.13f, 0.0f);


	//ventana
	glVertex3f(0.13f, 0.0f, 0.0f);
	glVertex3f(-0.13f, 0.0f, 0.0f);

	glVertex3f(0.0f, 0.13f, 0.0f);
	glVertex3f(0.0f, -0.13f, 0.0f);


	//solecito
	glColor3f(0.94f, 0.82f, 0.06f);
	glVertex3f(-0.5f, 0.8f, 0.0f);
	glVertex3f(-0.4f, 0.85f, 0.0f);

	glVertex3f(-0.5f, 0.9f, 0.0f);
	glVertex3f(-0.55f, 0.85f, 0.0f);

	glVertex3f(-0.48f, 0.7f, 0.0f);
	glVertex3f(-0.4f, 0.7f, 0.0f);

	glVertex3f(-0.5f, 0.6f, 0.0f);
	glVertex3f(-0.4f, 0.55f, 0.0f);

	glVertex3f(-0.55f, 0.55f, 0.0f);
	glVertex3f(-0.48f, 0.45f, 0.0f);

	glVertex3f(-0.6f, 0.48f, 0.0f);
	glVertex3f(-0.55f, 0.4f, 0.0f);

	glVertex3f(-0.7f, 0.48f, 0.0f);
	glVertex3f(-0.7f, 0.37f, 0.0f);

	glVertex3f(-0.8f, 0.5f, 0.0f);
	glVertex3f(-0.85f, 0.42f, 0.0f);

	glVertex3f(-0.88f, 0.55f, 0.0f);
	glVertex3f(-0.95f, 0.45f, 0.0f);

	glVertex3f(-0.9f, 0.6f, 0.0f);
	glVertex3f(-0.95f, 0.58f, 0.0f);

	glVertex3f(-1.0f, 0.7f, 0.0f);
	glVertex3f(-0.92f, 0.7f, 0.0f);

	glVertex3f(-0.9f, 0.78f, 0.0f);
	glVertex3f(-0.98f, 0.82f, 0.0f);

	glVertex3f(-0.88f, 0.82f, 0.0f);
	glVertex3f(-0.94f, 0.88f, 0.0f);

	glVertex3f(-0.82f, 0.88f, 0.0f);
	glVertex3f(-0.9f, 0.94f, 0.0f);

	glVertex3f(-0.76f, 0.90f, 0.0f);
	glVertex3f(-0.82f, 0.96f, 0.0f);

	glVertex3f(-0.7f, 0.92f, 0.0f);
	glVertex3f(-0.7f, 0.98f, 0.0f);

	glVertex3f(-0.62f, 0.90f, 0.0f);
	glVertex3f(-0.58f, 0.98f, 0.0f);

	glEnd();
}

void dibujar() {
	dibujarTriangulos();
	dibujarCirculo();
	dibujarLineas();
	dibujarLineaContinua();
}

int main()
{
	//Declarar una ventana
	GLFWwindow* window;

	//Si no se pudo iniciar GLFW terminamos ejecucion
	if (!glfwInit())
	{
		exit(EXIT_FAILURE);
	}
	//Si se pudo iniciar GLFW, inicializamos la ventana
	window = glfwCreateWindow(600, 600, "Ventana", NULL, NULL);
	//Si no se pudo crear la ventana, terminamos la ejecucion
	if (!window)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	//Establecemos la ventana como contexto
	glfwMakeContextCurrent(window);

	//Una vez establecido el contexto se activan las funciones "modernas" (gpu)
	glewExperimental = true;

	GLenum errores = glewInit();
	if (errores != GLEW_OK) {
		glewGetErrorString(errores);
	}

	const GLubyte* versionGL = glGetString(GL_VERSION);
	cout << "Version OpenGL: " << versionGL;

	//Ciclo de dibujo (Draw loop)
	while (!glfwWindowShouldClose(window))
	{
		//Establecer region de dibujo
		glViewport(0, 0, 600, 600);
		//Establecemos el color de borrado
		//Valores RGBA
		glClearColor(0.49, 0.81, 0.93, 1);
		//Borrar
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		//Actualizar valores y dibujar
		dibujar();

		glfwPollEvents();
		glfwSwapBuffers(window);
	}
	//Despues del ciclo de dibujo, eliminamos ventana y procesos de glfw
	glfwDestroyWindow(window);
	glfwTerminate();
}