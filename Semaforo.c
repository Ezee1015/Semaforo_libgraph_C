#include <stdio.h>
#include <graphics.h>

void Estructura_Semaforo () {
    cleardevice(); // LIMPIA LA PANTALLA
    setcolor(15);
    line(250,100,400,100); // DIBUJA LA ESTRUCTURA
    line(250,400,250,100);
    line(250,400,400,400);
    line(400,100,400,400);
    circle(325, 160, 40); // DIBUJA LOS BORDES DE LAS LUCES
    circle(325, 250, 40);
    circle(325, 340, 40);
}

void Luz_Activa_Semaforo (int x, int y, int Color) {
    int i;
    for(i=40;i>0;i--) {
        setcolor(Color); // DECLARA EL COLOR DE LA LUZ
        circle(x, y, i); // DIBUJA LA LUZ DEL SEMAFORO
    }
}

void main () {
    int gd = DETECT,gm,left=100,top=100,right=200,bottom=200,x= 300,y=150,radius=50;
    initgraph(&gd,&gm,NULL);
    
    while (1!=0) {
        
        Estructura_Semaforo ();
        Luz_Activa_Semaforo(325, 160, 4 ); //ROJO
        delay(3000);
        
        Estructura_Semaforo ();
        Luz_Activa_Semaforo(325, 250, 14); //AMARILLO
        delay(2000);
        
        Estructura_Semaforo ();
        Luz_Activa_Semaforo(325, 340, 10); //VERDE
        delay(4000);
        
        Estructura_Semaforo ();
        Luz_Activa_Semaforo(325,250, 14); //AMARILLO
        delay(2000);
    }
   closegraph();
}
