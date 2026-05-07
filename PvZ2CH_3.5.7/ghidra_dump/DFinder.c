// Class: DFinder


/* DFinder::createDirectory(std::string const&) */

void DFinder::createDirectory(string *param_1)

{
  (**(code **)(*Sexy::gFileDriver + 0x120))(Sexy::gFileDriver,param_1);
  return;
}


/* DFinder::removeFile(std::string const&) */

void DFinder::removeFile(string *param_1)

{
  (**(code **)(*Sexy::gFileDriver + 0x140))(Sexy::gFileDriver,param_1);
  return;
}

