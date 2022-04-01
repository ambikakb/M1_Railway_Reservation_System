void bill(int y, int j)
{
    int i;
    Node* ptr = start;
    for (i = 1; i <= j; i++) {
        printf("\t\t\%dst Passenger Name: ", i);
        puts(ptr->name);
        printf("\t\t%dst Passenger Gender: ", i);
        puts(ptr->gen);
        printf("\t\t%dst Passenger Age: %d\n\n", i,
               ptr->age);
        ptr = ptr->link;
    }
    printf("\t\tSource Place: ");
    puts(source);
    printf("\t\tDestination Place: ");
    puts(des);
    printf("\t\tThe Boarding Station: ");
    puts(station);
    printf("\t\tTrain Is: ");
    puts(train);
    printf("\t\tAllocated Class: ");
    puts(cla);
    printf("\t\tBoarding Time: %d:%d\n", time1, time2);
    printf("\t\tTotal Bill Amount: %d\n", y);
    printf("\t\tAllocated Seats Are: \n");
    for (i = 0; i < j; i++) {
        printf("\t\t%d ", a[i]);
    }
    printf("\n");
    printf("\t\t\t\tThank You......\n");
}
