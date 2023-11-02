#include <iostream>
#include <GL/freeglut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Menampilkan bendera Polandia
    
    glColor3f(1.0, 1.0, 1.0); // Warna putih
    glBegin(GL_QUADS);
    glVertex2f(0.25, 0.5); // Titik sudut kiri atas
    glVertex2f(0.75, 0.5); // Titik sudut kanan atas
    glVertex2f(0.75, 0.95); // Titik sudut kanan bawah
    glVertex2f(0.25, 0.95); // Titik sudut kiri bawah
    glEnd();

    glColor3f(1.0, 0.0, 0.0); // Warna merah
    glBegin(GL_QUADS);
    glVertex2f(0.25, 0.05); // Titik sudut kiri bawah
    glVertex2f(0.75, 0.05); // Titik sudut kanan bawah
    glVertex2f(0.75, 0.5); // Titik sudut kanan atas
    glVertex2f(0.25, 0.5); // Titik sudut kiri atas
    glEnd();


    glFlush();
}

int main(int argc, char** argv) {
    // Inisialisasi GLUT
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Bendera Polandia");

    // Inisialisasi OpenGL
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glColor3f(0.0, 0.0, 0.0);
    glPointSize(2.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1.0, 0.0, 1.0);

    // Daftarkan fungsi display
    glutDisplayFunc(display);

    // Loop utama
    glutMainLoop();

    return 0;
}
