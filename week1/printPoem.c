#include <stdio.h>

int main(void)
{
    char *str = "\n\n\tI’m a riddle in nine syllables,\n"
                "\tAn elephant, a ponderous house,\n"
                "\tA melon strolling on two tendrils.\n"
                "\tO red fruit, ivory, fine timbers!\n"
                "\tThis loaf’s big with its yeasty rising.\n"
                "\tMoney’s new-minted in this fat purse.\n"
                "\tI’m a means, a stage, a cow in calf.\n"
                "\tI’ve eaten a bag of green apples,\n"
                "\tBoarded the train there’s no getting off.\n"
                "\t\tMetaphors by Sylvia Plath\n\n";

    printf("%s", str);
    return 0;
}