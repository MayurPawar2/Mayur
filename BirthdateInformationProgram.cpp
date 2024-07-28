#include <stdio.h>
#include <string.h>

int menu(int year);
int year, month, day;

void clear_screen() {
    for (int i = 0; i < 100; i++) {
        printf("\n");
    }
}

int main() {
    while (1) {
        clear_screen();
        printf("Enter Year (1970-2005): ");
        scanf("%d", &year);
        if (year < 1970 || year > 2005) {
            continue;
        }

        printf("Enter Your Month No. (1-12): ");
        scanf("%d", &month);

        if (month < 1 || month > 12) {
            printf("Enter Correct No.!!!!!!\n");
            continue;
        }

        printf("Enter Day: ");
        scanf("%d", &day);

        int max_days;
        if (month == 2) {
            max_days = 29;
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            max_days = 30;
        } else {
            max_days = 31;
        }

        if (day < 1 || day > max_days) {
            printf("Enter Correct Day!!!!!!\n");
            continue;
        }

        clear_screen();
        printf("%d-%d-%d\n", month, day, year);
        menu(year);

        const char *month_name;
        const char *birthstone;
        const char *zodiac_sign;

        switch (month) {
            case 1:
                month_name = "JANUARY";
                birthstone = "GARNET";
                zodiac_sign = (day <= 19) ? "CAPRICORN" : "AQUARIUS";
                break;
            case 2:
                month_name = "FEBRUARY";
                birthstone = "AMETHYST";
                zodiac_sign = (day <= 18) ? "AQUARIUS" : "PISCES";
                break;
            case 3:
                month_name = "MARCH";
                birthstone = "AQUAMARINE or BLOODSTONE";
                zodiac_sign = (day <= 20) ? "PISCES" : "ARIES";
                break;
            case 4:
                month_name = "APRIL";
                birthstone = "DIAMOND";
                zodiac_sign = (day <= 19) ? "ARIES" : "TAURUS";
                break;
            case 5:
                month_name = "MAY";
                birthstone = "EMERALD";
                zodiac_sign = (day <= 20) ? "TAURUS" : "GEMINI";
                break;
            case 6:
                month_name = "JUNE";
                birthstone = "PEARL, ALEXANDRITE or MOONSTONE";
                zodiac_sign = (day <= 20) ? "GEMINI" : "CANCER";
                break;
            case 7:
                month_name = "JULY";
                birthstone = "RUBY";
                zodiac_sign = (day <= 22) ? "CANCER" : "LEO";
                break;
            case 8:
                month_name = "AUGUST";
                birthstone = "PERIDOT or SARDONYX";
                zodiac_sign = (day <= 22) ? "LEO" : "VIRGO";
                break;
            case 9:
                month_name = "SEPTEMBER";
                birthstone = "SAPPHIRE";
                zodiac_sign = (day <= 22) ? "VIRGO" : "LIBRA";
                break;
            case 10:
                month_name = "OCTOBER";
                birthstone = "OPAL or TOURMALINE";
                zodiac_sign = (day <= 22) ? "LIBRA" : "SCORPIO";
                break;
            case 11:
                month_name = "NOVEMBER";
                birthstone = "TOPAZ";
                zodiac_sign = (day <= 21) ? "SCORPIO" : "SAGITTARIUS";
                break;
            case 12:
                month_name = "DECEMBER";
                birthstone = "TURQUOISE OR ZIRCON";
                zodiac_sign = (day <= 21) ? "SAGITTARIUS" : "CAPRICORN";
                break;
            default:
                month_name = "UNKNOWN";
                birthstone = "UNKNOWN";
                zodiac_sign = "UNKNOWN";
                break;
        }

        printf("You are born on the month of %s.\n", month_name);
        printf("Your BirthStone is %s.\n", birthstone);
        printf("You are a %s.\n", zodiac_sign);
    }

    return 0;
}

int menu(int year) {
    const char *animal;
    if (year == 1992 || year == 1980 || year == 2004)
        animal = "MONKEY";
    else if (year == 1993 || year == 1981 || year == 2005)
        animal = "ROOSTER";
    else if (year == 1994 || year == 1982 || year == 1970)
        animal = "DOG";
    else if (year == 1995 || year == 1971 || year == 1983)
        animal = "BOAR";
    else if (year == 1996 || year == 1984 || year == 1972)
        animal = "RAT";
    else if (year == 1997 || year == 1985 || year == 1973)
        animal = "OX";
    else if (year == 1998 || year == 1986 || year == 1974)
        animal = "TIGER";
    else if (year == 1975 || year == 1999 || year == 1987)
        animal = "RABBIT";
    else if (year == 1976 || year == 2000 || year == 1988)
        animal = "DRAGON";
    else if (year == 1977 || year == 2001 || year == 1989)
        animal = "SNAKE";
    else if (year == 2002 || year == 1978 || year == 1990)
        animal = "HORSE";
    else if (year == 2003 || year == 1979 || year == 1991)
        animal = "RAM";
    else
        animal = "UNKNOWN";

    printf("You are born on the Year of the %s.\n", animal);
    return 0;
}
