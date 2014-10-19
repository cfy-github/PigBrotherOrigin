void setmode(void);
void lock(void);
void unlock(void);
void printc(char);
void out_byte(int, char);
char in_byte(int);
void init(void);
void draw(int, unsigned char, char);
void set_cursor(unsigned char, unsigned char);
void print_char(char);
void startgame(void);

const char ballon[225]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,14,14,14,14,14,14,14,0,0,0,0,
0,0,0,14,14,14,14,14,14,14,14,14,0,0,0,
0,0,14,14,14,14,14,14,14,14,14,14,14,0,0,
0,14,14,14,14,14,14,14,14,14,14,14,14,14,0,
14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
0,14,14,14,14,14,14,14,14,14,14,14,14,14,0,
0,0,14,14,14,14,14,14,14,14,14,14,14,0,0,
0,0,0,14,14,14,14,14,14,14,14,14,0,0,0};

const char wolff[225]={0,0,0,0,0,0,0,15,0,0,0,0,0,0,0,0,
0,0,12,12,12,0,15,12,12,12,0,0,0,0,0,
0,0,12,12,12,12,12,12,12,12,0,0,0,0,0,
0,12,12,12,12,12,12,12,12,12,12,12,0,0,0,
12,12,12,15,15,12,12,15,15,12,12,12,12,0,12,
12,12,12,15,9,12,12,9,15,12,12,12,12,12,12,
15,15,15,12,12,12,12,12,12,12,15,15,15,12,12,
15,15,15,12,12,12,12,12,12,12,15,15,12,12,0,
12,15,15,12,12,14,14,12,12,12,15,12,12,0,0,
0,12,12,12,12,12,12,12,12,12,12,12,0,0,0,
0,12,12,12,12,12,12,12,12,12,12,12,0,0,0,
0,12,15,12,12,12,12,12,12,12,15,12,0,0,0,
0,12,12,12,12,12,12,12,12,12,12,12,0,0,0,
0,0,0,12,12,12,0,12,12,12,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0};

const char wolff2[225]={0,0,0,0,0,0,0,15,0,0,0,0,0,0,0,0,
0,0,9,9,9,0,15,9,9,9,0,0,0,0,0,
0,0,9,9,9,9,9,9,9,9,0,0,0,0,0,
0,9,9,9,9,9,9,9,9,9,9,9,0,0,0,
9,9,9,15,15,9,9,15,15,9,9,9,9,0,9,
9,9,9,15,0,9,9,0,15,9,9,9,9,9,9,
15,15,15,9,9,9,9,9,9,9,15,15,15,9,9,
15,15,15,9,9,9,9,9,9,9,15,15,9,9,0,
9,15,15,9,9,14,14,9,9,9,15,9,9,0,0,
0,9,9,9,9,9,9,9,9,9,9,9,0,0,0,
0,9,9,9,9,9,9,9,9,9,9,9,0,0,0,
0,9,15,9,9,9,9,9,9,9,15,9,0,0,0,
0,9,9,9,9,9,9,9,9,9,9,9,0,0,0,
0,0,0,9,9,9,0,9,9,9,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0};

const char wolff3[225]={0,0,0,0,12,0,0,0,0,0,0,14,14,14,0,0,
0,0,0,12,12,0,0,0,12,12,12,14,14,0,0,
0,0,12,12,12,12,0,12,12,12,12,12,12,0,0,
0,12,12,12,12,15,12,12,12,15,15,0,15,0,0,
0,12,12,12,15,9,12,12,15,0,0,0,0,0,0,
0,12,12,12,15,9,0,0,0,0,0,0,0,0,0,
12,12,12,12,12,15,15,0,15,0,0,0,0,0,0,
0,12,12,12,15,15,15,15,15,0,0,15,0,0,0,
0,0,12,15,15,15,15,15,15,15,15,15,0,0,0,
0,0,12,15,15,15,15,0,0,0,15,0,0,0,0,
0,0,12,15,15,15,0,0,0,0,0,0,0,0,12,
12,12,12,12,15,15,12,12,0,15,0,0,0,0,0,
12,9,9,12,12,12,12,12,15,15,0,0,0,0,15,
12,12,0,0,0,0,0,0,15,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0};

