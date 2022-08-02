/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:09:11 by drobles           #+#    #+#             */
/*   Updated: 2022/08/02 11:55:50 by drobles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	/*char 	**nueva;
	int		i;

	i = 0;
	ft_calloc;
	ft_strjoin;
	ft_strlen;
	nueva = ft_calloc (sizeof(char) * ft_strlen(s) + 1, );
	if (nueva == NULL)
		return (NULL);
	while (s[i] != c)
		i++;
	nueva = ft_strtim(s, c);
}*/
int	word_count(char const *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s && s[i])
	{
		if (s[i] != c)
			i++;
		else if (s[i] = c)
		{
			j++;
			i++;
		}
	}	
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**nueva;
	int 	wn;
	
	wn = word_count(s, c)
	nueva = (char **) malloc(sizeof(char *) * (wn + 1));
	if (!nueva)
		return (NULL);












	return (nueva);
}
static int			ft_countword(char const *s, char c)
{
	unsigned int	i; // usaremos la variable 'i' para movernos por la cadena. Servira de contador.
	int				    words; // esta variable servirá para contar las palabras de la cadena

	i = 0;
	words = 0;
	while (s[i]) // Mientras que haya contenido en la cadena debe de entrar en el bucle
	{
		while (s[i] == c) // Mientras el contenido de la cadena sea igual a char c
			i++; // que avance posiciones para no tenerlo en cuenta y empezar mas adelante. Aqí lo que hace al comenzar mas adelante es eliminar de la cadena ese caracter.
		if (s[i] != '\0') // Si llega a esta linea es porque ha salido del bucle por lo que quiere decir que el contenido de la cadena ya no es igual a 'c'.  Si cuando nuestro ciclo salio de encontrar caracteres c, no hemos llegado al final de la cadena dada, significa que ha encontrado una nueva palabra y por lo tanto aumentamos cntr +1.
			words++; 
		while (s[i] && (s[i] != c)) // Pasamos a otro bucle while que avanza sobre todos los caracteres de nuestra palabra hasta que encontra otro caracter de c. Si encontramos uno y no hemos llegado al final de nuestra cadena, comenzamos elciclo nuevamente y continuamos hasta llegar al final, contando todas las palabras en el camino.
			i++; //
	}
	return (words); // Luego devolvemos la variable 'words' que nos dirá cuántas palabras existen en nuestra cadena.
}

static char			*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

static char			*ft_wordcopy(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (!str)
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char				**ft_split(char const *s, char c)
{
/*Comenzamos creando tres variables de contador. Utilizaremos estas tres
variables para identificar las posiciones de índice dentro de nuestra cadena
de parámetros. También creamos una variable de tipo char **tab. Esta variable es
para nuestra tabla que contendrá nuestras cadenas divididas. Establecemos las
variables i y k en 0 y luego asignamos memoria para nuestra tabla. Aquí es
donde usamos nuestra función ft_cntwrd anterior, para calcular cuánto espacio
necesitamos asignar a nuestra tabla. Si la asignación falla, devolvemos un NULL.*/
	int		i; // contador para avanzar a lo largo de *s
	int		j; // inicio de la cadena
	int		k; // contador de tab
	char	**tab;

	if (!s) // Si no nos pasan cadena entonces devuelvo NULL. Para que hacer trabajar a la funcion? es tonteria
		return (NULL);
	i = 0;
	k = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_countword(s, c)) + 1))) // Reservo memoria para la cadena que va a devolcer. Necesito calcular el tamaño ya que no lo se. Aquí entra en escena la primera de las funciones externas que calcula el tamaño >> ft-countwords <<. 
		return (NULL); // Para ahorrar lineas de codigo, he puesto un if con una exclamacion en la linea anterior justo antes de reservar memoria. Con esto estoy diciendo que si falla la asignacion devuelva NULL.
	{
		while (s[i] == c) // bucle para pasar sobre todos los caracteres del parámetro c que existen. Esto se detendrá cuando alcancemos nuestro primer carácter no c.
			i++;
		j = i; // establecemos nuestra variable j igual al valor de i. j se usará para señalar la posición inicial del índice de nuestra primera palabra dentro de nuestra cadena s
		while (s[i] && s[i] != c) // continuamos moviéndonos a través de la cadena s siempre y cuando no haya llegado al final y no encontremos nuestro carácter de parámetro c. Una vez que lo encuentra, pasamos a nuestra declaración if
			i++;
		if (i > j) // si i es mayor que j significa que ha econtrado una nueva palabra. Si 'i' fuera igual que 'j' significa que NO hay una palabra que devolver, sino una letra unicamnete, o que estaos en el final de la cadena. AQUI i TIENE EL VALOR DEL FINAL DE LA PALABRA ENCONTRADA.
		{
			tab[k++] = ft_wordcopy(s + j, i - j); // Colocamos esa palabra en la posicion 0 de nuestra tabla. Lo hacemos utilizando la funcion ft_wordcopy(cadena s en la posicion de comienzo [j], tamaño de la palabra restando i de la posicion de inicio.) // Incrementamos 'k' para pasar a la siguiente posicion de nuestra tabla de palabras donde guardaremos la siguiente palabra.
		}
	}
	tab[k] = NULL; // Si ha salido del bucle es porque esta en el final y por lo tanto debo de poner caracter NULL porque así lo pide el ejercicio.
	return (tab); // devuelvo la nueva tabla  que contiene todas las cadenas separadas.
}