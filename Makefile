CPP_FOLDERS = helpers src
compile:
	g++ -v -I include -c src/*.cpp && move *.o objects && g++ main.cpp -o main objects/*.o 

clear:
	del *.o
	del *.exe
	cd objects && del *.o


