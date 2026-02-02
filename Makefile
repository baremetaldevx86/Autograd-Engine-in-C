
CC = gcc
CFLAGS = -Wall -g -O2
LDFLAGS = -lm

all: train

train: train.o engine.o nn.o loss.o optim.o
	$(CC) $(CFLAGS) -o train train.o engine.o nn.o loss.o optim.o $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o train
