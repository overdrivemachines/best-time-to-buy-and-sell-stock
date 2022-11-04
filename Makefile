
# Variables to control Makefile operation

CC = g++
CFLAGS = -Wall -g

best-time-to-buy-and-sell-stock: best-time-to-buy-and-sell-stock.o
	$(CC) $(CFLAGS) -o best-time-to-buy-and-sell-stock best-time-to-buy-and-sell-stock.o

best-time-to-buy-and-sell-stock.o: best-time-to-buy-and-sell-stock.cpp
	$(CC) $(CFLAGS) -c best-time-to-buy-and-sell-stock.cpp

clean:
	rm -rf best-time-to-buy-and-sell-stock best-time-to-buy-and-sell-stock.o
