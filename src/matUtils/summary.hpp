#include "common.hpp"

po::variables_map parse_summary_command(po::parsed_options parsed);
void write_sample_table(MAT::Tree& T, std::string filename);
void write_clade_table(MAT::Tree& T, std::string filename);
void write_mutation_table(MAT::Tree& T, std::string filename);
void summary_main(po::parsed_options parsed);