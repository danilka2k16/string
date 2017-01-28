#include <iostream>

typedef class
{                                   // sozdanie structuri dannix
private:
    char* str;
    int len;
public:
    String(const char* s = "");
    ~String();
}String;



String::String(const char *s)
{                                      // konstructor
    str = new char[strlen(s)+1];
    strcpy(str, s);
    len = strlen(s);
}

String::~String()
{                                      // destructor
    delete [] str;
}


int index;
                                       // metod get and set
public int Index {
    get { return index; }
    set { index = value; }
}


public static void print(String s)      // metod print
{
System.out.println(s);
}


int pos(char *s, char *c, int n)              // metod find dlia podstroki
{
	int i, j;
	int lenC, lenS;

	for (lenC = 0; c[lenC]; lenC++);
	for (lenS = 0; s[lenS]; lenS++);

	for (i = 0; i <= lenS - lenC; i++)
	{
		for (j = 0; s[i + j] == c[j]; j++);
 		if (j - lenC == 1 && i == lenS - lenC && !(n - 1)) return i;
		if (j == lenC)
		if (n - 1) n--;
		else return i;
	}
	return -1;
}

int main()
{
	char *s = "parapapa";
	char *c = "pa";

	int i, n = 0;

	for (i = 1; n != -1; i++)
	{
		n = pos(s, c, i);

		if (n >= 0)
			std:: cout << n << std:: endl;
	}
}

// metod concat
