// Class: ConsoleListener


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsoleListener::AddConsoleAction(std::wstring const&, std::vector<std::wstring,
   std::allocator<std::wstring > > const&, int, std::wstring const&, std::wstring const&, int, bool)
    */

void __thiscall
ConsoleListener::AddConsoleAction
          (ConsoleListener *this,wstring *param_1,vector *param_2,int param_3,wstring *param_4,
          wstring *param_5,int param_6,bool param_7)

{
  ConsoleListener CVar1;
  char cVar2;
  ConsoleListener CVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  CommandConsole *pCVar8;
  ulong uVar9;
  string asStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar8 = *(CommandConsole **)(gConsoleApp + 0x998);
  if (pCVar8 == (CommandConsole *)0x0) {
    CVar3 = (ConsoleListener)0x0;
  }
  else if (this[8] == (ConsoleListener)0x0) {
    cVar2 = std::operator==(param_1,param_4);
    if (cVar2 != '\0') {
      CVar3 = (ConsoleListener)ConsoleEnsureArgs(param_2,param_6);
      if (CVar3 != (ConsoleListener)0x0) {
        CVar1 = this[9];
        if (CVar1 != (ConsoleListener)0x0) {
          uVar4 = FUN_054766ec(param_4);
          Sexy::StrFormat("^8888ff^--> %S",asStack_28,uVar4);
          uVar7 = 0;
          while( true ) {
            uVar4 = *(undefined8 *)param_2;
            uVar9 = (ulong)uVar7;
            uVar6 = FUN_03c7492c(uVar4,*(undefined8 *)(param_2 + 8));
            if (uVar6 <= uVar9) break;
            uVar5 = FUN_0547429c();
            uVar7 = uVar7 + 1;
            FUN_03c74938(uVar4,uVar9);
            uVar4 = FUN_054766ec();
            Sexy::StrFormat("%s %S",asStack_20,uVar5,uVar4);
            FUN_05474278(asStack_28,asStack_20);
            std::string::~string(asStack_20);
          }
          std::string::~string(asStack_28);
          CVar3 = CVar1;
        }
        goto LAB_03c74ac4;
      }
    }
    CVar3 = (ConsoleListener)0x0;
  }
  else {
    fastdelegate::
    MakeDelegate<ConsoleListener,ConsoleListener,std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&,void>
              (this,(_func_void_wstring_ptr_vector_ptr *)0x0);
    CommandConsole::AddCommand(pCVar8,param_3,param_4,param_5,param_7,asStack_20);
    CVar3 = (ConsoleListener)0x0;
  }
LAB_03c74ac4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(CVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsoleListener::DefineConsoleCommands() */

void __thiscall ConsoleListener::DefineConsoleCommands(ConsoleListener *this)

{
  code *pcVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  this[8] = (ConsoleListener)0x1;
  local_8 = ___stack_chk_guard;
  pcVar1 = (code *)**(undefined8 **)this;
  FUN_05478178(auStack_28,&DAT_056f11a8,auStack_30);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (*pcVar1)(this,auStack_28,avStack_20);
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)avStack_20);
  FUN_05476c50(auStack_28);
  nop();
  this[8] = (ConsoleListener)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

