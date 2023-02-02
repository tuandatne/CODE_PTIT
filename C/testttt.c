#include<stdio.h> 
#include<math.h> 
int main() { 
    int x1,x2,x3,x4,y1,y2,y3,y4; 
    scanf("%d %d %d %d\n%d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4); 
    int x[4]; 
    int y[4]; 
    x[0] = x1; 
    x[1] = x2; 
    x[2] = x3; 
    x[3] = x4; y[0] = y1; y[1] = y2; y[2] = y3; y[3] = y4; // bu?c trên d? nh?p t?a d? và gán t?a d? vào 2 m?ng tuong ?ng 
    for (int i=0; i<4; i++) 
    { 
         for (int j=0; j<4; j++) 
            { 
               if (x[j]>x[i]) 
                    { int temp = x[j]; 
                       x[j] = x[i]; 
                       x[i] = temp; 
                    } 
              if (y[j]>y[i]) 
                    { 
                       int temp = y[j]; 
                       y[j] = y[i]; 
                       y[i] = temp; 
                    } 
            } 
    } // s?p x?p các ph?n t? trong m?ng t? bé d?n l?n
    for(int i=0; i<4; i++)
      printf("%d %d \n",x[i],y[i]);
    int canh1 = 0; 
    if ((x[0] >= 0 && x[3] > 0) || (x[0]<=0 && x[3]>=0)) 
       { 
        canh1 = x[3]-x[0]; 
        } 
    else 
       { 
        canh1 = abs(x[0]) - abs(x[3]); 
        } 
    int canh2 = 0; 
    if ((y[0] >= 0 && y[3] > 0) || (y[0]<=0 && y[3]>=0)) 
       { 
           canh2 = y[3]-y[0]; 
        } 
    else 
        { 
           canh2 = abs(y[0]) - abs(y[3]); 
        }
     int S = 0; int canh3 = 0; 
    if (canh1 >= canh2) 
        { 
           canh3 = canh1*canh1; 
        } 
    else 
        { 
           canh3 = canh2*canh2; 
        } 
    printf("%d",canh3); 
}
    