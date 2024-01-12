#include "Astro/time_converter.hpp"



namespace Propagator {
TimeConverter::TimeConverter(std::string& time_table_fdir) {
    struct DUT1LUT {
        double JD;
        double DUT1;

        static DUT1LUT& getInstance() {
            static DUT1LUT instance;
            return instance;
        }
    };

}


}
//        std::ifstream time_table(time_table_fdir);
//        if (!time_table.is_open()) {
//            std::cout << "Error opening file";
//            exit(1);
//        }
//        std::string line;
//        std::getline(time_table, line);
//        std::istringstream iss(line);
//        std::vector<std::string> tokens{std::istream_iterator<std::string>{iss},
//                                        std::istream_iterator<std::string>{}};
//        for (int i = 0; i < tokens.size(); i++) {
//            if (tokens[i] == "JD") {
//                JD_idx = i;
//            } else if (tokens[i] == "UTC") {
//                UTC_idx = i;
//            } else if (tokens[i] == "TT") {
//                TT_idx = i;
//            } else if (tokens[i] == "UT1") {
//                UT1_idx = i;
//            } else if (tokens[i] == "TDB") {
//                TDB_idx = i;
//            } else if (tokens[i] == "TCG") {
//                TCG_idx = i;
//            } else if (tokens[i] == "TCB") {
//                TCB_idx = i;
//            } else if (tokens[i] == "GMST") {
//                GMST_idx = i;
//            } else if (tokens[i] == "GAST") {
//                GAST_idx = i;
//            } else if (tokens[i] == "LAST") {
//                LAST_idx = i;
//            } else if (tokens[i] == "GMST0") {
//                GMST0_idx = i;
//            } else if (tokens[i] == "GAST0") {
//                GAST0_idx = i;
//            } else if (tokens[i] == "LAST0") {
//                LAST0_idx = i;
//            } else if (tokens[i] == "EQEQ") {
//                EQEQ_idx = i;
//            } else if (tokens[i] == "EOP") {
//                EOP_idx = i;
//            } else if (tokens[i] == "UT1_UTC") {
//                UT1_UTC_idx = i;
//            } else if (tokens[i] == "LOD") {
//                LOD_idx = i;
//            } else if (tokens[i] == "dPsi") {
//                dPsi_idx = i;
//
//}


