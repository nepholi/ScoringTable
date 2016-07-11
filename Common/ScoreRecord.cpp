#include "ScoreRecord.h"

namespace waa {
	
	int ScoreTimeStamp[2][100] = {};
	void time_record(int team ,int score,int time){
		ScoreTimeStamp[team][score] = time;
	}
	void TimeStampInitial(void){
		int i = 0;
		for (i = 0; i < 100; i++){
			ScoreTimeStamp[0][i] = 0;
			ScoreTimeStamp[1][i] = 0;
		}		
	}
	void ReportOutput(void){

			FILE *ofp;
			int i = 0;
			char outputFilename[] = "ScoreRecord.txt";

			ofp = fopen(outputFilename, "w");

			if (ofp == NULL) {
				fprintf(stderr, "Can't open output file %s!\n", outputFilename);
				exit(1);
			}
			fprintf(ofp, "score\tHome\tGuest\n");
			while (i<100) {
				fprintf(ofp, "%d\t%d\t%d\n", i, ScoreTimeStamp[0][i], ScoreTimeStamp[1][i]);
				i++;
			}
		
			fclose(ofp);
			return;
	}
	
};//namespace waa