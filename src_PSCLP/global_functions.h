#ifndef FUNCTIONS_local_HEADER
#define FUNCTIONS_local_HEADER

#include "global_variables.h"


/*****************************************************************/
void READ_NEW_FILE(instance *inst);
/*****************************************************************/

/*****************************************************************/
void  compute_super_rho(instance *inst);
/*****************************************************************/

/*****************************************************************/
double compute_single_location_coverage(instance *inst, int location);
/*****************************************************************/

/*****************************************************************/
double compute_subset_location_coverage(instance *inst,double *y);
/*****************************************************************/

/*****************************************************************/
int compute_subset_location_coverage_clients(instance *inst,double *y,bool *reached_clients);
/*****************************************************************/

/*****************************************************************/
void compute_location_coverage(instance *inst);
/*****************************************************************/

/*****************************************************************/
void create_demands_and_costs(instance *inst);
/*****************************************************************/

/*****************************************************************/
void draw_grid(instance *inst);
/*****************************************************************/

/*****************************************************************/
void draw_grid_sol(instance *inst,int *yy,int *zz);
/*****************************************************************/

/*****************************************************************/
double distance(double x1,double y1,double x2, double y2);
/*****************************************************************/

/*****************************************************************/
double distance_manatthan(double x1,double y1,double x2, double y2);
/*****************************************************************/

/*****************************************************************/
int randomBETWEEN(int min,int max);
/*****************************************************************/

/*****************************************************************/
void random_input_grid(instance *inst,int n_locations_input,int n_clients_input);
/*****************************************************************/

/*****************************************************************/
void random_input_grid_2(instance *inst,int n_locations_input,int n_clients_input);
/*****************************************************************/

/*****************************************************************/
void random_input(instance *inst,int n_locations_input,int n_clients_input);
/*****************************************************************/

/*****************************************************************/
double random01();
/*****************************************************************/

/*****************************************************************/
void debug(const char *err);
/*****************************************************************/

/*****************************************************************/
void print_error(const char *err);
/*****************************************************************/

/*****************************************************************/
double clean(double x);
/*****************************************************************/

/*****************************************************************/
void random_input(instance *inst);
/*****************************************************************/

/*****************************************************************/
void read_input(instance *inst);
/*****************************************************************/

/*****************************************************************/
void free_data(instance *inst);
/*****************************************************************/

/*****************************************************************/
void build_data_structure(instance *inst,vector < vector < int > > dummy);
/*****************************************************************/

/*****************************************************************/
void read_input_lit(instance *inst);
/*****************************************************************/

/*****************************************************************/
double distance_geo_pap(double lat_i,double lon_i,double lat_j, double lon_j);
/*****************************************************************/

/*****************************************************************/
double distance_geo_site(double lat1, double lon1, double lat2, double lon2, char unit);
/*****************************************************************/

/*****************************************************************/
double deg2rad(double);
/*****************************************************************/

/*****************************************************************/
double rad2deg(double);
/*****************************************************************/

/*****************************************************************/
void random_input_grid_3(instance *inst,int n_locations_input,int n_clients_input);
/*****************************************************************/

/*****************************************************************/
void  compute_super_rho_DFL(instance *inst,double *DFL_super_rho,double *DFL_SET);
/*****************************************************************/

/*****************************************************************/
void  compute_super_rho_CFL(instance *inst,double *CFL_super_rho,double *CFL_SET);
/*****************************************************************/

/*****************************************************************/
void  compute_single_rho_CFL(instance *inst,double *CFL_single_rho,double *CFL_SET);
/*****************************************************************/

/*****************************************************************/
void  compute_single_rho_DFL(instance *inst,double *DFL_single_rho,double *DFL_SET);
/*****************************************************************/

/*****************************************************************/
void load_I_TILDE_CFL(instance *inst, bool rounding,double *I_TILDE_CFL,double *CFL_BEN_2_Y);
/*****************************************************************/

/*****************************************************************/
void load_I_TILDE_DFL(instance *inst, bool rounding,double *I_TILDE_DFL,double *DFL_BEN_2_Y);
/*****************************************************************/

/*****************************************************************/
void comb_solve_model_CFL_BEN_2_AUX_1(instance *inst,double *I_TILDE,double *AUX_SOL);
/*****************************************************************/

/*****************************************************************/
void comb_solve_model_DFL_BEN_2_AUX_1(instance *inst,double *I_TILDE,double *AUX_SOL);
/*****************************************************************/

/*****************************************************************/
void comb_solve_model_CFL_BEN_2_AUX_2(instance *inst,double *I_TILDE,double *AUX_SOL);
/*****************************************************************/

/*****************************************************************/
void comb_solve_model_DFL_BEN_2_AUX_2(instance *inst,double *I_TILDE,double *AUX_SOL);
/*****************************************************************/



#endif