const char wolff4[225]={0,14,14,14,0,0,0,0,0,0,12,0,0,0,0,0,
14,14,12,12,12,0,0,0,12,12,0,0,0,0,0,
12,12,12,12,12,12,0,12,12,12,12,0,0,0,0,
15,0,15,15,12,12,12,15,12,12,12,12,0,0,0,
0,0,0,0,15,12,12,9,15,12,12,12,0,0,0,
0,0,0,0,0,0,0,9,15,12,12,12,0,0,0,
0,0,0,0,15,0,15,15,12,12,12,12,12,0,0,
0,15,0,0,15,15,15,15,15,12,12,12,0,0,0,
0,15,15,15,15,15,15,15,15,15,12,0,0,0,0,
0,0,15,0,0,0,15,15,15,15,12,0,0,0,0,
0,0,0,0,0,0,0,15,15,15,12,0,0,0,0,
0,0,0,15,0,12,12,15,15,12,12,12,12,12,0,
0,0,0,15,15,12,12,12,12,12,9,9,12,0,0,
0,0,0,0,15,0,0,0,0,0,0,12,12,15,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0};

const char pigg[400]={0,0,0,0,0,0,0,0,10,10,10,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,10,10,10,10,12,10,10,10,10,0,0,0,0,0,0,0,
0,0,12,10,10,10,10,12,12,12,10,10,10,10,12,0,0,0,0,0,
12,12,10,10,10,10,12,12,12,12,12,10,10,10,12,12,12,0,0,0,
12,10,10,10,10,12,12,12,12,12,12,12,10,10,10,10,12,0,0,0,
0,0,0,0,0,0,0,0,15,15,15,15,15,15,15,0,0,0,0,0,
0,0,0,0,0,0,15,15,15,15,15,15,15,15,15,15,0,0,0,0,
0,0,0,0,0,15,15,15,15,9,15,15,15,15,15,15,0,0,0,0,
0,0,0,0,15,15,15,15,9,9,15,14,14,15,15,15,15,0,0,0,
0,0,0,12,15,15,15,15,15,15,15,14,15,15,15,15,15,0,0,0,
0,0,0,12,12,12,15,15,15,15,15,14,15,15,15,15,15,0,0,0,
0,0,15,0,12,12,15,15,15,15,15,14,14,14,15,15,0,0,0,0,
0,15,0,0,0,0,15,15,15,15,15,15,15,15,15,15,0,0,0,0,
15,0,0,0,0,0,0,15,15,15,15,15,15,15,15,0,0,0,0,0,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,0,0,0,
0,15,12,10,10,10,12,12,12,12,12,10,10,10,10,10,12,0,0,0,
0,0,15,0,12,10,10,12,12,12,10,10,10,10,10,12,12,0,0,0,
0,0,0,0,0,0,10,10,12,10,10,10,10,10,12,0,0,0,0,0,
0,0,0,0,0,0,0,0,10,10,10,10,10,12,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

char zhua[400] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,12,0,0,0,0,0,0,12,0,0,0,0,0,0,
0,0,0,12,0,0,12,0,0,0,0,0,0,12,0,0,0,0,0,0,
0,0,0,12,12,12,0,0,0,0,0,0,0,12,0,0,0,12,0,0,
0,0,0,0,12,12,0,0,0,0,12,12,12,12,12,12,12,12,0,0,
0,0,0,0,12,12,12,0,0,0,0,0,0,12,0,12,12,0,0,0,
0,0,0,12,12,0,12,0,0,0,0,0,0,12,12,12,0,0,0,0,
0,0,0,0,0,0,12,0,0,12,12,12,12,12,12,12,12,12,0,0,
0,0,0,0,0,0,12,0,0,0,0,0,12,12,0,0,0,0,0,0,
0,0,0,0,12,12,12,0,0,0,0,0,12,0,0,0,0,0,0,0,
0,0,0,12,12,0,0,0,0,0,12,12,12,12,12,12,12,0,0,0,
0,0,0,0,0,0,0,0,0,12,12,12,0,0,0,12,12,0,0,0,
0,0,0,0,0,0,12,0,12,12,0,12,0,0,0,12,0,0,0,0,
0,0,0,0,0,0,12,0,0,0,0,12,12,12,12,12,0,0,0,0,
0,0,0,12,0,12,12,0,0,0,0,12,0,0,0,12,0,0,0,0,
0,0,0,0,12,12,0,0,0,0,0,12,0,0,0,12,0,0,0,0,
0,0,0,0,12,12,0,0,0,0,0,12,12,12,12,12,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};

