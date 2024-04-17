# Practica-2-Taller-ICPC-UTN-2024---Soluciones
Resolucion de los ejercicios de la 2da practica del taller ICPC UTN 2024

## A - New Year and Hurry
El concurso tiene una duracion de 240 minutos (4 horas) y se necesitan k minutos para llegar a la fiesta. <br>
Haciendo la resta 240 - k obtenemos el tiempo restanta para realizar los ejercicios, finalmente con un while podemos ir restando el tiempo de resolucion de cada ejercios y obtener asi la cantidad de resoluciones

## B - Can I Square?
El objetivo basicamente es verificar si la suma de todos los baldes tiene como raiz cuadrada un numero entero. <br>
Primero se obtiene la suma S mediante un for, luego consideramos el caso borde donde S=1. <br>
Debido a las cotas del problema si S es cualquier otro numero podemos hacer un while hasta encontrar el techo T de la raiz de S, luego verificamos si T*T = S

## C - K-divisible Sum
Siendo S la suma de todo el arreglo, si la misma debe ser divisble por k entonces exite un numero c tal que S = c * k. <br>
Ademas como todos los a<sub>i</sub> $\geq$ 1 entonces S $\geq$ n. <br>
De esta manera tenemos que $c = \frac{n}{k} = \frac{n+k-1}{k}$ (esto sirve para redondear hacia arriba) <br>
Luego el elemento maximo de S sera $\frac{s}{n} = \frac{c \ast k}{n} = \frac{c \ast k+n-1}{n}$

## D - World Cup
Teniendo en cuenta las cotas del input basta con recorrer todas las puertas de manera ciclica hasta que alguna sea 0 y mostrar la posicion de la misma

## E - Traffic Light
El objetivo es encontrar la mayor distancia entre el color ingresado y la ultima luz verde <br>
Como el string s es circular se puede representar como una concatenacion consigo mismo de la forma string circulo = s+s, luego comenzamos a recorrer el string de forma inversa guardando la posicion del ultimo 'g' encontrado y quedandonos con el maximo de todas las restas de la forma pos-i donde pos es el indice del ultimo 'g' e i es un indice donde se ubica un color c. <br>
Tambien hay que tener en cuenta el caso borde donde c == 'g'

## F - Median Maximization
Dado los inputs n y k debemos encontra el median M <br>
Podemos considerar que del M para atras todas las posiciones se encuentran vacias por lo que tendriamo $m = \frac{n}{2} + 1$ numeros que tendran que ser al menos M <br>
Para cualquier n y k tenemos que $M \leq k$ por lo tanto podemos usar una binary search para encontrar el punto de corte donde $M \ast m \geq k\$ con el menor M posible <br>

## G - Sushi Tour
En este ejercicio simplemente hay que hacer un seguimiento de la cantidad de elementos seguidos de cada uno y quedarse con el mayor de los menores consecutivos
