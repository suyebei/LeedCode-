/*************************************************************************
	> File Name: leetcode20.cpp
	> Author: suyebei
	> Mail: suyebei@126.com
	> Created Time: 五  2/28 17:48:34 2020
 ************************************************************************/

bool isValid(char * s){
    int len = strlen(s), top = -1, flag = 1;
    char *stack = (char *)malloc(sizeof(char) *len);
    while (s[0]) {
        switch(s[0]) {
            case '(' :
            case '[' :
            case'{' :stack[++top] = s[0]; break;
            case ')':flag = (top != -1 && stack[top--] == ')'); break;
            case ']':flag = (top != -1 && stack[top--] == ']'); break;
            case '}':flag = (top != -1 && stack[top--] == '}'); break;
        }
        if (!flag) break;
        s++;
    }
    free(stack);
    return (flag && flag == -1 );

}
