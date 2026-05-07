// Class: PlantAnimRig_Oakshooter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Oakshooter::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Oakshooter::PlayAttack(PlantAnimRig_Oakshooter *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3b8] == (PlantAnimRig_Oakshooter)0x0) {
    std::string::string(asStack_58,"attack");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,param_2);
  }
  else {
    std::string::string(asStack_58,"attack2");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,param_2);
  }
  iVar1 = PopAnimRig::PlayAndStop
                    ((PopAnimRig *)this,asStack_58,0,
                     (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* PlantAnimRig_Oakshooter::~PlantAnimRig_Oakshooter() */

void __thiscall PlantAnimRig_Oakshooter::~PlantAnimRig_Oakshooter(PlantAnimRig_Oakshooter *this)

{
  *(undefined ***)this = &PTR_GetClass_067a08b0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Oakshooter_067a0b18;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Oakshooter::~PlantAnimRig_Oakshooter() */

void __thiscall PlantAnimRig_Oakshooter::~PlantAnimRig_Oakshooter(PlantAnimRig_Oakshooter *this)

{
  ~PlantAnimRig_Oakshooter(this + -0x10);
  return;
}


/* PlantAnimRig_Oakshooter::~PlantAnimRig_Oakshooter() */

void __thiscall PlantAnimRig_Oakshooter::~PlantAnimRig_Oakshooter(PlantAnimRig_Oakshooter *this)

{
  ~PlantAnimRig_Oakshooter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Oakshooter::~PlantAnimRig_Oakshooter() */

void __thiscall PlantAnimRig_Oakshooter::~PlantAnimRig_Oakshooter(PlantAnimRig_Oakshooter *this)

{
  ~PlantAnimRig_Oakshooter(this + -0x10);
  return;
}


/* PlantAnimRig_Oakshooter::PlantAnimRig_Oakshooter() */

void __thiscall PlantAnimRig_Oakshooter::PlantAnimRig_Oakshooter(PlantAnimRig_Oakshooter *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067a08b0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Oakshooter_067a0b18;
  return;
}


/* PlantAnimRig_Oakshooter::StaticNew() */

PlantAnimRig_Oakshooter * PlantAnimRig_Oakshooter::StaticNew(void)

{
  PlantAnimRig_Oakshooter *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Oakshooter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Oakshooter::StaticClassInit() */

void PlantAnimRig_Oakshooter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Oakshooter");
    (*pcVar2)(plVar1,asStack_10,FUN_03f659d8,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Oakshooter::StaticGetClass() */

long * PlantAnimRig_Oakshooter::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Oakshooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Oakshooter::GetClass() const */

long * PlantAnimRig_Oakshooter::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Oakshooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Oakshooter::PlayArrowAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_Oakshooter::PlayArrowAttack
          (PlantAnimRig_Oakshooter *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  char *__s;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(this + 0x3bc)) {
  default:
    __s = "attack_normal";
    break;
  case 1:
    __s = "attack_power";
    break;
  case 2:
    __s = "attack_multiple";
    break;
  case 3:
    __s = "attack_track";
  }
  std::string::string(asStack_58,__s);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* PlantAnimRig_Oakshooter::GetArrowType() const */

undefined4 __thiscall PlantAnimRig_Oakshooter::GetArrowType(PlantAnimRig_Oakshooter *this)

{
  return *(undefined4 *)(this + 0x3bc);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Oakshooter::SetArrowType(oak_arrow_type) */

void __thiscall PlantAnimRig_Oakshooter::SetArrowType(PlantAnimRig_Oakshooter *this,int param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  string asStack_10 [8];
  long local_8;
  
  uVar3 = 1;
  *(int *)(this + 0x3bc) = param_2;
  local_8 = ___stack_chk_guard;
  uVar1 = 1;
  if (param_2 == 0) goto LAB_03f65d78;
  do {
    Sexy::StrFormat("arrow_%d",asStack_10,uVar1);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    uVar2 = uVar3;
    while( true ) {
      uVar3 = uVar2 + 1;
      if (uVar3 == 5) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      uVar1 = (ulong)uVar3;
      if (*(uint *)(this + 0x3bc) != uVar2) break;
LAB_03f65d78:
      Sexy::StrFormat("arrow_%d",asStack_10,uVar1);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
      std::string::~string(asStack_10);
      uVar2 = uVar3;
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Oakshooter::GetMiniGameLayers() */

void __thiscall PlantAnimRig_Oakshooter::GetMiniGameLayers(PlantAnimRig_Oakshooter *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  uint uVar1;
  string asStack_10 [8];
  long local_8;
  
  uVar1 = 1;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  do {
    uVar1 = uVar1 + 1;
    Sexy::StrFormat("arrow_%d",asStack_10,(ulong)uVar1);
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
    std::string::~string(asStack_10);
  } while (uVar1 != 4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Oakshooter::onPopAnimInitialized() */

void __thiscall PlantAnimRig_Oakshooter::onPopAnimInitialized(PlantAnimRig_Oakshooter *this)

{
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_Oakshooter)0x0;
  SetArrowType(this,0);
  return;
}

