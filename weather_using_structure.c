#include <stdio.h>
#include <string.h>

struct Weather {
    char city_name[50];
    float temperature;
    int humidity;
    char condition[20];
};

int main() {
    int n, i;
    
    printf("Enter the number of cities: ");
    scanf("%d", &n);

    struct Weather cities[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for city %d\n", i + 1);
        printf("City Name: ");
        scanf("%s", cities[i].city_name);
        printf("Temperature: ");
        scanf("%f", &cities[i].temperature);
        printf("Humidity: ");
        scanf("%d", &cities[i].humidity);
        printf("Condition: ");
        scanf("%s", cities[i].condition);
    }

    printf("\nWeather Data:\n");
    for (i = 0; i < n; i++) {
        printf("\nCity: %s\n", cities[i].city_name);
        printf("Temperature: %.2f\n", cities[i].temperature);
        printf("Humidity: %d\n", cities[i].humidity);
        printf("Condition: %s\n", cities[i].condition);
    }

    return 0;
}
