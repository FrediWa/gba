#define STATE_ARM 0
#define STATE_THUMB 1

struct registers {
	unsigned char a;
	unsigned char b;
	unsigned char c;
	unsigned char d;
	unsigned char e;
	unsigned char h;
	unsigned char l;
	unsigned char flags;
	unsigned short sp;
	unsigned short pc;
} registers;

typedef struct {
	int pc;
	int flags;
	int state;
} CPU;

void fetch(void);