final : main.cpp libtrans.so
	g++ -I ./include -L ./lib -o final main.cpp -ltrans
libtrans.so : trans.o
	g++ -shared -o libtrans.so trans.o
	mv libtrans.so ./lib
trans.o : trans.cpp
	g++ -c -fPIC trans.cpp
clean :
	rm final trans.o
	rm ./lib/libtrans.so