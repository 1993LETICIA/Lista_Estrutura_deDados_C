int buscaRg(tfila f, int rgbusca){
	int pos = 0 , achou =0;
	
	while(f.ini<=f.fim){
		pos++;
		if(rgbusca==f.fila[f.ini].rg){
			achou = 1;
			return pos;
		}
		f.ini ++;
	} // fim hile
	if(achou == 0){
		return 0;
	}
}
