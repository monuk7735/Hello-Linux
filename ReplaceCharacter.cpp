void replaceCharacter(char input[], char c1, char c2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output. 
     * Change in the given input string itself.
     * Taking input and printing output is handled automatically.
     */
     int length = 0;
    for(int i=0; input[i] != '\0'; i++){
        length++;
    }
    
    for(int i =0; i<length; i++){
        if(input[i] == c1){
            input[i] = c2;
        }
    }
}
