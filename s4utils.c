#include <stdio.h>
#include <stdlib.h>

// S4 Utils v0.1
// by broodplank



// UV and OV
void uv25()
{
     printf("\nLowering CPU VDD Voltage by 25mV\n");
     FILE *fp;
     FILE *fopen(const char *filename, const char *mode);
     fp=fopen("/sys/devices/system/cpu/cpufreq/vdd_table/vdd_levels", "w");
     fprintf(fp, "-25000");
     int fgetc (FILE *fp);
}

void ov25()
{
     printf("\nIncreasing CPU VDD Voltage by 25mV\n");
     FILE *fp;
     FILE *fopen(const char *filename, const char *mode);
     fp=fopen("/sys/devices/system/cpu/cpufreq/vdd_table/vdd_levels", "w");
     fprintf(fp, "+25000");
     int fgetc (FILE *fp);
}


void uv50()
{
     printf("\nLowering CPU VDD Voltage by 50mV\n");
     FILE *fp;
     FILE *fopen(const char *filename, const char *mode);
     fp=fopen("/sys/devices/system/cpu/cpufreq/vdd_table/vdd_levels", "w");
     fprintf(fp, "-50000");
     int fgetc (FILE *fp);
}

void ov50()
{
     printf("\nIncreasing CPU VDD Voltage by 50mV\n");
     FILE *fp;
     FILE *fopen(const char *filename, const char *mode);
     fp=fopen("/sys/devices/system/cpu/cpufreq/vdd_table/vdd_levels", "w");
     fprintf(fp, "+50000");
     int fgetc (FILE *fp);
}

void uv75()
{
     printf("\nLowering CPU VDD Voltage by 75mV\n");
     FILE *fp;
     FILE *fopen(const char *filename, const char *mode);
     fp=fopen("/sys/devices/system/cpu/cpufreq/vdd_table/vdd_levels", "w");
     fprintf(fp, "-75000");
     int fgetc (FILE *fp);
}

void ov75()
{
     printf("\nIncreasing CPU VDD Voltage by 75mV\n");
     FILE *fp;
     FILE *fopen(const char *filename, const char *mode);
     fp=fopen("/sys/devices/system/cpu/cpufreq/vdd_table/vdd_levels", "w");
     fprintf(fp, "+75000");
     int fgetc (FILE *fp);
}

void uv100()
{
     printf("\nLowering CPU VDD Voltage by 100mV\n");
     FILE *fp;
     FILE *fopen(const char *filename, const char *mode);
     fp=fopen("/sys/devices/system/cpu/cpufreq/vdd_table/vdd_levels", "w");
     fprintf(fp, "-100000");
     int fgetc (FILE *fp);
}

void ov100()
{
     printf("\nIncreasing CPU VDD Voltage by 100mV\n");
     FILE *fp;
     FILE *fopen(const char *filename, const char *mode);
     fp=fopen("/sys/devices/system/cpu/cpufreq/vdd_table/vdd_levels", "w");
     fprintf(fp, "+100000");
     int fgetc (FILE *fp);
}


// ReadAhead Cache size of internal and external sdcard
void raint256()
{ 
     printf("\nChanging Read Ahead Cache size for Internal sdcard to 256kb\n");
     FILE *fp;
     FILE *fopen(const char *filename, const char *mode);
     fp=fopen("/sys/block/mmcblk0/queue/read_ahead_kb", "w");
     fprintf(fp, "256");
     int fgetc (FILE *fp);
}

void raext256()
{ 
     printf("\nChanging Read Ahead Cache size for External sdcard to 256kb\n");
     FILE *fp;
     FILE *fopen(const char *filename, const char *mode);
     fp=fopen("/sys/block/mmcblk1/queue/read_ahead_kb", "w");
     fprintf(fp, "256");
     int fgetc (FILE *fp);
}

void raint512()
{ 
     printf("\nChanging Read Ahead Cache size for Internal sdcard to 512kb\n");
     FILE *fp;
     FILE *fopen(const char *filename, const char *mode);
     fp=fopen("/sys/block/mmcblk0/queue/read_ahead_kb", "w");
     fprintf(fp, "512");
     int fgetc (FILE *fp);
}

