#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get_gc_content Function", "verification") {
	REQUIRE(get_gc_content("AGCTATAG") == .375);
	REQUIRE(get_gc_content("CGCTATAG") == .50);
}
TEST_CASE("Verify get_dna_complement Function", "verification") {
	REQUIRE(get_dna_complement("AAAACCCGGT").compare("ACCGGGTTTT"));
	REQUIRE(get_dna_complement("CCCGGAAAAT").compare("ATTTTCCGGG"));
}
TEST_CASE("Verify reverse_string Function", "verification") {
	REQUIRE(reverse_string("AGCTATAG").compare("GATATCGA"));
	REQUIRE(reverse_string("CGCTATAG").compare("GATATCGC"));
}


