
#ifndef HSCP_ANALYSIS_GLOBAL
#define HSCP_ANALYSIS_GLOBAL

const double pi = 3.1415926535;

std::string        dEdxS_Label     = "dedxASmi";
double             dEdxS_UpLim     = 1.0;
std::string        dEdxS_Legend    = "I_{as}";
std::string        dEdxM_Label     = "dedxHarm2";
double             dEdxM_UpLim     = 15.0;
std::string        dEdxM_Legend    = "I_{h} (MeV/cm)";
double             dEdxK_Data      = 2.529; //2.67;//25857;
double             dEdxC_Data      = 2.772; //2.44;//2.5497;
double             dEdxK_MC        = 2.529; //2.67;//2.5404;
double             dEdxC_MC        = 2.772; //2.44;//2.6433;

std::string        TOF_Label       = "combined";
std::string        TOFdt_Label     = "dt";
std::string        TOFcsc_Label    = "csc";

double             PtHistoUpperBound   = 1200;
double             MassHistoUpperBound = 2000;
int		   MassNBins           = 200;
double             IPHistoUpperBound   = 200;
double             IPLimit             = 300;

float              GlobalMaxV3D  =   0.50;
float              GlobalMaxDZ   =   2.00;
float              GlobalMaxDXY  =   2.00;//0.25;
float              GlobalMaxChi2 =   5.0;
int                GlobalMinQual =   2;
unsigned int       GlobalMinNOH  =   11;
unsigned int       GlobalMinNOM  =   6;
double             GlobalMinNDOF =   8;
double             GlobalMinNDOFDT  =  6;
double             GlobalMinNDOFCSC =  6;
double             GlobalMaxTOFErr =   0.07;
double             GlobalMaxPterr=   0.25;
double             GlobalMaxTIsol = 50;
double             GlobalMaxEIsol = 0.30;
double             GlobalMinPt   =   50.00;
double             GlobalMinIs   =   0.0;
double             GlobalMinIm   =   3.0;
double             GlobalMinTOF  =   1.0;
float              GlobalMaxEta  =  1.5; 

float              DTRegion      =   0.9;
float              CSCRegion     =   0.9;
float              SAMaxDxy      =   25.;
float              SAMaxDz       =   20.;
float              CosmicMinDz   =   70.;
float              CosmicMaxDz   =   120.;
float              CosmicMinV3D  =   70.;
float              SAMaxDXY      =   10.00;
float              SATkMaxDXY    =   0.2;
double             SAMaxTOFErr   =   0.07;
double             SAMaxPterrSq  =   9999;
double             SAMinPt       =   80.00;
float              SAMaxEta      =   2.4;
//double             MaxDistTrigger=   0.4;
double             minSegEtaSep  = 0.04;

double		   MinCandidateMass = 100;

int		   TypeMode         = 0; //0 = All Candidates
					 //1 = Muon Candidates	
std::string        MODE="COMPILE";         


void InitdEdx(std::string dEdxS_Label_){
   if(dEdxS_Label_=="dedxASmi" || dEdxS_Label_=="dedxNPASmi"){
      dEdxS_UpLim  = 1.0;
      dEdxS_Legend = "I_{as}";
   }else if(dEdxS_Label_=="dedxProd" || dEdxS_Label_=="dedxNPProd"){
      dEdxS_UpLim  = 1.0;
      dEdxS_Legend = "I_{prod}";
   }else{
      dEdxS_UpLim  = 30.0;
      dEdxS_Legend = "I_{h} (MeV/cm)";
   }
}

const int DzRegions=6;
std::string RegionNames[DzRegions]={"Region0","Region1","Region2","Region3","Region4", "Region5"};
std::string LegendNames[DzRegions]={"dz < 6 cm","6 cm < dz < 30 cm","30 cm < dz < 50 cm","50 cm < dz < 70 cm","70 cm < dz < 120 cm", "dz > 120 cm"};

#endif