void raext512()
{ 
     printf("\nChanging Read Ahead Cache size for External sdcard to 512kb\n");
     FILE *fp;
     FILE *fopen(const char *filename, const char *mode);
     fp=fopen("/sys/block/mmcblk1/queue/read_ahead_kb", "w");
     fprintf(fp, "512");
     int fgetc (FILE *fp);
}

void raint1024()
{ 
     printf("\nChanging Read Ahead Cache size for Internal sdcard to 1024kb\n");
     FILE *fp;
     FILE *fopen(const char *filename, const char *mode);
     fp=fopen("/sys/block/mmcblk0/queue/read_ahead_kb", "w");
     fprintf(fp, "1024");
     int fgetc (FILE *fp);
}

void raext1024()
{ 
     printf("\nChanging Read Ahead Cache size for External sdcard to 1024kb\n");
     FILE *fp;
     FILE *fopen(const char *filename, const char *mode);
     fp=fopen("/sys/block/mmcblk1/queue/read_ahead_kb", "w");
     fprintf(fp, "1024");
     int fgetc (FILE *fp);
}

void raint2048()
{ 
     printf("\nChanging Read Ahead Cache size for Internal sdcard to 2048kb\n");
     FILE *fp;
     FILE *fopen(const char *filename, const char *mode);
     fp=fopen("/sys/block/mmcblk0/queue/read_ahead_kb", "w");
     fprintf(fp, "2048");
     int fgetc (FILE *fp);
}

void raext2048()
{ 
     printf("\nChanging Read Ahead Cache size for External sdcard to 2048kb\n");
     FILE *fp;
     FILE *fopen(const char *filename, const char *mode);
     fp=fopen("/sys/block/mmcblk1/queue/read_ahead_kb", "w");
     fprintf(fp, "2048");
     int fgetc (FILE *fp);
}

void raint3072()
{ 
     printf("\nChanging Read Ahead Cache size for Internal sdcard to 3072kb\n");
     FILE *fp;
     FILE *fopen(const char *filename, const char *mode);
     fp=fopen("/sys/block/mmcblk0/queue/read_ahead_kb", "w");
     fprintf(fp, "3072");
     int fgetc (FILE *fp);
}

void raext3072()
{ 
     printf("\nChanging Read Ahead Cache size for External sdcard to 3072kb\n");
     FILE *fp;
     FILE *fopen(const char *filename, const char *mode);
     fp=fopen("/sys/block/mmcblk1/queue/read_ahead_kb", "w");
     fprintf(fp, "3072");
     int fgetc (FILE *fp);
}


void raint4096()
{ 
     printf("\nChanging Read Ahead Cache size for Internal sdcard to 4096kb\n");
     FILE *fp;
     FILE *fopen(const char *filename, const char *mode);
     fp=fopen("/sys/block/mmcblk0/queue/read_ahead_kb", "w");
     fprintf(fp, "4096");
     int fgetc (FILE *fp);
}

