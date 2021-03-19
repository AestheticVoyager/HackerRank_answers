// DomirScire
#pragma GCC push_options
#pragma GCC optimize ("03")

#include <stdio.h>
#include <math.h>

#define ll unsigned long long
#define BIG 10000001

inline ll power(ll x){
    ll res = 1;
res=(res*x)%1000000123;
x = (x*x)%1000000123;
x = (x*x)%1000000123;
x = (x*x)%1000000123;
res=(res*x)%1000000123;
x = (x*x)%1000000123;
res=(res*x)%1000000123;
x = (x*x)%1000000123;
res=(res*x)%1000000123;
x = (x*x)%1000000123;
res=(res*x)%1000000123;
x = (x*x)%1000000123;
x = (x*x)%1000000123;
x = (x*x)%1000000123;
res=(res*x)%1000000123;
x = (x*x)%1000000123;
x = (x*x)%1000000123;
res=(res*x)%1000000123;
x = (x*x)%1000000123;
x = (x*x)%1000000123;
x = (x*x)%1000000123;
res=(res*x)%1000000123;
x = (x*x)%1000000123;
res=(res*x)%1000000123;
x = (x*x)%1000000123;
x = (x*x)%1000000123;
res=(res*x)%1000000123;
x = (x*x)%1000000123;
x = (x*x)%1000000123;
res=(res*x)%1000000123;
x = (x*x)%1000000123;
res=(res*x)%1000000123;
x = (x*x)%1000000123;
x = (x*x)%1000000123;
x = (x*x)%1000000123;
res=(res*x)%1000000123;
x = (x*x)%1000000123;
res=(res*x)%1000000123;
x = (x*x)%1000000123;
res=(res*x)%1000000123;
x = (x*x)%1000000123;
x = (x*x)%1000000123;
res=(res*x)%1000000123;
x = (x*x)%1000000123;
res=(res*x)%1000000123;
x = (x*x)%1000000123;
res=(res*x)%1000000123;
    return res;
}

int pp[BIG];
unsigned int invnum[BIG];
unsigned int subfact[BIG], fact[BIG], invfact[BIG];
ll N;

inline ll nCr(int n, int r){
    return ((((ll)fact[n] * (ll)invfact[r]) % N)* (ll)invfact[n-r]) % N;
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    N = 1000000123;
    int oldn = n;

    // precache all number inverses
    invnum[0] =0;
    invnum[1] =1;
    invnum[2] =power(2);
    for (int i = 3; i<=n; i++){
        if (i&1) invnum[i] = power(i);
        else invnum[i] = ((ll)invnum[i>>1] * (ll)invnum[2]) % N;
    }

    // precache subfacts, facts
    subfact[1] = 0;
    fact[0] = 1;
    fact[1] = 1;
    invfact[0] = 1;
    invfact[1] = 1;

    for (int i=2;i<=n;i++){
        subfact[i] = (i * (ll)subfact[i-1] + (i&1 ? -1 : 1)) % N;
        fact[i] = (i * (ll)fact[i-1]) % N;
        invfact[i] = ((ll)invnum[i] * (ll)invfact[i-1]) % N;
    }

    // Compute P
    int sqrtn = (int)sqrt(n);
    for (int i=2; i<=sqrtn;i++){
        if (pp[i] == 0){
            for (int j = i*i;j<=n;j+=i){
                pp[j] = 1;
            }
        }
    }
    int P = 0;
    for (int i=2;i<=n;i++) P += 1-pp[i];

    // The Problem
    ll c = P-k;
    ll aa = nCr(P,c);
    n -= c;

    ll a = 0;
    for (ll i =0; i <=n-k;i++){
        a += nCr(n-k, i) * subfact[n-i];
        a %= N;
    }

    a = (a * aa) % N;
    ll out = (a*invfact[oldn]) % N;
    printf("%lld\n", out);
    return 0;
}
