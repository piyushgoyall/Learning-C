// Write a program to evaluate each of the following equations.
// (i) V = u + at.
// (ii) S = ut+1/2at^2
// (iii) T = 2*a+√b+9c
// (iv) H = √b^2+p^2

#include<stdio.h>
#include<math.h>
int main()
{
    float u,a1,t,v;
    float s;
    printf("Enter initial velocity, acceleration and time : ");
    scanf("%f %f %f",&u,&a1,&t);

    v = u + (a1*t);
    printf("Final velocity : %.3f",v);
}

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     float u,a1,t,s;
//     printf("Enter initial velocity, acceleration and time : ");
//     scanf("%f %f %f",&u,&a1,&t);

//     s = (u*t) + (0.5*a1*t*t);
//     printf("Displacement : %.3f",s);
// }

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     float a,b,c,T;
//     printf("Enter a,b and c : ");
//     scanf("%f %f %f",&a,&b,&c);

//     T = 2*a + sqrt((b+9*c));
//     printf("T = %.3f",T);
// }

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     float H,b,p;
//     printf("Enter the base and perpendicular : ");
//     scanf("%f %f",&b,&p);

//     H = sqrt(pow(b,2)+pow(p,2));
//     printf("Hypotenuse : %.3f",H);

// }
