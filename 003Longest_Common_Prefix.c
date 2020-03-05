char * longestCommonPrefix(char ** strs, int strsSize){
    char* temp;
    int i, j;

    temp = strs[0];
    for(i = 1; i < strsSize; i++){
        j = 0;
        while (temp[j] && strs[i][j] && temp[j]==strs[i][j]){
            j++;
        }
        temp[j]='\0';
    }
    return temp;
}

int main() {
    return 0;
}