void raext4096()
{ 
     printf("\nChanging Read Ahead Cache size for External sdcard to 4096kb\n");
     FILE *fp;
     FILE *fopen(const char *filename, const char *mode);
     fp=fopen("/sys/block/mmcblk1/queue/read_ahead_kb", "w");
     fprintf(fp, "4096");
     int fgetc (FILE *fp);
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

//Main
int main()
{

    int input;    
    printf("\n - S4 Utils v0.1\n");
    printf(" by broodplank\n");
    printf(" For all S4 variants\n\n");
    printf(" Tweaks Menu:\n"); 
    printf( " [1] Check current CPU frequency/voltage table\n" );
    printf( " [2] Undervolt CPU\n" );
    printf( " [3] Overvolt CPU\n\n" );
    printf( " [4] Check current readahead for In/external SDCard\n");
    printf( " [5] Set Readahead for Internal SD\n");
    printf( " [6] Set Readahead for External SD\n\n" );
    printf("  Flash Menu:\n"); 
    printf( " [7] flash /sdcard/boot.img\n" );
    printf( " [8] flash /sdcard/recovery.img\n\n" );
    printf("  Other:\n"); 
    printf( " [9] No function implemented yet\n" );
    printf( " [0] Exit\n\n" );
    printf( "Selection: " );
    scanf( "%d", &input );
    switch ( input ) {
        case 1: 
            printf("\nCurrent Voltage Table:\n");
            int c;
            FILE *file;
            file = fopen("/sys/devices/system/cpu/cpufreq/vdd_table/vdd_levels", "r");
            if (file) {
               while ((c = getc(file)) != EOF)
               putchar(c);
            fclose(file);
            } 
            break;
        case 2: 
            printf( "\nUndervolt CPU by how many mV?\n\n");
    	    printf( " [1] 25mV\n" );
	    printf( " [2] 50mV\n" );
            printf( " [3] 75mV\n" );
            printf( " [4] 100mV\n" );
            printf( "\nChoice: ");
            int uvcount;
            scanf ( "%d", &uvcount );
            if ( uvcount==1) {
               uv25();
            }
            if ( uvcount==2) { 
               uv50();
            }
            if ( uvcount==3) {
               uv75();
            }
            if ( uvcount==4) {
               uv100();
            }
            break;
        case 3:
            printf( "Overvolt by how many mV?\n\n");
    	    printf( " [1] 25mV\n" );
	    printf( " [2] 50mV\n" );
            printf( " [3] 75mV\n" );
            printf( " [4] 100mV\n" );
            printf( "\nChoice: ");
            int ovcount;
            scanf ( "%d", &ovcount );
            if ( ovcount==1) {
               ov25();
            }
            if ( ovcount==2) { 
               ov50();
            }
            if ( ovcount==3) {
               ov75();
            }
            if ( ovcount==4) {
               ov100();
            } 
            break;
        case 4:
 	    printf( "Cache size of Internal SDCard:\n");
            int c2;
            FILE *file2;
            file2 = fopen("/sys/block/mmcblk0/queue/read_ahead_kb", "r");
            if (file2) {
               while ((c2 = getc(file2)) != EOF)
               putchar(c2);
            fclose(file2);
            } 
 	    printf( "\nCache size of External SDCard:\n");
            int c1;
            FILE *file1;
            file1 = fopen("/sys/block/mmcblk1/queue/read_ahead_kb", "r");
            if (file1) {
               while ((c1 = getc(file1)) != EOF)
               putchar(c1);
            fclose(file1);
            } 
            if ( c1="" ) {
               printf("no external sdcard found\n\n");
            }
            
            break;
        case 5:
 	    printf( "Cache size of Internal SDCard?\n\n");
    	    printf( " [1] 256kb (default)\n" );
	    printf( " [2] 512kb\n" );
            printf( " [3] 1024kb\n" );
            printf( " [4] 2048kb\n" );
            printf( " [5] 3072kb\n" );
            printf( " [6] 4096kb\n" );
            printf( "\nChoice: ");
            int raint;
            scanf ( "%d", &raint );
            if ( raint==1) {
               raint256();
            }
            if ( raint==2) {
               raint512();
            }
            if ( raint==3) {
               raint1024();
            }
            if ( raint==4) {
               raint2048();
            }
            if ( raint==5) {
               raint3072();
            }
            if ( raint==6) {
               raint4096();
            }
            break;
         case 6:
 	    printf( "Cache size of External SDCard?\n\n");
    	    printf( " [1] 256kb (default)\n" );
	    printf( " [2] 512kb\n" );
            printf( " [3] 1024kb\n" );
            printf( " [4] 2048kb\n" );
            printf( " [5] 3072kb\n" );
            printf( " [6] 4096kb\n" );
            printf( "\nChoice: ");
            int raext;
            scanf ( "%d", &raext );
            if ( raext==1) {
               raext256();
            }
            if ( raext==2) {
               raext512();
            }
            if ( raext==3) {
               raext1024();
            }
            if ( raext==4) {
               raext2048();
            }
            if ( raext==5) {
               raext3072();
            }
            if ( raext==6) {
               raext4096();
            }
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
    getchar();

    return 0

;}


