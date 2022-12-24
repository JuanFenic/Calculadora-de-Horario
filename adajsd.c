#include <stdio.h>

int main()
{
    int horas;
    int minutos;
    int adicionais;
    int horas2;
    int minutos2;

    scanf("%d:%d\n%d", &horas, &minutos, &adicionais);

    if (adicionais + minutos < 60)
    {
        minutos2 = minutos + adicionais;
        if (minutos2 < 10 && horas < 10)
        {
            printf("0%d:0%d", horas, minutos2);
        }

        else if (horas < 10)
        {
            printf("0%d:%d", horas, minutos2);
        }

        else if (minutos2 < 10)
        {
            printf("%d:0%d", horas, minutos2);
        }

        else
        {

            printf("%d:%d", horas, minutos2);
        }
    }

    else if (adicionais + minutos >= 60)
    {
        horas2 = horas + (minutos + adicionais) / 60;
        minutos2 = (minutos + adicionais) % 60;

        if (minutos2 < 10 && horas2 < 10)
        {
            printf("0%d:0%d", horas2, minutos2);
        }

        else if (horas2 < 10)
        {
            printf("0%d:%d", horas2, minutos2);
        }

        else if (minutos2 < 10)
        {
            printf("%d:0%d", horas2, minutos2);
        }

        else
        {
            printf("%d:%d", horas2, minutos2);
        }
        /* anti-plágio  anti-plágio   anti-plágio  anti-plágioanti-plágio  anti-plágioanti-plágio  anti-plágioanti-plágio  anti-plágioanti-plágio
        anti-plágio  anti-plágioanti-plágio  anti-plágioanti-plágio  anti-plágioanti-plágio  anti-plágioanti-plágio  anti-plágio
        anti-plágio  anti-plágioanti-plágio  anti-plágioanti-plágio  anti-plágioanti-plágio  anti-plágioanti-plágio  anti-plágio
        anti-plágio  anti-plágioanti-plágio  anti-plágioanti-plágio  anti-plágioanti-plágio  anti-plágioanti-plágio  anti-plágio
        anti-plágio  anti-plágioanti-plágio  anti-plágioanti-plágio  anti-plágioanti-plágio  anti-plágio
        anti-plágio  anti-plágioanti-plágio  anti-plágioanti-plágio  anti-plágioanti-plágio  anti-plágioanti-plágio  anti-plágio */
    }

    return 0;
}