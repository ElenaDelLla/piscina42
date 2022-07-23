int isValidNumber(char * number){
	int i;
	i = 0;

	while (*number != '\0'){
		if(*number < 0 || *number > 9){
			return 0;
		}
		*number++;
		i++;
	}
	if(i > 37 || i == 0){
		return 0;
	}
	
	return 1;
}
