#include <stdio.h>

int main() {
    int hour, minute, second, tract1, tract2, difference;

    printf("Hour(s): ");
    scanf("%d", &hour);
    if (hour == 24) {
        hour = 0;
    }
    printf("Minute(s): ");
    scanf("%d", &minute);
    if (minute == 60) {
        minute = 0;
        hour = hour+1;
    }
    printf("Second(s): ");
    scanf("%d", &second);
    if (second == 60) {
        second = 0;
        minute = minute+1;
    }

    while (hour < 0 || hour > 24 && minute < 0 || minute && second < 0 || second > 60) {
        printf("Hour(s): ");
        scanf("%d", &hour);
        if (hour == 24) {
            hour = 0;
        }
        printf("Minute(s): ");
        scanf("%d", &minute);
        if (minute == 60) {
            minute = 0;
            hour = hour+1;
        }
        printf("Second(s): ");
        scanf("%d", &second);
        if (second == 60) {
            second = 0;
            minute = minute+1;
        }

    } if (hour < 10 && minute < 10 && second < 10) {
        printf("The time: 0%d:0%d:0%d AM", hour, minute, second);
    } else if (hour < 10 && minute < 10 && second > 10) {
        printf("The time: 0%d:0%d:%d AM", hour, minute, second);
    } else if (hour < 10 && minute > 10 && second < 10) {
        printf("The time: 0%d:%d:0%d AM", hour, minute, second);
    } else if (hour < 10 && minute > 10 && second > 10) {
        printf("The time: 0%d:%d:%d AM", hour, minute, second);
    } else if (hour > 10 && minute < 10 && second < 10) {
        if (hour == 12) {
            printf("\nThe time: %d:0%d:0%d PM", hour, minute, second);
        } else if (hour > 12) {
            hour = hour - 12;
            printf("\nThe time: %d:0%d:0%d PM", hour, minute, second);
        } else printf("\nThe time: %d:0%d:0%d AM", hour, minute, second);
    } else if (hour > 10 && minute < 10 && second > 10) {
        if (hour == 12) {
            printf("\nThe time: %d:0%d:%d PM", hour, minute, second);
        } else if (hour > 12) {
            hour = hour - 12;
            printf("\nThe time: %d:0%d:%d PM", hour, minute, second);
        } else printf("\nThe time: %d:0%d:%d AM", hour, minute, second);
    } else if (hour > 10 && minute > 10 && second < 10) {
        if (hour == 12) {
            printf("\nThe time: %d:%d:0%d PM", hour, minute, second);
        } else if (hour > 12) {
            hour = hour - 12;
            printf("\nThe time: %d:%d:0%d PM", hour, minute, second);
        } else printf("\nThe time: %d:%d:0%d AM", hour, minute, second);
    } else if (hour > 10 && minute > 10 && second > 10) {
        if (hour == 12) {
            printf("\nThe time: %d:%d:%d PM", hour, minute, second);
        } else if (hour > 12) {
            hour = hour - 12;
            printf("\nThe time: %d:%d:%d PM", hour, minute, second);
        } else printf("\nThe time: %d:%d:%d AM", hour, minute, second);
    }
    tract1 = hour*3600+minute*60+second;
    printf("\nThe first term: %d second(s)", tract1);

    printf("\nEnter the second time: \n");
    printf("Hour(s): ");
    scanf("%d", &hour);
    if (hour == 24) {
        hour = 0;
    }
    printf("Minute(s): ");
    scanf("%d", &minute);
    if (minute == 60) {
        minute = 0;
        hour = hour+1;
    }
    printf("Second(s): ");
    scanf("%d", &second);
    if (second == 60) {
        second = 0;
        minute = minute+1;
    }

    while (hour < 0 || hour > 24 && minute < 0 || minute && second < 0 || second > 60) {
        printf("Hour(s): ");
        scanf("%d", &hour);
        if (hour == 24) {
            hour = 0;
        }
        printf("Minute(s): ");
        scanf("%d", &minute);
        if (minute == 60) {
            minute = 0;
            hour = hour+1;
        }
        printf("Second(s): ");
        scanf("%d", &second);
        if (second == 60) {
            second = 0;
            minute = minute+1;
        }

    } if (hour < 10 && minute < 10 && second < 10) {
        printf("The time: 0%d:0%d:0%d AM", hour, minute, second);
    } else if (hour < 10 && minute < 10 && second > 10) {
        printf("The time: 0%d:0%d:%d AM", hour, minute, second);
    } else if (hour < 10 && minute > 10 && second < 10) {
        printf("The time: 0%d:%d:0%d AM", hour, minute, second);
    } else if (hour < 10 && minute > 10 && second > 10) {
        printf("The time: 0%d:%d:%d AM", hour, minute, second);
    } else if (hour > 10 && minute < 10 && second < 10) {
        if (hour == 12) {
            printf("\nThe time: %d:0%d:0%d PM", hour, minute, second);
        } else if (hour > 12) {
            hour = hour - 12;
            printf("\nThe time: %d:0%d:0%d PM", hour, minute, second);
        } else printf("\nThe time: %d:0%d:0%d AM", hour, minute, second);
    } else if (hour > 10 && minute < 10 && second > 10) {
        if (hour == 12) {
            printf("\nThe time: %d:0%d:%d PM", hour, minute, second);
        } else if (hour > 12) {
            hour = hour - 12;
            printf("\nThe time: %d:0%d:%d PM", hour, minute, second);
        } else printf("\nThe time: %d:0%d:%d AM", hour, minute, second);
    } else if (hour > 10 && minute > 10 && second < 10) {
        if (hour == 12) {
            printf("\nThe time: %d:%d:0%d PM", hour, minute, second);
        } else if (hour > 12) {
            hour = hour - 12;
            printf("\nThe time: %d:%d:0%d PM", hour, minute, second);
        } else printf("\nThe time: %d:%d:0%d AM", hour, minute, second);
    } else if (hour > 10 && minute > 10 && second > 10) {
        if (hour == 12) {
            printf("\nThe time: %d:%d:%d PM", hour, minute, second);
        } else if (hour > 12) {
            hour = hour - 12;
            printf("\nThe time: %d:%d:%d PM", hour, minute, second);
        } else printf("\nThe time: %d:%d:%d AM", hour, minute, second);
    } tract2 = hour*3600+minute*60+second;
    printf("\nThe second term: %d second(s)", tract2);

    if (tract1 > tract2) {
        difference = tract1-tract2;
    } else {
        difference = tract2 - tract1;
    }

    printf("\nThe difference between the two times: %d second(s)\n", difference);
    return 0;
}