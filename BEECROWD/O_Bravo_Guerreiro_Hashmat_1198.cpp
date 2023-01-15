<<<<<<< HEAD
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    long long sald_has, sald_opo;
    while(scanf("%ld %ld", &sald_has, &sald_opo) != EOF){
        if(sald_opo >= sald_has)
            printf("%lld \n", sald_opo - sald_has);
        else
            printf("%lld \n", sald_has - sald_opo);
    }
    return 0;
}
=======
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    long long sald_has, sald_opo;
    while(scanf("%ld %ld", &sald_has, &sald_opo) != EOF){
        if(sald_opo >= sald_has)
            printf("%lld \n", sald_opo - sald_has);
        else
            printf("%lld \n", sald_has - sald_opo);
    }
    return 0;
}
>>>>>>> refs/remotes/origin/master
