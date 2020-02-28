/*************************************************************************
	> File Name: leetcode202.c
	> Author: suyebei
	> Mail: suyebei@126.com
	> Created Time: 五  2/28 14:02:00 2020
 ************************************************************************/

int get_next(int n) {
    int temp = 0;
    while (n) {
        temp += (n % 10) * (n % 10);
        n /= 10;
    }
    return temp;
}

bool isHappy(int n){
    int p = n, q = n;
    while ( q != 1) {
        p = get_next(p);
        q = get_next(get_next(q));
        if (p == q) break;
    }
    return q == 1;

}
