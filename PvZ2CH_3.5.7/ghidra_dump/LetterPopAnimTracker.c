// Class: LetterPopAnimTracker


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LetterPopAnimTracker::onAnimStopped(std::string const&) */

void LetterPopAnimTracker::onAnimStopped(string *param_1)

{
  long *plVar1;
  code *pcVar2;
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  plVar1 = *(long **)param_1;
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*plVar1 + 0x78);
  std::string::string(asStack_28,"animation_off");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (*pcVar2)(plVar1,asStack_28,0,0,avStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  std::string::~string(asStack_28);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