char xiaoa[400] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,12,12,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,12,12,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,12,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,12,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,12,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,12,0,0,0,0,12,0,0,0,
0,0,0,0,12,0,0,0,0,0,0,12,0,0,0,0,12,12,0,0,
0,0,0,0,12,0,0,0,0,0,0,12,0,0,0,0,0,12,0,0,
0,0,0,12,12,12,0,0,0,0,0,12,0,0,0,12,12,12,0,0,
0,0,0,0,12,0,0,0,0,0,0,12,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,12,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,12,12,0,12,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,12,12,12,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,12,12,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,12,12,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};

char dia[400] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,12,12,0,0,0,0,12,12,0,0,0,0,0,0,0,
0,0,0,0,0,0,12,0,0,0,12,12,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,12,12,0,0,12,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,12,12,0,0,0,0,0,0,0,0,0,
0,0,0,12,12,12,12,12,12,12,12,12,12,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,12,0,0,0,12,12,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,12,12,12,12,12,0,0,0,0,0,0,0,0,
0,0,12,12,12,12,12,12,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,12,0,0,0,0,12,0,0,0,12,12,12,12,0,0,0,0,0,
0,0,12,12,12,12,12,12,12,12,12,12,0,0,12,0,0,0,0,0,
0,0,0,0,0,0,12,12,0,0,0,0,0,0,12,0,0,0,0,0,
0,0,0,0,0,12,12,12,0,0,0,0,0,0,12,0,0,0,0,0,
0,0,0,0,12,12,0,12,0,0,12,0,0,0,12,0,0,0,0,0,
0,12,12,12,12,0,0,12,0,0,12,12,0,12,0,0,0,0,0,0,
0,12,0,0,0,0,0,12,0,0,0,12,12,12,0,0,0,0,0,0,
0,0,0,0,0,0,0,12,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,12,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};


struct pos
{
	int x,y;
};
struct pos pig;
struct wolf_info
{
	int x,y;
	int dy;
	char state;
};
struct arrow_info
{
	int x,y;
	char state;
} arrow[2];
int arrow_num=0;
struct wolf_info wolf[10];
int wolf_num=0;
unsigned int randomnumber=0;
int clock_count=39, clock_max=40;
char hungry_wolf[4]={0};
char hungry_wolf_num=0;
char hungry_wolf_count[4]={0};
char brick_count=0;
struct brick_info
{
	char state;
	int x,y;
	char dx, dy;
} brick;
int kill_count=0;
int start = 0;
void drawlarge(int x, int y, char c)
{ 
	draw(x, y, c);
	draw(x+1, y, c);
	draw(x, y+1, c);
	draw(x+1, y+1, c);
}
void drawpic1(int x, int y, const char *pic)
{
	int i;
	for (i=0; i<225; i++) draw(x+i%15,y+i/15,pic[i]);
}
void drawpic2(int x, int y, const char *pic)
{
	int i;
	for (i=0; i<400; i++) draw(x+i%20, y+i/20, pic[i]);
}
void drawrect(int x1, int y1, int x2, int y2, int c)
{
	int i,j;
	for (i=x1;i<=x2;i++) for (j=y1; j<=y2;j++) draw(i,j,c);
}
void drawpic3(int x, int y, char *pic, char offset)
{
	int i;
	for(i=0; i<400; i++) drawlarge(x+(i%20)*2, y+(i/20)*2, pic[i]+offset);
}
void drawverticalline(unsigned char y, int c)
{
	unsigned char i;
	int j=270;
	for (i=0;i<=y;i++) draw(j,i,c);
}
void drawlistline(void)
{
	int i=270, j=0;
	while (j<=20)
	{
		draw(i,j,8);
		i++;
		j++;
	}
}
void drawarrow(int x, int y, int c)
{
	int i;
	for (i=x;i<x+15;i++) draw(i,y,c);
}

