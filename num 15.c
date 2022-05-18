int buscaRg(tfila f, int buscaElem){
	int pos = 0 , achou =0;
	
	while(f.ini<=f.fim){
		pos++;
		if(buscaElem==f.fila[f.ini].rg){
			achou = 1;
			return pos;
		}
		f.ini ++;
	} 
	if(achou == 0){
		return 0;
	}
}
