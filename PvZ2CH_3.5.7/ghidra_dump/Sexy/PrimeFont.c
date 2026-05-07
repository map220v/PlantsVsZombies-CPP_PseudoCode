// Class: Sexy::PrimeFont


/* Sexy::PrimeFont::StaticClassInit() */

void Sexy::PrimeFont::StaticClassInit(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = StaticGetClass();
  uVar2 = ResourceInfoTypes::PrimeFontRes::StaticGetClass();
  FUN_05338404(lVar1 + 0x48,uVar2);
  return;
}


/* Sexy::PrimeFont::StaticGetClass() */

long * Sexy::PrimeFont::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = BaseResource::StaticGetClass();
  (*pcVar3)(plVar1,"PrimeFont",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::PrimeFont::GetClass() const */

long * Sexy::PrimeFont::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = BaseResource::StaticGetClass();
  (*pcVar3)(plVar1,"PrimeFont",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::PrimeFont::~PrimeFont() */

void __thiscall Sexy::PrimeFont::~PrimeFont(PrimeFont *this)

{
  FontDescription *pFVar1;
  
  *(undefined ***)this = &PTR_GetClass_06a365f0;
  pFVar1 = (FontDescription *)PrimeText::Instance();
  PrimeText::Font_Remove(pFVar1);
  BaseResource::~BaseResource((BaseResource *)this);
  return;
}


/* Sexy::PrimeFont::~PrimeFont() */

void __thiscall Sexy::PrimeFont::~PrimeFont(PrimeFont *this)

{
  ~PrimeFont(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::PrimeFont::PrimeFont(Sexy::PrimeFont const&) */

void __thiscall Sexy::PrimeFont::PrimeFont(PrimeFont *this,PrimeFont *param_1)

{
  BaseResource::BaseResource((BaseResource *)this);
  *(undefined ***)this = &PTR_GetClass_06a365f0;
  EA::Text::FontDescription::FontDescription((FontDescription *)(this + 0x18));
  return;
}


/* Sexy::PrimeFont::StaticNew() */

PrimeFont * Sexy::PrimeFont::StaticNew(void)

{
  PrimeFont *this;
  PrimeFont *extraout_x1;
  
  this = ::operator_new(0x90);
  PrimeFont(this,extraout_x1);
  return this;
}


/* Sexy::PrimeFont::LoadFromMem(unsigned long, void const*, char const*) */

undefined8 Sexy::PrimeFont::LoadFromMem(ulong param_1,void *param_2,char *param_3)

{
  PrimeText *this;
  
  this = (PrimeText *)PrimeText::Instance();
  PrimeText::Font_AddTrueType(this,param_3,(ulong)param_2,(FontDescription *)(param_1 + 0x18));
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeFont::LoadResourceFile(char const*) */

void __thiscall Sexy::PrimeFont::LoadResourceFile(PrimeFont *this,char *param_1)

{
  SexyAppBase *this_00;
  char cVar1;
  undefined1 uVar2;
  char *local_20;
  void *local_18;
  string asStack_10 [8];
  long local_8;
  
  this_00 = gSexyAppBase;
  local_8 = ___stack_chk_guard;
  local_20 = (char *)0x0;
  local_18 = (void *)0x0;
  std::string::string(asStack_10,param_1);
  cVar1 = SexyAppBase::ReadBufferFromFile(this_00,asStack_10,&local_20,(ulong *)&local_18);
  std::string::~string(asStack_10);
  nop();
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = LoadFromMem((ulong)this,local_18,local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