int rand(int x)
{
	randomnumber=(randomnumber*25173+13849+pig.y+wolf_num);
	return randomnumber%x;
}

void printchar(int x, int y, char c)
{
	set_cursor((unsigned char)x,(unsigned char)y);
	print_char(c);
}

void gameover(void)
{
	int i;
	lock();
	drawrect(75,70,165,110,0);
	printchar(10,10,'G');
	printchar(10,11,'a');
	printchar(10,12,'m');
	printchar(10,13,'e');
	printchar(10,15,'O');
	printchar(10,16,'v');
	printchar(10,17,'e');
	printchar(10,18,'r');
	printchar(10,19,'!');
	printchar(12,10,'K');
	printchar(12,11,'i');
	printchar(12,12,'l');
	printchar(12,13,'l');
	printchar(12,14,'s');
	printchar(12,15,':');
	printchar(12,17,kill_count/100+'0');
	printchar(12,18,(kill_count/10)%10+'0');
	printchar(12,19,kill_count%10+'0');
	printchar(13,10,'P');
	printchar(13,11,'r');
	printchar(13,12,'e');
	printchar(13,13,'s');
	printchar(13,14,'s');
	printchar(13,15,' ');
	printchar(13,16,'E');
	printchar(13,17,'n');
	printchar(13,18,'t');
	printchar(13,19,'e');
	printchar(13,20,'r');
	printchar(13,21,' ');
	printchar(13,22,'t');
	printchar(13,23,'o');
	printchar(13,24,' ');
	printchar(13,25,'r');
	printchar(13,26,'e');
	printchar(13,27,'s');
	printchar(13,28,'t');
	printchar(13,29,'a');
	printchar(13,30,'r');
	printchar(13,31,'t');
	start = 0;
	unlock();
}

void arrow_gen(int x)
{
	int i;
	for (i=0;i<2;i++) if (arrow[i].state==-1) break;
	if (i==2) return;
	arrow[i].x=x;
	arrow[i].y=pig.y+15;
	arrow[i].state=0;
	arrow_num++;
	drawarrow(x,pig.y+15,15);
}


void keyboard_int(void)
{
	unsigned char code, val;
	lock();
	code=in_byte(0x60);
	val=in_byte(0x61);
	out_byte(0x61, val | 0x80);
	out_byte(0x61,val);
	if (start == 0)
	{
		if(code == 28)
		{
			startgame();
			start = 1;
			out_byte(0x20,0x20);
			unlock();
			return;
		}
		else
		{
			out_byte(0x20,0x20);
			unlock();
			return;
		}		
	}
	if (code==72 && pig.y>20)
	{
		drawrect(pig.x, pig.y, pig.x+20, pig.y+20, 0);
		drawverticalline(pig.y,0);
		pig.y-=2;
		drawpic2(pig.x, pig.y, pigg);
		drawverticalline(pig.y,8);
		if (brick.state==2) {drawrect(brick.x, brick.y, brick.x+15, brick.y+4, 0);brick.y=pig.y+15;drawrect(brick.x,brick.y, brick.x+15, brick.y+4,6);}
	}
	else if (code==72 && pig.y==20 && brick.state==1)
	{
		drawrect(brick.x,brick.y, brick.x+15, brick.y+4, 0);
		drawverticalline(pig.y, 8);
		brick.x=pig.x-15;
		brick.y=pig.y+15;
		brick.state=2;
		drawrect(brick.x, brick.y, brick.x+15, brick.y+4,6);
	}
	else if (code==80 && pig.y<169)
	{
		drawrect(pig.x, pig.y, pig.x+20, pig.y+20, 0);
		drawverticalline(pig.y,0);
		pig.y+=2;
		drawpic2(pig.x, pig.y, pigg);
		drawverticalline(pig.y,8);
		if (brick.state==2) {drawrect(brick.x, brick.y, brick.x+15, brick.y+4, 0);brick.y=pig.y+15;drawrect(brick.x,brick.y, brick.x+15, brick.y+4,6);}
	}
	else if (code==57 && arrow_num<2)
	{
		if (brick.state!=2) arrow_gen(245); else {brick.state=3;}
	}
	unlock();
	out_byte(0x20,0x20);
}

