#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

// S4 Utils v0.2
// by broodplank

#define HW_VDDLVL_PATH "/sys/devices/system/cpu/cpufreq/vdd_table/vdd_levels"
#define HW_READAHEAD_INTERNAL_PATH "/sys/block/mmcblk0/queue/read_ahead_kb"
#define HW_READAHEAD_EXTERNAL_PATH "/sys/block/mmcblk1/queue/read_ahead_kb"

void hwset(char *path,char *val) {
	int fd=open(path,O_RDWR);
	if(fd<0) {
		printf("failed to open %s\n",path);
		exit(1);
	}
	if((write(fd,val,strlen(val))<strlen(val)) {
		printf("failed to write %s at %s\n",val,fd);
		exit(1);
	}
	close(fd);
}


void vol(char *val) {
	hwset(HW_VDDLVL_PATH,val);
}

void raint(char *val) {
	hwset(HW_READAHEAD_INTERNAL_PATH,val);
}

void raext(char *val) {
	hwset(HW_READAHEAD_EXTERNAL_PATH,val);
}

void ccat(char *path) {
	int fd=open(path,O_RDONLY);
	if(fd<0) {
		printf("failed to open %s\n",path);
		exit(1);
	}
	struct stat s;
	fstat(fd,&s);
	unsigned size=s.st_size;
	char *buff=malloc(size);
	if(!buff) {
		printf("failed to allocate %d buffer for reading %s\n",size,path);
		exit(1);
	}
	read(fd,buff,size);
	write(1,buff,size);
	close(fd);
	free(buff);
}


// Flash boot / recovery

void fbimg()
{
    printf("Flashing '/sdcard/boot.img' to '/dev/block/platform/msm_sdcc.1/by-name/boot'");
    char buf[256];
    sprintf(buf, "/system/bin/sh -c %s", "'dd if=/sdcard/boot.img of=/dev/block/platform/msm_sdcc.1/by-name/boot'");
    system(buf);

}

void frimg()
{
    printf("Flashing '/sdcard/recovery.img' to '/dev/block/platform/msm_sdcc.1/by-name/recovery'");
    char buf[256];
    sprintf(buf, "/system/bin/sh -c %s", "'dd if=/sdcard/recovery.img of=/dev/block/platform/msm_sdcc.1/by-name/recovery'");
    system(buf);

}

// Check VDD Levels
void vddlevels()
{
    printf("\nCurrent Voltage Table:\n");
    ccat("/sys/devices/system/cpu/cpufreq/vdd_table/vdd_levels");
#if 0
    int c;
    FILE *file;
    file = fopen("/sys/devices/system/cpu/cpufreq/vdd_table/vdd_levels", "r");
    if (file) {
       while ((c = getc(file)) != EOF)
       putchar(c);
    fclose(file);
    }
#endif
}

// Set CPU Governor
void setcpugovernor()
{
        printf("not implemented yet..."); 
}

// Check CPU Governor
void cpugovernor()
{
    printf("\nCurrent CPU Governor:\n");
    ccat("/sys/devices/system/cpu/cpu0/cpufreq/scaling_governor");
#if 0
    int c;
    FILE *file;
    file = fopen("/sys/devices/system/cpu/cpu0/cpufreq/scaling_governor", "r");
    if (file) {
       while ((c = getc(file)) != EOF)
       putchar(c);
    fclose(file);
    }
#endif
}

// Check available CPU Governors
void cpugovernors()
{
    printf("\nCurrent available CPU Governors:\n");
    ccat("/sys/devices/system/cpu/cpu0/cpufreq/scaling_available_governors");
#if 0
    int c;
    FILE *file;
    file = fopen("/sys/devices/system/cpu/cpu0/cpufreq/scaling_available_governors", "r");
    if (file) {
       while ((c = getc(file)) != EOF)
       putchar(c);
    fclose(file);
    }
#endif
}

// Check available CPU Frequencies
void cpufreqs()
{
    printf("\nCurrent available CPU Frequencies:\n");
    ccat("/sys/devices/system/cpu/cpu0/cpufreq/scaling_available_frequencies");
#if 0
    int c;
    FILE *file;
    file = fopen("/sys/devices/system/cpu/cpu0/cpufreq/scaling_available_frequencies", "r");
    if (file) {
       while ((c = getc(file)) != EOF)
       putchar(c);
    fclose(file);
    }
#endif
}

// ReadAhead Internal
void readahead()
{
  printf( "Cache size of Internal SDCard:\n");
  ccat(HW_READAHEAD_EXTERNAL_PATH);
#if 0
            int c2;
            FILE *file2;
            file2 = fopen("/sys/block/mmcblk0/queue/read_ahead_kb", "r");
            if (file2) {
               while ((c2 = getc(file2)) != EOF)
               putchar(c2);
          fclose(file2);
          }
#endif
}

// ReadAhead External
void readahead2()
{
	
 	    printf( "\nCache size of External SDCard:\n");
 	    ccat(HW_READAHEAD_EXTERNAL_PATH);
#if 0
            int c1;
            FILE *file;
            file = fopen("/sys/block/mmcblk0/queue/read_ahead_kb", "r");
            if (file) {
               while ((c1 = getc(file)) != EOF)
               putchar(c1);
            fclose(file);
            }
#endif
 }



// Check I/O Scheduler
void iosched()
{
    printf("\nCurrent I/O Schedulder:\n");
    ccat("/sys/block/mmcblk0/queue/scheduler");
#if 0
    int c;
    FILE *file;
    file = fopen("/sys/block/mmcblk0/queue/scheduler", "r");
    if (file) {
       while ((c = getc(file)) != EOF)
       putchar(c);
    fclose(file);
    }
#endif
}



// Undervolt and Overvolt menu
void uvovmenu()
{
    for (;;)
     {
            printf( "\nUndervolt or Overvolt?\n\n"
    	    " [1] Undervolt\n"
	    " [2] Overvolt\n"
	    " [3] Cancel\n"
            "\nChoice: ");
            int uvorov;
            scanf ( "%d", &uvorov );
	   if ( uvorov==1) {
	            printf( "\nUndervolt CPU by how many mV?\n\n"
	            " [1] 25mV\n"
		    " [2] 50mV\n"
		    " [3] 75mV\n"
		    " [4] 100mV\n\n"
		    " [0] Cancel\n"
		    "\nChoice: "):
		    int uvcount;
		    scanf ( "%d", &uvcount );
		    if ( ovcount==1)
		       vol("-25000");

		    if ( ovcount==2)
		       vol("-50000");

		    if ( ovcount==3)
		       vol("-75000");

		    if ( ovcount==4)
		       vol("-100000");


	            if ( uvcount == 0)
		       load_menu();
	   }

      else if ( uvorov==2) {

		    printf( "Overvolt by how many mV?\n\n"
	            " [1] 25mV\n"
		    " [2] 50mV\n"
		    " [3] 75mV\n"
		    " [4] 100mV\n"
		    " [0] Cancel\n"
		    "\nChoice: ");
		    int ovcount;
		    scanf ( "%d", &ovcount );
		    if ( ovcount==1)
		       vol("+25000");

		    if ( ovcount==2)
		       vol("+50000");

		    if ( ovcount==3)
		       vol("+75000");

		    if ( ovcount==4)
		       vol("+100000");

		    if ( ovcount==0)
		       load_menu();

            }
      else if ( uvorov==3 ) {
            	break;
      }

   }

}


void readaheadint()
{
	 printf( "Cache size of Internal SDCard?\n\n"
	    	    " [1] 256kb (default)\n"
		    " [2] 512kb\n"
	            " [3] 1024kb\n"
	            " [4] 2048kb\n"
	            " [5] 3072kb\n"
	            " [6] 4096kb\n"
	            " [0] Cancel\n"
	            "\nChoice: ");
	            int raint2;
	            scanf ( "%d", &raint2 );
	            if ( raint2==1)
	               raint("256");
	            if ( raint2==2)
	               raint("512");

	            if ( raint2==3)
	               raint("1024");

	            if ( raint2==4)
	               raint("2048");

	            if ( raint2==5)
	               raint("3072");

	            if ( raint2==6)
	               raint("4096");

	            if ( raint2==0)
	            	load_menu();

}

void readaheadext()
{
	        printf( "Cache size of External SDCard?\n\n"
	        " [1] 256kb (default)\n"
		" [2] 512kb\n"
		" [3] 1024kb\n"
		" [4] 2048kb\n"
		" [5] 3072kb\n"
		" [6] 4096kb\n"
		" [0] Cancel\n"
		"\nChoice: ");
		int raext2;
		scanf ( "%d", &raext2 );
		if ( raext2==1)
		   raext("256");
		if ( raext2==2)
		   raext("512");
		if ( raext2==3)
		   raext("1024");
		if ( raext2==4)
		   raext("2048");
		if ( raext2==5)
		   raext("3072");
		if ( raext2==6)
		   raext("4096");
		if ( raext2==0)
			load_menu();

}

void setscheduler()
{

        printf("not implemented yet..."); 
//      iosched();
//	printf( "\nNew I/O Scheduler: ");
//      char newsched;
//      scanf ( "%s", &newsched );
//      printf("%s", newsched);
  
}

// CPU Gov / Min/Max Freq Menu
void cpumenu()
{
    for (;;)
     {
            printf( "What do you want to change?\n\n"
    	    " [1] CPU Governor\n"
	    " [2] CPU Min Freq\n"
            " [3] CPU Max Freq\n"
            " [0] Exit\n"
            "\nChoice: ");
            int cpuchoice;
            scanf ( "%d", &cpuchoice );
            if ( cpuchoice==1)
               cpugovernors();
            if ( cpuchoice==2)
               cpufreqs();
            if ( cpuchoice==3)
               cpufreqs();
            if ( cpuchoice==0)
            	break;
      }

}

// Readahead menu
void readaheadmenu()
{
    for (;;)
     {
            printf( "What do you want to change?\n\n"
    	    " [1] Internal SDCard cache size\n"
	    " [2] External SDCard cache size\n"
            " [0] Noting\n"
            "\nChoice: ");
            int readaheadchoice;
            scanf ( "%d", &readaheadchoice );
            if ( readaheadchoice==1)
               readaheadint();
            if ( readaheadchoice==2)
                readaheadext();
            if ( readaheadchoice==0)
            	break;
      }

}



// Load menu
int main(int argc, char** argv)
{
load_menu();
return 0;
}

// Menu
void load_menu(void)
{
int choice;

do
{

		    printf( "\n - S4 Utils v0.2 (by broodplank)\n\n"
		    "  ----[ CPU Settings ]----\n"
		    " [1] Check current CPU frequency/voltage table and governor\n"
		    " [2] Undervolt / Overvolt CPU\n"
		    " [3] CPU Governor and Min/Max Freq\n\n"
		    " ----[ I/O Settings ]----\n"
		    " [4] Check current readahead and I/O scheduler \n"
		    " [5] Set Readahead for Internal/External SD\n"
		    " [6] Set I/O Scheduler\n\n"
                    " ----[ Install / Restore ]----\n"
		    " [7] Make current settings persistent\n"
		    " [8] Restore default settings\n\n"
		    "  ----[ Extra ]----\n"
		    " [9] Fake Factory Reset\n\n"
		    " [0] Exit\n\n"
		    "Selection: " );
		    scanf( "%d", &choice );
		    switch (choice)
	             {
			case 1:
			    vddlevels();
			    printf("\n");
			    cpugovernor();
			    break;


			case 2:
			    uvovmenu();
			    break;

			case 3:
			    cpumenu();
			    break;

			case 4:
		 	    readahead();
			    printf("\n");
			    readahead2();
			    printf("\n");
			    iosched();
			    break;

			case 5:
                            readaheadmenu();
                            break;

			 case 6:
		            setscheduler();
			    break;

			case 7:
			    fbimg();
			    break;

			case 8:
			    frimg();
			    break;

			case 0:
			    break;

			default:
			    printf( "Bad input, quitting!\n" );
			    break;
	     }


  } while (choice != 0);
}

