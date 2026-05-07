// Class: PlayerList


/* PlayerList::PlayerList(UUIDCreator&) */

void __thiscall PlayerList::PlayerList(PlayerList *this,UUIDCreator *param_1)

{
  *(UUIDCreator **)this = param_1;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  return;
}


/* PlayerList::~PlayerList() */

void __thiscall PlayerList::~PlayerList(PlayerList *this)

{
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlayerList::Create(std::string) */

void PlayerList::Create(string *param_1,undefined8 *param_2,string *param_3)

{
  PACommand aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2);
  std::make_pair<std::string&,std::string&>(param_1,param_3);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::insert<std::pair<std::string,std::string>,void>
            ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)(param_2 + 1),(pair *)aPStack_18);
  Sexy::PACommand::~PACommand(aPStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}

