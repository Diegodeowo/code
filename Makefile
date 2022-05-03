FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/package.cpp -o bin/package.o
	g++ $(FLAGS) src/packageFedex.cpp -o bin/packageFedex.o
	g++ $(FLAGS) src/packagePostal.cpp -o bin/packagePostal.o
	g++ $(FLAGS) src/shippingList.cpp -o bin/shippingList.o

	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o bin/a bin/packageFedex.o bin/packagePostal.o bin/shippingList.o bin/main.o bin/package.o

test1:
	mkdir -p bin
	g++ $(FLAGS) src/package.cpp -o bin/package.o
	g++ $(FLAGS) src/packageFedex.cpp -o bin/packageFedex.o

	g++ $(FLAGS) tests/test_shippingFedex.cpp -o bin/test_shippingFedex.o
	g++ -g -o bin/tests1 bin/test_shippingFedex.o bin/packageFedex.o bin/package.o -lgtest -lgtest_main -lpthread

test2:
	mkdir -p bin
	g++ $(FLAGS) src/package.cpp -o bin/package.o
	g++ $(FLAGS) src/packagePostal.cpp -o bin/packagePostal.o

	g++ $(FLAGS) tests/test_shippingPostal.cpp -o bin/test_shippingPostal.o
	g++ -g -o bin/tests2 bin/test_shippingPostal.o bin/packagePostal.o bin/package.o -lgtest -lgtest_main -lpthread

clean:
	rm -Rf bin