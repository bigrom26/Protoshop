compile:
	g++ \
		-lm -std=c++11 \
		-o protoshop \
		src/image/*.cpp \
		src/utils/*.cpp \
		src/main.cpp \
		-O2 -L/usr/X11R6/lib -lm -lpthread -lX11

clean:
	rm protoshop

windows:
	g++ \
		-lm -std=c++11 \
		-o protoshop \
		src/image/*.cpp \
		src/utils/*.cpp \
		src/main.cpp \
		-O2 -lgdi32

mac:
	g++ \
		-o protoshop \
		src/image/*.cpp \
		src/utils/*.cpp \
		src/main.cpp \
		-O2 -lm -std=c++11 -lpthread -I/usr/X11R6/include -L/usr/X11R6/lib -lX11
