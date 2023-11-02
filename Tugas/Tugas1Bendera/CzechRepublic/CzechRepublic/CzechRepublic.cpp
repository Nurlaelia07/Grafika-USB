#include <iostream>
#include <GL/freeglut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Mengatur ukuran tampilan menjadi 600 x 400.
    glViewport(0, 0, 600, 400);

    // Mengatur warna dan mulai menggambar segiempat pertama (putih).
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(0.0, 400.0);
    glVertex2f(600.0, 400.0);
    glVertex2f(600.0, 200.0);
    glVertex2f(0.0, 200.0);
    glEnd();

    // Mengatur warna dan menggambar segiempat kedua (merah).
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(0.0, 200.0);
    glVertex2f(600.0, 200.0);
    glVertex2f(600.0, 0.0);
    glVertex2f(0.0, 0.0);
    glEnd();

    // Mengatur warna dan menggambar segitiga (biru) di atas.
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0, 400.0);
    glVertex2f(300.0, 200.0);
    glVertex2f(0.0, 0.0);
    glEnd();

    glFlush();
}

void myinit() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glPointSize(2.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 600.0, 0.0, 400.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 400);
    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 600) / 2, (glutGet(GLUT_SCREEN_HEIGHT) - 400) / 2);
    glutCreateWindow("Bendera Crezch Republic");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
