// Class: DisplayAvatarActionsPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DisplayAvatarActionsPropertySheet::StaticClassInit() */

void DisplayAvatarActionsPropertySheet::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"DisplayAvatarActionsPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_03f87a70,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DisplayAvatarActionsPropertySheet::StaticGetClass() */

long * DisplayAvatarActionsPropertySheet::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"DisplayAvatarActionsPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DisplayAvatarActionsPropertySheet::GetClass() const */

long * DisplayAvatarActionsPropertySheet::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"DisplayAvatarActionsPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DisplayAvatarActionsPropertySheet::DisplayAvatarActionsPropertySheet() */

void __thiscall
DisplayAvatarActionsPropertySheet::DisplayAvatarActionsPropertySheet
          (DisplayAvatarActionsPropertySheet *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_067a3040;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* DisplayAvatarActionsPropertySheet::StaticNew() */

DisplayAvatarActionsPropertySheet * DisplayAvatarActionsPropertySheet::StaticNew(void)

{
  DisplayAvatarActionsPropertySheet *this;
  
  this = ::operator_new(0x28);
  DisplayAvatarActionsPropertySheet(this);
  return this;
}


/* DisplayAvatarActionsPropertySheet::~DisplayAvatarActionsPropertySheet() */

void __thiscall
DisplayAvatarActionsPropertySheet::~DisplayAvatarActionsPropertySheet
          (DisplayAvatarActionsPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_067a3040;
  std::vector<DisplayActionInfo,std::allocator<DisplayActionInfo>>::~vector
            ((vector<DisplayActionInfo,std::allocator<DisplayActionInfo>> *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* DisplayAvatarActionsPropertySheet::~DisplayAvatarActionsPropertySheet() */

void __thiscall
DisplayAvatarActionsPropertySheet::~DisplayAvatarActionsPropertySheet
          (DisplayAvatarActionsPropertySheet *this)

{
  ~DisplayAvatarActionsPropertySheet(this);
  AK::FreeHook(this);
  return;
}

