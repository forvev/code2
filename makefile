cc = gcc
.PHONY: clean

code2: program.o objetosc.so pole.a 
	$(cc) -o $@ $^

pole.a: pole.o
	ar rs $@ $<

objetosc.so: objetosc.o
	$(cc) -shared -o $@ $<

pole.o: pole.c
	$(cc) -c $<

objetosc.o: objetosc.c
	$(cc) -c $<

program.o: program.c
	$(cc) -c $<

clean:
	rm -f code2 *.o *.a *.so
