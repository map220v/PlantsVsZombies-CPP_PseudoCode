// Class: ConsoleApp


/* ConsoleApp::~ConsoleApp() */

void __thiscall ConsoleApp::~ConsoleApp(ConsoleApp *this)

{
  *(undefined ***)this = &PTR_ButtonPress_06759a50;
  *(undefined ***)(this + 8) = &PTR_DialogButtonPress_06759eb8;
  if (*(long *)(this + 0x998) != 0) {
    if (*(long *)(this + 0x998) == gConsole) {
      gConsole = 0;
    }
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    if (*(long **)(this + 0x998) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x998) + 0x18))();
    }
    *(undefined8 *)(this + 0x998) = 0;
  }
  Sexy::SexyApp::~SexyApp((SexyApp *)this);
  return;
}


/* ConsoleApp::~ConsoleApp() */

void __thiscall ConsoleApp::~ConsoleApp(ConsoleApp *this)

{
  ~ConsoleApp(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsoleApp::ConsolePrintf(int, char const*, ...) */

void ConsoleApp::ConsolePrintf(int param_1,char *param_2,...)

{
  uint uVar1;
  CommandConsole *this;
  long lVar2;
  char *in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined8 uStack_f8;
  Sexy aSStack_e8 [8];
  wstring awStack_e0 [8];
  undefined1 auStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar2 = ___stack_chk_guard;
  uVar1 = (uint)param_2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  if (*(long *)((ulong)(uint)param_1 + 0x998) != 0) {
    local_100 = auStack_30;
    uStack_f8 = 0xffffff80ffffffd8;
    local_110 = (undefined1 *)register0x00000008;
    puStack_108 = (undefined1 *)register0x00000008;
    Sexy::StrFormat(in_x2,aSStack_e8,&local_110);
    this = gConsole;
    if ((uVar1 >> 2 & 1) == 0) {
      if ((uVar1 >> 1 & 1) == 0) {
        Sexy::ToSexyString(aSStack_e8,(string *)&gConsole);
        CommandConsole::AddLine(this,awStack_e0,uVar1 & 2,(bool)((byte)param_2 & 1));
        FUN_05476c50(awStack_e0);
      }
      else {
        Sexy::ToSexyString(aSStack_e8,(string *)&gConsole);
        CommandConsole::AddLineWarn(this,awStack_e0,uVar1 & 4,true);
        FUN_05476c50(awStack_e0);
      }
    }
    else {
      Sexy::ToSexyString(aSStack_e8,(string *)&gConsole);
      CommandConsole::AddLineErr(this,awStack_e0,0,true);
      FUN_05476c50(awStack_e0);
    }
    std::string::~string((string *)aSStack_e8);
  }
  if (lVar2 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsoleApp::ConsolePrintf(char const*, ...) */

void ConsoleApp::ConsolePrintf(char *param_1,...)

{
  long lVar1;
  undefined8 uVar2;
  char *in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  string asStack_e0 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_f0 = &local_30;
  uStack_e8 = 0xffffff80ffffffd0;
  local_100 = (undefined1 *)register0x00000008;
  puStack_f8 = (undefined1 *)register0x00000008;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  Sexy::StrFormat(in_x1,asStack_e0,&local_100);
  uVar2 = FUN_0547429c(asStack_e0);
  ConsolePrintf((int)param_1,(char *)0x0,uVar2);
  std::string::~string(asStack_e0);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ConsoleApp::ConsoleApp() */

void __thiscall ConsoleApp::ConsoleApp(ConsoleApp *this)

{
  Sexy::SexyApp::SexyApp((SexyApp *)this);
  *(undefined ***)this = &PTR_ButtonPress_06759a50;
  *(undefined ***)(this + 8) = &PTR_DialogButtonPress_06759eb8;
  *(undefined8 *)(this + 0x998) = 0;
  gConsole = 0;
  gConsoleApp = this;
  ConsolePrintf((char *)this,"Console Started");
  return;
}


/* ConsoleApp::DebugKeyDown(int) */

char __thiscall ConsoleApp::DebugKeyDown(ConsoleApp *this,int param_1)

{
  char cVar1;
  byte bVar2;
  CommandConsole *this_00;
  
  cVar1 = Sexy::SexyAppBase::DebugKeyDown((int)this);
  if (cVar1 == '\0') {
    this_00 = *(CommandConsole **)(this + 0x998);
    cVar1 = '\0';
    if (param_1 == 0xc0 && this_00 != (CommandConsole *)0x0) {
      bVar2 = FUN_03c74580(this_00[0x1f0]);
      CommandConsole::Hide(this_00,(bool)(bVar2 ^ 1));
      return '\x01';
    }
  }
  return cVar1;
}