void wolf_gen(int x, int y)
{
	int i;
	for (i=0;i<10;i++) if (wolf[i].state==-1) break;
	wolf[i].x=x;
	wolf[i].y=y;
	wolf[i].dy=1;
	wolf[i].state=0;
	wolf_num++;
	drawpic1(x,y-15,ballon);
	drawpic1(x,y,wolff);
}

void timer_int(void)
{
	int i,j;
	char flag=0;
	lock();
	if(start == 0)
	{
		out_byte(0x20,0x20);
		unlock();
		return;
	}
	if (brick.state==0) brick_count++;
	if (brick_count==100)
	{
		brick_count=0;
		if (brick.state==0)
		{
			brick.state=1;
			brick.x=265;
			brick.y=20;
			brick.dx=10;
			brick.dy=1;
			drawrect(brick.x,brick.y, brick.x+15,brick.y+4,6);
		}

	}

	if (brick.state==3)
	{
		drawrect(brick.x, brick.y, brick.x+15, brick.y+4,0);
		brick.x-=brick.dx;
		brick.y+=brick.dy;
		if (brick.x % 3==0) brick.dy+=1;
		if (brick.y<195 && brick.x>=21)
		{
			for (i=0;i<10;i++)
			{
				if (wolf[i].state==-1) continue;
				if (brick.x>wolf[i].x-15 && brick.y>wolf[i].y-15 && brick.x<wolf[i].x+11 && brick.y<wolf[i].y+11)
				{
					wolf[i].state=1;
					wolf[i].dy=6;
					kill_count++;
				}
			}
			drawrect(brick.x, brick.y, brick.x+15, brick.y+4,6);
		} else brick.state=0;
	}

	clock_count++;
	if (clock_count==clock_max)
	{
		clock_count=0;
		if (wolf_num<10) wolf_gen(40+rand(4)*35,35);
		clock_max=30+rand(11)*4;
	}

	for (i=0;i<hungry_wolf_num;i++) 
	{
		hungry_wolf_count[i]++;
		if (hungry_wolf_count[i]==40)
		{
			drawrect(282,162-i*40,282+15,162-i*40+15,0);
			drawpic1(282-15,162-i*40,wolff4);
			if (162-i*40>pig.y-10 && 162-i*40<pig.y+15) {gameover();out_byte(0x20,0x20);return;}
		}
		if (hungry_wolf_count[i]==45)
		{
			drawrect(282-15,162-i*40,282,162-i*40+15,0);
			drawpic1(282,162-i*40,wolff);
			drawverticalline(pig.y, 8);
			hungry_wolf_count[i]=0;
		}
	}


	for (i=0;i<10;i++)
	{
		if (wolf[i].state==-1) continue;
		drawrect(wolf[i].x,wolf[i].y-15,wolf[i].x+15, wolf[i].y+15,0);
		if (wolf[i].y<184)
		{
			wolf[i].y+=wolf[i].dy;
			for (j=0;j<10;j++) if (wolf[i].state==1 && i!=j && wolf[i].x==wolf[j].x && wolf[j].y-wolf[i].y<=30 && wolf[j].y-wolf[i].y>0) {wolf[j].state=1;wolf[j].dy=6;}
			if (wolf[i].state==0) drawpic1(wolf[i].x, wolf[i].y-15,ballon);
			if (wolf[i].state==0) drawpic1(wolf[i].x,wolf[i].y,wolff);
			if (wolf[i].state==1) drawpic1(wolf[i].x,wolf[i].y,wolff2);
		}
		else 
		{
			if (wolf[i].state==1) {wolf_num--;wolf[i].state=-1;} else wolf[i].state=2;
		}
		if (wolf[i].state==2)
		{
			wolf[i].x+=3;
			drawpic1(wolf[i].x, wolf[i].y, wolff3);
			if (wolf[i].x>=263) 
			{
				wolf_num--;
				wolf[i].state=-1;
				drawrect(wolf[i].x, wolf[i].y, wolf[i].x+15, wolf[i].y+15, 0);
				if (hungry_wolf_num<4)
				{
					hungry_wolf[hungry_wolf_num]=1;
					drawpic1(282,162-hungry_wolf_num*40,wolff);
					hungry_wolf_num++;
				}
				else {gameover();out_byte(0x20,0x20);return;}
			}
		}
	}

	for (i=0;i<2;i++)
	{
		if (arrow[i].state==-1) continue;
		drawarrow(arrow[i].x,arrow[i].y,0);
		if (arrow[i].x<=20)
		{
			arrow_num--;
			arrow[i].state=-1;
		}
		else if (arrow[i].x==55 || arrow[i].x==90 || arrow[i].x==125 || arrow[i].x==160)
		{
			for (j=0;j<10;j++)
				if (wolf[j].state==0 && wolf[j].x==arrow[i].x-15)
				{
					if (wolf[j].y-15<arrow[i].y && wolf[j].y>arrow[i].y)
					{
						wolf[j].state=1;
						wolf[j].dy=6;
						kill_count++;
						flag=1;
						arrow_num--;
						arrow[i].state=-1;
						break;
					}
					else if (wolf[j].y<arrow[i].y && wolf[j].y+15>arrow[i].y)
					{
						flag=1;
						arrow_num--;
						arrow[i].state=-1;
						break;
					}
				}
			if (!flag) 
			{
				arrow[i].x-=5;
				drawarrow(arrow[i].x, arrow[i].y, 15);
			}

		}
		else
		{
			arrow[i].x-=5;
			drawarrow(arrow[i].x, arrow[i].y, 15);
		}

	}
	unlock();
	out_byte(0x20,0x20);
}
void startpic(void)
{
	char i;
	setmode();
	drawrect(0, 0, 319, 199, 13);
	printchar(15, 10, 'P');
	printchar(15, 11, 'r');
	printchar(15, 12, 'e');
	printchar(15, 13, 's');
	printchar(15, 14, 's');
	printchar(15, 15, ' ');
	printchar(15, 16, 'e');
	printchar(15, 17, 'n');
	printchar(15, 18, 't');
	printchar(15, 19, 'e');
	printchar(15, 20, 'r');
	printchar(15, 21, ' ');
	printchar(15, 22, 't');
	printchar(15, 23, 'o');
	printchar(15, 24, ' ');
	printchar(15, 25, 's');
	printchar(15, 26, 't');
	printchar(15, 27, 'a');
	printchar(15, 28, 'r');
	printchar(15, 29, 't');
	i = 0;
	while(start == 0)
	{
		lock();
		drawpic3(59, 19, zhua, i);
		drawpic3(139, 19, xiaoa, i);
		drawpic3(219, 19, dia, i);
		unlock();
		i++;
	}
}
void initializ(void);
void startgame(void)
{
	int i;
	lock();
	start = 1;
	initializ();
	setmode();
	drawrect(0,0,319,199,0);
	drawrect(0,20,20,200,4);
	drawrect(0,0,200,20,2);
	drawrect(280,20,319,30,2);
	drawrect(300,30,319,199,4);
	drawrect(280,180,300,199,4);
	drawrect(280,140,300,160,4);
	drawrect(280,100,300,120,4);
	drawrect(280,60,300,80,4);
	drawrect(280,30,300,40,4);
	drawlistline();
	
	for (i=0;i<10;i++) wolf[i].state=-1;
	for (i=0;i<2;i++) arrow[i].state=-1;
	drawpic2(260, 20, pigg);
	pig.x=260;pig.y=20;
	brick.state=0;
	unlock();
}

void initializ(void)
{
	int i,j;
	arrow_num = 0;
	wolf_num = 0;
	randomnumber = 0;
	clock_count = 39;
	clock_max = 40;
	hungry_wolf_num = 0;
	for(i=0;i<4;i++) hungry_wolf[i] = 0;
	for(j=0;j<4;j++) hungry_wolf_count[j] = 0;
	brick_count = 0;
	kill_count = 0;
}


int main(void)
{	
	init();
	lock();
	start = 0;
	unlock();
	startpic();
	while (1);
}
