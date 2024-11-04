void calculateDiscountedPrice(char *userInput, int itemPrice, float discountRate){
    char buffer[10];
    int discountedPrice;
    float discountAmount;
    if (isLoggedIn) {
        strcpy(buffer, userInput);
        discountAmount = (itemPrice * discountRate) / 100;
        discountedPrice = itemPrice - (int)discountAmount;
        sprintf(buffer, "Discounted Price: %d", discountedPrice);
        printf("%s\n", buffer);
    } else {
        printf("User is not logged in.\n");
    }
}