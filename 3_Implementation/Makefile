PROJ_NAME=Calci
TEST_NAME=unitesting
SRC= main.c \
	 src/admsformula.c \
	 src/FSSQformula.c 
	 
TEST_SRC= test.c\
          src/admsformula.c\
		  src/FSSQformula.c \
		  unity/unity.c		   
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif
INC= -Iinc \
	 -Iunity 
Build:$(SRC)
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm
run:Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))
Build_test:$(TEST_SRC)
	gcc $(TEST_SRC) $(INC) -o $(call FixPath,$(TEST_NAME).$(EXEC)) -lm
run_test:Build_test
	./$(call FixPath,$(TEST_NAME).$(EXEC))
static_analysis:
	cppcheck --enable=all $(SRC).
dynamic_analysis: Build
	valgrind ./$(call FixPath,$(PROJ_NAME).$(EXEC)) .
coverage:
	gcc -fprofile-arcs -ftest-coverage $(SRC) -Iinc -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm
	./$(call FixPath,$(PROJ_NAME).$(EXEC))
	gcov -a src/project_main.c src/calculator.c
Clean:
	$(RM) $(call FixPath,*.out)
     	
    	