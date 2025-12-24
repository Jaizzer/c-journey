#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int hour;
    int minute;
} Time;

typedef struct {
    Time departure;
    Time arrival;
} Flight;

int main(void) {
    int input_hour;
    int input_minute;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &input_hour, &input_minute);

    // Convert the time to minutes
    int user_input_minutes = input_hour * 60 + input_minute;

    Flight slots[8] = {{{8, 0}, {10, 16}},  {{9, 43}, {11, 52}}, {{11, 19}, {13, 31}},
                       {{12, 47}, {15, 0}}, {{14, 0}, {16, 8}},  {{15, 45}, {17, 55}},
                       {{19, 0}, {21, 20}}, {{21, 45}, {23, 58}}};

    int current_slot_departure_minutes;
    int smallest_difference = INT_MAX;
    int current_difference;
    char *departure_time;
    char *arrival_time;

    for (int i = 0; i < 8; i++) {
        // Extract the hours and minutes in departure
        int departure_hour = slots[i].departure.hour;
        int departure_minute = slots[i].departure.minute;

        // Extract the hours and minutes in arrival
        int arrival_hour = slots[i].arrival.hour;
        int arrival_minute = slots[i].arrival.minute;

        // Calculate the total departure minutes of the current time
        current_slot_departure_minutes = departure_hour * 60 + departure_minute;
        current_difference = abs(current_slot_departure_minutes - user_input_minutes);

        // Update the smallest difference
        if (current_difference <= smallest_difference) {
            smallest_difference = current_difference;

            // Update the departure time
            asprintf(&departure_time, "%02d:%02d %s",
                     (departure_hour > 12 ? departure_hour - 12 : departure_hour), departure_minute,
                     (departure_hour >= 12 ? "p.m." : "a.m."));

            // Update the arrival time
            asprintf(&arrival_time, "%02d:%02d %s",
                     (arrival_hour > 12 ? arrival_hour - 12 : arrival_hour), arrival_minute,
                     (departure_hour >= 12 ? "p.m." : "a.m."));
        }
    }
    printf("Closest departure time is %s, arriving at %s\n", departure_time, arrival_time);

    return 0;
}