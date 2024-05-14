#include <stdio.h>
#include <string.h>

int main() {
	int no_roll_rep;
        float purchase_amount;
        float tax_rate;
        float sales_tax;
        float total_amount;
        float end_input;

        printf("Enter the subtotal: \n$");
        scanf("%f", &purchase_amount);
        printf("Enter the tax rate (e.g.) 0.08): ");
        scanf("%f", &tax_rate);

        sales_tax = (purchase_amount * tax_rate);
        total_amount = (purchase_amount + sales_tax);

        printf("Sales tax: $%.2f\n", sales_tax);
        printf("Total: $%.2f\n", total_amount);
        printf("Type 8 for a special suprise!\n");

	no_roll_rep = 0;

	void suprise() {
		no_roll_rep++;
		scanf("%f", &end_input);
        	if (end_input == 8) {
                	printf("Never Gonna Give You Up\n");
        	}
        	else {
			if (no_roll_rep < 25) {
            	printf("Are you sure you don't want a FREE suprise!??????.\n");
		suprise();
			} 
			else {
				printf("Never Gonna Give You Up!\n");
				suprise();
			}
        	}
	}

	suprise();

        return 0;
}
