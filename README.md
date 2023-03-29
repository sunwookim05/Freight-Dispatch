# Freight-Dispatch

gcc -c src\main.c -I inc\

gcc -c src\Scanner.c -I inc\  

gcc -c src\System.c -I inc\  

gcc -c src\Dispatch.c -I inc\  

gcc -o main main.o Dispatch.o System.o Scanner.o

.\main
