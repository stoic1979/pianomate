echo "g++ -o note_generator_test -I.. -fprofile-arcs -ftest-coverage note_generator_test.cpp ../note_generator.cpp ../western_note_generator.cpp ../indian_note_generator.cpp -lgtest -pthread"
g++ -o note_generator_test -I.. -fprofile-arcs -ftest-coverage note_generator_test.cpp ../note_generator.cpp ../western_note_generator.cpp ../indian_note_generator.cpp -lgtest -pthread

echo "Generating code coverage"
gcov note_generator_test.cpp

echo "Generating line coverage"
lcov -c -a --directory . --output-file note_generator_test_coverage.info


echo "Generating HTML"
genhtml note_generator_test_coverage.info --output-directory out
