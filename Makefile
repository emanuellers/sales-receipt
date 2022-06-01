CPP_FOLDERS = helpers src
compile:
	g++ -v -I include -c src/*.cpp && move *.o objects && g++ main.cpp -lsqlite3 -o main objects/*.o >NUL

clear:
	del *.o
	del *.exe
	cd objects && del *.o


