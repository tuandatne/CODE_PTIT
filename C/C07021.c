#include<stdio.h>
#include<math.h>
#include<string.h>
struct sinhvien
{
    char name[1000];
    int msv;
    double d1, d2, d3, total;
};
int main()
{
    int n = 1, dem = 0;
    int b[1000], k1, k2;
    struct sinhvien sv[1000];
    int a[1000];
    char thua[100];
    double dt1, dt2, dt3;
    scanf("%d", &a[n]);
    while(a[n] != 3)
    {
        if(a[n] == 1 && dem != 0)
        {
            int so;
            scanf("%d ", &so);
            b[n] = so;
            k1 = so;
            for(int i = 1; i <= so; i++)
            {   
                if(i == k2)
                {   
                    scanf("\n");
                    gets(thua);
                    scanf("%lf %lf %lf", &dt1, &dt2, &dt3);
                }
                else
                {
                    scanf("\n");
                    sv[i].msv = i;
                    gets(sv[i].name);
                    scanf("%lf %lf %lf", &sv[i].d1, &sv[i].d2, &sv[i].d3);
                    sv[i].total = sv[i].d1 + sv[i].d2 + sv[i].d3;
                }
            }
        }
        else if(a[n] == 1 && dem == 0)
        {   
            int so;
            scanf("%d ", &so);
            b[n] = so;
            k1 = so;
            for(int i = 1; i <= so; i++)
            {   
                scanf("\n");
                sv[i].msv = i;
                gets(sv[i].name);
                scanf("%lf %lf %lf", &sv[i].d1, &sv[i].d2, &sv[i].d3);
                sv[i].total = sv[i].d1 + sv[i].d2 + sv[i].d3;
            }
        } 
        if(a[n] == 2)
        {
            int so;
            dem++;
            scanf("%d ", &so);
            k2 = so;
            sv[so].msv = so;
            b[n] = so;
            gets(sv[so].name);
            scanf("%lf %lf %lf", &sv[so].d1, &sv[so].d2, &sv[so].d3);
            sv[so].total = sv[so].d1 + sv[so].d2 + sv[so].d3;
        }
        n++;
        scanf("%d", &a[n]);
    }

    if(a[n] == 3)
    {
        for(int i = 1; i <= k1; i++)
        {
            for(int j = i + 1; j <= k1; j++)
            {
                if(sv[i].total > sv[j].total)
                {
                    struct sinhvien k;
                    k = sv[i];
                    sv[i] = sv[j];
                    sv[j] = k;
                }
            }
        }
        for(int i = 1; i < n; i++)
        {
            if(b[i] != 0)
            {
                printf("%d\n", b[i]);
            }
        }
        for(int i = 1; i <= k1; i++)
        {
            printf("%d %s %.1lf %.1lf %.1lf\n", sv[i].msv, sv[i].name, sv[i].d1, sv[i].d2, sv[i].d3);
        }
    }
    return 0;
}