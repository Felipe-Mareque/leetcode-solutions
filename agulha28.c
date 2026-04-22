int strStr(char* haystack, char* needle) {
    int numHay, numNeed;
    numHay = strlen(haystack);
    numNeed = strlen(needle);

    for( int x = 0; x<=numHay-numNeed; x++){
       int contador = 0;
        char* vetor = malloc(sizeof(char) * (numNeed+1));
        for( int y = 0; y<numNeed; y++ ){
            vetor[contador] = haystack[y+x];
            contador++; 
        }
        vetor[numNeed] = '\0';
        if(strcmp(vetor,needle) == 0){
            return x;
        }
        free(vetor);
    }
    return -1;
}