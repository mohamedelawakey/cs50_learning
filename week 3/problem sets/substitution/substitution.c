#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool is_valid_key(string key);
void encrypt_and_print(string text, string key);

int main(int argc, string argv[])
{
    if (argc != 2 || !is_valid_key(argv[1]))
    {
        printf("Usage: ./substitution key (26 unique letters)\n");
        return 1;
    }

    string text = get_string("plaintext: ");
    printf("ciphertext: ");
    encrypt_and_print(text, argv[1]);
    printf("\n");
    return 0;
}

bool is_valid_key(string key)
{
    if (strlen(key) != 26)
        return false;

    bool seen[26] = {false};
    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(key[i]))
            return false;

        int index = toupper(key[i]) - 'A';
        if (seen[index])
            return false;

        seen[index] = true;
    }
    return true;
}

void encrypt_and_print(string text, string key)
{
    for (int i = 0; text[i]; i++)
    {
        if (isalpha(text[i]))
        {
            char c = isupper(text[i]) ? toupper(key[text[i] - 'A']) : tolower(key[text[i] - 'a']);
            printf("%c", c);
        }
        else
        {
            printf("%c", text[i]);
        }
    }
}
