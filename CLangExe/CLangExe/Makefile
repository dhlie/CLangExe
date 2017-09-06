MY_VAR_SRC := eightQueen.c  exercise01.c exercise02.c exercise03.c \
			exercise05.c exercise06.c exercise08.c exercise09.c \
			main.c
MY_VAR_OUTDIR := ./out
MY_VAR_O = ${wildcard $(MY_VAR_OUTDIR)/*.o}
#链接obj文件
main : objs
	gcc $(MY_VAR_O) -o $(MY_VAR_OUTDIR)/main -lm
	@echo -------------end---------------
	
#源文件编译成obj文件
objs : $(MY_VAR_SRC)
	@echo -------------begin---------------
	cd $(MY_VAR_OUTDIR); gcc -c $(foreach item, $(MY_VAR_SRC), ../$(item)) 

#执行main函数
.PHONY : run
run :
	$(MY_VAR_OUTDIR)/main

#删除编译生成的文件
.PHONY : clean
clean :
	-rm $(MY_VAR_OUTDIR)/*

.PHONY : del
del :
	rm $(MY_VAR_OUTDIR)/a?aaa.o

