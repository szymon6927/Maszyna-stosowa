##**Maszyna stosowa**

#Napisz program wykonujący następujące operacje na stosie liczb całkowitych. Stos powinien być zaimplementowany jako lista 
#jednokierunkowa.

liczba - włożenie na stos danej liczby
-p \*- wypisanie stosu (od wierzchołka do spodu)\*
-s \*- zamiana miejscami dwóch liczb na szczycie stosu\*
-x \*- usunięcie elementu ze szczytu stosu\*
-+ \*- zdjęcie dwóch liczb ze stosu i włożenie na stos ich sumy\*
-r \*- zdjęcie ze stosu liczby n, przeniesienie liczby z wierzchołka stosu na n-te miejsce licząc od wierzchołka; 0 r oraz 1 r nic nie robi, 2 r jest tożsame z s, 3 r zamienia 3 2 1 na 2 1 3 itd.\*
-q \*- zakończenie programu\*

#Uwaga: operacje s i r mogą modyfikować jedynie wskaźniki.

#**Wejście**

Na wyjściu zostanie podany ciąg poleceń. Każde polecenie będzie składało się z jednego znaku.

#**Wyjście**
=======
Napisz program wykonujący następujące operacje na stosie liczb całkowitych. Stos powinien być zaimplementowany jako lista jednokierunkowa.
liczba - włożenie na stos danej liczby
p - wypisanie stosu (od wierzchołka do spodu)
s - zamiana miejscami dwóch liczb na szczycie stosu
x - usunięcie elementu ze szczytu stosu
+ - zdjęcie dwóch liczb ze stosu i włożenie na stos ich sumy
r - zdjęcie ze stosu liczby n, przeniesienie liczby z wierzchołka stosu na n-te miejsce licząc od wierzchołka; 0 r oraz 1 r nic nie robi, 2 r jest tożsame z s, 3 r zamienia 3 2 1 na 2 1 3 itd.
q - zakończenie programu
Uwaga: operacje s i r mogą modyfikować jedynie wskaźniki.

Wejście:

Na wyjściu zostanie podany ciąg poleceń. Każde polecenie będzie składało się z jednego znaku.

Wyjście:

Na wyjście należy wypisać wynik poleceń p, rozdzielając je znakami nowej linii.
Przykład

**Wejście**
1 p
2 p
3 p
4 p
5 p
x p
x p
x p
x p
x p
1 2 3 4 5 p
+ p
+ p
+ p
+ p
x p
1 2 3 4 5 p
s p
s p
1 r p
2 r p
2 r p
3 r p
3 r p
3 r p
4 r p
4 r p
4 r p
4 r p
5 r p
5 r p
5 r p
5 r p
5 r p
q

**Wyjście**
1 
2 1 
3 2 1 
4 3 2 1 
5 4 3 2 1 
4 3 2 1 
3 2 1 
2 1 
1 

5 4 3 2 1 
9 3 2 1 
12 2 1 
14 1 
15 

5 4 3 2 1 
4 5 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
4 5 3 2 1 
5 4 3 2 1 
4 3 5 2 1 
3 5 4 2 1 
5 4 3 2 1 
4 3 2 5 1 
3 2 5 4 1 
2 5 4 3 1 
5 4 3 2 1 
4 3 2 1 5 
3 2 1 5 4 
2 1 5 4 3 
1 5 4 3 2 
5 4 3 2 1


## Maszyna stosowa

At the top of the file there should be a short introduction and/ or overview that explains **what** the project is. This description should match descriptions added for package managers (Gemspec, package.json, etc.)

## Code Example

Show what the library does as concisely as possible, developers should be able to figure out **how** your project solves their problem by looking at the code example. Make sure the API you are showing off is obvious, and that your code is short and concise.

## Motivation

A short description of the motivation behind the creation and maintenance of the project. This should explain **why** the project exists.

## Installation

Provide code examples and explanations of how to get the project.

## API Reference

Depending on the size of the project, if it is small and simple enough the reference docs can be added to the README. For medium size to larger projects it is important to at least provide a link to where the API reference docs live.

## Tests

Describe and show how to run the tests with code examples.

## Contributors

Let people know how they can dive into the project, include important links to things like issue trackers, irc, twitter accounts if applicable.

## License

A short snippet describing the license (MIT, Apache, etc.)
