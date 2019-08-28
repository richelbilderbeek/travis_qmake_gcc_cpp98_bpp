#include <iostream>

#include <Bpp/Seq/Alphabet/AlphabetTools.h>
#include <Bpp/Seq/Sequence.h>

int main()
{
  const bpp::BasicSequence sequence(
    "test",
    "ATGC",
    &bpp::AlphabetTools::DNA_ALPHABET
  );
  std::cout
    << "sequence name: " << sequence.getName() << '\n'
    << "sequence nucleotides: " << sequence.toString() << '\n'
    << "number of nucleotides: " << sequence.size() << '\n'
  ;
}
