all:sup
	echo "built done"
sup:main.o sales.o stock.o purchase.o
	gcc main.o stock.o sales.o purchase.o
main.o:main.c
	gcc -c main.c
sales.o:sales.c
	gcc -c sales.c
stock.o:stock.c
	gcc -c stock.c
purchase.o:purchase.c
	gcc -c purchase.c
