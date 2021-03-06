#define MAX_U8 256

void getHistogram_U8(uint8 *in, uint32 *hist, int length);
void limitedHist_U8(uint32 *hist, uint32 *hist2, int upLimit, int downLimit, bool limitSave);
void accumHistogram_U8(uint32 *hist, uint32 *accumHist, bool normalize);
void getAccumHistogram_U8(uint8 *imgIn, uint32 *accumHist, int length, bool normalize);
void histEQ_AH_U8(uint8 *imgIn, uint8 *imgOut, uint32 *accumHist, int length);
void histEQ_H_U8(uint8 *imgIn, uint8 *imgOut, uint32 *hist, int length);
void histEQ_U8(uint8 *imgIn, uint8 *imgOut, int length);

