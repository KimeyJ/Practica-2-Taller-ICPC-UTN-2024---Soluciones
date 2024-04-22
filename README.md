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

## H - Flower City Fence


## I - Points In Line
Siendo $nums$ el arreglo con las coordenadas de los distintos puntos y $d$ la distancia maxima <br>
Para encontrar la cantidad de trios que cumplen con la condicion basta con recorrer el array utilizando dos punteros $i$ y $j$, el primero manejado por un for y el segundo por un while. <br>
Siempre que $nums[i] - nums[j] > d$ el punto $j$ aumentara hasta que la diferencia sea menor a $d$. <br>
Cada vez que $nums[i] - nums[j] \leq d$ sumaremos a la respuesta la siguiente cuenta $(i-j)*(i-j-1)/2$, la misma representa la cantidad de trios que se pueden formar con los elementos entre $j$ e $i$

## J - Dungeon
Lo primero de lo que podemos darnos cuenta es que cada 7 turnos realizamos 9 de daño, por lo tanto, siendo $a$, $b$ y $c$ la vida de los 3 monstruos es necesario que $\frac{a+b+c}{9} = k$ siendo $k$ un numero entero, en otras palabras el resto de dividir por 9 la vida de los 3 monstruos debe ser igual a 0. <br>
Sin embargo, tambien es necesario que la vida individual de cada uno de ellos sea al menos $k$ ya que cada uno de ellos va a recibir $k$ puntos de daño.

## K - Poisoned Dagger
Debemos encontrar el menor numero $k$ de veneno que nos permita matar a un dragon con vida $h$ atacando $n$ veces. <br>
Los ataques suceden en segundo especificos denominados $s_i$. <br>
Para encontrar el valor de $k$ debemos realizar una busqueda binaria con valores iniciales $a = -1$ y $b = 1e18$, ademas debemos declarar una variable $suma = 0$ <br>
En cada iteracion calcularemos $m = (a+b)/2$ y haremos $suma = m$ ya que despues del ultimo ataque el veneno se aplica durante el total de su duracion. Luego, añadiremos a la suma el minimo entre entre $m$ o el intervalo entre segundos, es decir: $suma += min(m,s_i - s_{i-1}$ para todos los $n$ ataques. <br> 
Si despues de terminar esta operacion tenemos que $suma \geq h \implies b = m$ <br>
Por otro lado, si tenemos que $suma < h \implies a = m$

## L - Binary Deque
Dada una suma $S$ y un array de longitud $n$ compuesto solamente de 0 y 1 debemos encontrar la menor cantidad de elementos a revomer para hacer que la suma suma total del array sea igual a $S$. <br>
Lo primero que podemos es hacer es comprobar si la suma entera del array (a la cual llamaremos $Sum$) es menor a $S$, si esto sucede es implosible conseguir la suma por lo que la salida sera $-1$ <br>
Por el otro lado si se da que $Sum = S$ entonces la salida sera directamente $0$ ya que no sera necesario realizar ningun movimiento <br>
Descartadas estas dos situaciones, para poder conocer la cantidad minima de movimientos deberemos recorrer todo el array llevando dos punteros $a=0$ y $b=0$, ademas, a partir de ahora $Sum$ sera solo la suma de los elementos entre $a$ y $b$ (incluidos) <br>
El puntero $b$ se movera hacia adelante si sucede que $Sum = S$ y el puntero $a$ en el caso de que $Sum > S$. Cada vez que se mueva el puntero $b$ debemos hacer lo siguiente $max(ans,b-a+1)$, con esto lo que hacemos es quedarnos siempre con la mayor cantidad de elementos encontrados en un intervalo donde $Sum = S$ <br>
Finalmente la respuesta sera $resp = n - ans$.

## M - Building An Aquarium
El objetivo del ejercicio es construir un acuario con la mayor altura posible dadas las alturas de los corales dentro del mismo y la cantidad maxima de agua que podemos utilizar. <br>
Sea $alt_i$ la altura de cada coral $a_i$ y $h$ la altura del acuario entonces el agua que se utiliza en cada coral es $w_i = h - alt_i$ siempre que $h-alt_i > 0$ <br>
Para encontrar el h maximo vamos a realizar una busqueda binaria con valores iniciales talque $a=-1$ y $b=1e10$, ademas vamos a declarar una variable suma que va a ser igual a $$\mathrm{suma} = \sum_{i=0}^{n} medio-alt_i$$ siempre que $medio - alt_i > 0$ <br>
Si resulta que $suma = W$ siendo W la cantidad maxima que se puede utilizar utilizar de agua entonces la busqueda binaria termina y retorna el valor de medio <br>
Si resulta que $suma > W \implies b = medio$, si por el contrario $suma < W \implies a = medio$

## N - Fibonaccharsis
Dados dos integers n y k debemos encontrar la cantidad de secuencias de estilo fibonacci que tengan al numero n en la posicion k <br>
La secuencia original de fibonacci es una secuencia de la forma $f_i = f_{i-1} + f_{i-2}$ con $f_0 = 0$ y $f_1 = 1$ <br>
Quitando el caso donde $f_0 = 0$ y $f_1 = 0$ se tiene que para todo $k \geq 7 \implies n > k$ para cualquier $f_0$ y $f_1$ <br>
Otra propiedad a tener en cuenta es que todos los numeros de la secuencia son positivos por lo tanto $f_{i+1} \geq f_i$ para todo i <br>
Con todo esto en mente podemos partir de fijar n en la posicion k e ir probando todos los numeros x tales que $x \leq n$ y verificar si conforman una secuencia validad <br>
Para esto vamos declarar una variable $fst = x$ y otra $snd = n$, luego vamos a utilizar una variable auxiliar $aux$ para realizar lo siguiente $$aux = fst$$ $$fst = snd - aux$$ $$snd = aux$$ <br>
Con esto lo que hacemos es calcular la secuencia de forma inversa, es decir, desde la posicion $k$ hasta las dos primeras posiciones y como ya se establecio antes si la secuencia es validad no puede suceder que $fst > snd$ ni que $fst < 0$ o $snd < 0$
