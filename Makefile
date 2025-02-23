cshogi: main.cpp
	g++ main.cpp -o target/cshogi -Werror -pedantic 

clean:
	rm -rf target
