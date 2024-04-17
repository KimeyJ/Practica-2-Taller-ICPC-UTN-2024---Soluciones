# Practica-2-Taller-ICPC-UTN-2024---Soluciones
Resolucion de los ejercicios de la 2da practica del taller ICPC UTN 2024

## A - New Year and Hurry
El concurso tiene una duracion de 240 minutos (4 horas) y se necesitan k minutos para llegar a la fiesta.
Haciendo la resta 240 - k obtenemos el tiempo restanta para realizar los ejercicios, finalmente con un while podemos ir restando el tiempo de resolucion de cada ejercios y obtener asi la cantidad de resoluciones

## B - Can I Square?
El objetivo basicamente es verificar si la suma de todos los baldes tiene como raiz cuadrada un numero entero.
Primero se obtiene la suma S mediante un for, luego consideramos el caso base donde S=1.
Debido a las cotas del problema si S es cualquier otro numero podemos hacer un while hasta encontrar el techo T de la raiz de S, luego verificamos si T*T = S

## C - K-divisible Sum
Siendo S la suma de todo el arreglo, si la misma debe ser divisble por k entonces exite un numero c tal que S = c * k.
Ademas como todos los a<sub>i</sub> $\geq$ 1 entonces S $\geq$ n.
De esta manera tenemos que $c = \frac{n}{k} = \frac{n+k-1}{k}$ (esto sirve para redondear hacia arriba)
Luego el elemento maximo de S sera $\frac{s}{n} = \frac{c \ast k}{n} = \frac{c \ast k+n-1}{n}$

## D - World Cup

