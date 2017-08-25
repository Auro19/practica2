//Semestre 2017 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************      Reyes Aragon Aurora				******//
//************************************************************//
#include "Main.h"
void InitGL ( GLvoid )     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	//glClearDepth(1.0f);									// Configuramos Depth Buffer
	//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	
	
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

	//Poner aqui codigo ha dibujar
	//modificador para que los puntos se alcancen a ver
	// todos los puntos estan dentro de -10 a 10 definido en la vista ortogonal
	glPointSize(10.0f);  //tamaño de puntos
	// donde comienzo a dibujar y donde termino
	
	//CREA LA LETRA A
	glColor3f(1.0f, 0.0f, .0f);
	glBegin(GL_POLYGON);
	glVertex3f(-8.0f, -7.0f, -1.2f); //A
	glVertex3f(-7.0f, -7.0f, -1.2f); //B
	glVertex3f(-7.0f, -2.0f, -1.2f); //C
	glVertex3f(-8.0f, -1.0f, -1.2f); //D
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-8.0f, -1.0f, -1.2f); //D
	glVertex3f(-7.0f, -2.0f, -1.2f); //C
	glVertex3f(-5.0f, -2.0f, -1.2f); //F
	glVertex3f(-4.0f, -1.0f, -1.2f); //E
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(-4.0f, -1.0f, -1.2f); //E
	glVertex3f(-5.0f, -2.0f, -1.2f); //F
	glVertex3f(-5.0f, -7.0f, -1.2f); //G
	glVertex3f(-4.0f, -7.0f, -1.2f); //H
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(-7.0f, -5.0f, -1.2f); //I
	glVertex3f(-5.0f, -5.0f, -1.2f); //J
	glVertex3f(-5.0f, -4.0f, -1.2f); //K
	glVertex3f(-7.0f, -4.0f, -1.2f); //L
	glEnd();

	//CREA LA LETRA R 
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-2.0f, -1.0f, -1.2f); //A
	glVertex3f(-2.0f, -7.0f, -1.2f); //B
	glVertex3f(-1.0f, -7.0f, -1.2f); //C
	glVertex3f(-1.0f, -5.0f, -1.2f); //D
	glVertex3f(1.0f, -7.0f, -1.2f); //E
	glVertex3f(2.0f, -7.0f, -1.2f); //F 
	glVertex3f(-1.0f, -4.0f, -1.2f); //G  
	glVertex3f(2.0f, -4.0f, -1.2f); //H
	glVertex3f(2.0f, -1.0f, -1.2f); //I 
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex3f(-1.0f, -3.0f, -1.2f); //J
	glVertex3f(1.0f, -3.0f, -1.2f); //K
	glVertex3f(1.0f, -2.0f, -1.2f); //L
	glVertex3f(-1.0f, -2.0f, -1.2f); //M
	glEnd();

	//CREA LA LETRA A
	glColor3f(1.0f, 0.0f, .0f);
	glBegin(GL_POLYGON);
	glVertex3f(4.0f, -7.0f, -1.2f); //A
	glVertex3f(5.0f, -7.0f, -1.2f); //B
	glVertex3f(5.0f, -2.0f, -1.2f); //C
	glVertex3f(4.0f, -1.0f, -1.2f); //D
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(4.0f, -1.0f, -1.2f); //D
	glVertex3f(5.0f, -2.0f, -1.2f); //C
	glVertex3f(7.0f, -2.0f, -1.2f); //F
	glVertex3f(8.0f, -1.0f, -1.2f); //E
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(8.0f, -1.0f, -1.2f); //E
	glVertex3f(7.0f, -2.0f, -1.2f); //F
	glVertex3f(7.0f, -7.0f, -1.2f); //G
	glVertex3f(8.0f, -7.0f, -1.2f); //H
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(5.0f, -5.0f, -1.2f); //I
	glVertex3f(7.0f, -5.0f, -1.2f); //J
	glVertex3f(7.0f, -4.0f, -1.2f); //K
	glVertex3f(5.0f, -4.0f, -1.2f); //L
	glEnd();

	//Crea estrella
	glColor3f(0.0f, 1.0f, .0f);
	glBegin(GL_POLYGON);
	glVertex3f(0.0f, 3.0f, -1.2f); //A
	glVertex3f(2.0f, 5.0f, -1.2f); //B
	glVertex3f(1.0f, 7.0f, -1.2f); //C
	glVertex3f(-1.0f, 7.0f, -1.2f); //D
	glVertex3f(-2.0f, 5.0f, -1.2f); //E
	glEnd();

	//Crea punta 1 
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(0.0f, 3.0f, -1.2f); //A
	glVertex3f(3.0f, 2.0f, -1.2f); //I
	glVertex3f(2.0f, 5.0f, -1.2f); //B
	glEnd();

	//Crea punta dos
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(2.0f, 5.0f, -1.2f); //B
	glVertex3f(4.0f, 7.0f, -1.2f); //J
	glVertex3f(1.0f, 7.0f, -1.2f); //C
	glEnd();

	//Crea punta tres 
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(1.0f, 7.0f, -1.2f); //C
	glVertex3f(0.0f, 10.0f, -1.2f); //F
	glVertex3f(-1.0f, 7.0f, -1.2f); //D
	glEnd();
	
	//Crea punta cuatro 
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(-1.0f, 7.0f, -1.2f); //D
	glVertex3f(-4.0f, 7.0f, -1.2f); //G
	glVertex3f(-2.0f, 5.0f, -1.2f); //E
	glEnd();

	//Crea punta cinco 
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex3f(-2.0f, 5.0f, -1.2f); //E
	glVertex3f(-3.0f, 2.0f, -1.2f); //H
	glVertex3f(0.0f, 3.0f, -1.2f); //A
	glEnd();




	//Si quiero hacer otro dibujo necesita otro begin y end

	glFlush();
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
	if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();									//Matriz identidad para no modificar nada de lo anterior 

	// Ortogonal
	glOrtho(-10,15,-10,10,0.1,2);						//Puerto de vista orotgonal, limites superiores e inferiores (horizontal,vertical, profundidad)

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();									
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	 switch (key) 
	 {
		case 27: exit(0);
				 break;
	 }
	  glutPostRedisplay();
}    

int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitWindowSize  (500, 500);	// Tamaño de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 2"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc	  (keyboard);	//Indicamos a Glut función de manejo de teclado
  glutMainLoop        ( );          // 

  return 0;
}

