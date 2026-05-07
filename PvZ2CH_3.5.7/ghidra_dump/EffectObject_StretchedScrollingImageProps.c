// Class: EffectObject_StretchedScrollingImageProps


/* EffectObject_StretchedScrollingImageProps::~EffectObject_StretchedScrollingImageProps() */

void __thiscall
EffectObject_StretchedScrollingImageProps::~EffectObject_StretchedScrollingImageProps
          (EffectObject_StretchedScrollingImageProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06760260;
  EffectObjectPropertySheet::~EffectObjectPropertySheet((EffectObjectPropertySheet *)this);
  return;
}


/* EffectObject_StretchedScrollingImageProps::~EffectObject_StretchedScrollingImageProps() */

void __thiscall
EffectObject_StretchedScrollingImageProps::~EffectObject_StretchedScrollingImageProps
          (EffectObject_StretchedScrollingImageProps *this)

{
  ~EffectObject_StretchedScrollingImageProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_StretchedScrollingImageProps::StaticClassInit() */

void EffectObject_StretchedScrollingImageProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectObject_StretchedScrollingImageProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03cdad24,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_StretchedScrollingImageProps::StaticGetClass() */

long * EffectObject_StretchedScrollingImageProps::StaticGetClass(void)

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
  uVar2 = EffectObjectPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"EffectObject_StretchedScrollingImageProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_StretchedScrollingImageProps::GetClass() const */

long * EffectObject_StretchedScrollingImageProps::GetClass(void)

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
  uVar2 = EffectObjectPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"EffectObject_StretchedScrollingImageProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_StretchedScrollingImageProps::EffectObject_StretchedScrollingImageProps() */

void __thiscall
EffectObject_StretchedScrollingImageProps::EffectObject_StretchedScrollingImageProps
          (EffectObject_StretchedScrollingImageProps *this)

{
  long lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EffectObjectPropertySheet::EffectObjectPropertySheet((EffectObjectPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06760260;
  Sexy::Color::Color((Color *)(this + 0x30));
  Sexy::Color::Color((Color *)&local_18,1);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x40) = 0x40a00000;
  *(undefined8 *)(this + 0x30) = local_18;
  *(undefined8 *)(this + 0x38) = uStack_10;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0x3f800000;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_StretchedScrollingImageProps::StaticNew() */

EffectObject_StretchedScrollingImageProps *
EffectObject_StretchedScrollingImageProps::StaticNew(void)

{
  EffectObject_StretchedScrollingImageProps *this;
  
  this = ::operator_new(0x50);
  EffectObject_StretchedScrollingImageProps(this);
  return this;
}

