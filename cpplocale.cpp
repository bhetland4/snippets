// locale::global example
#include <iostream>       // std::cout
#include <locale>         // std::locale

int main (void) {
  std::locale foo;     // the "C" locale (a copy of the current global)
  foo.global(std::locale("")); // the global changes (from environment)
  std::locale bar;     // the "" locale (i.e. from global from env)

  std::cout << "foo and bar are ";
  std::cout << (foo==bar?"the same":"different");
  std::cout << ".\n";

  std::locale cla(std::locale::classic());
  std::locale nn("nn_NO.utf8");
  std::locale nb("nb_NO.utf8");
  std::locale loc("");
  std::cout << "foo.name: " << foo.name() <<
             "\nbar.name: " << bar.name() <<
             "\nnb.name:  " << nb.name() <<
             "\nloc.name: " << loc.name() <<
             "\ncla.name: " << cla.name() <<
             "\nclassic:  " << std::locale::classic().name() <<
             "\nnn.name:  " << nn.name() <<
             "\n";

  return 0;
}

