// Class: PlantAnimRig_Magnetshroom


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Magnetshroom::onPopAnimInitialized() */

void __thiscall PlantAnimRig_Magnetshroom::onPopAnimInitialized(PlantAnimRig_Magnetshroom *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  std::string::string(asStack_10,"Magnet_Item");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Magnetshroom::~PlantAnimRig_Magnetshroom() */

void __thiscall
PlantAnimRig_Magnetshroom::~PlantAnimRig_Magnetshroom(PlantAnimRig_Magnetshroom *this)

{
  *(undefined ***)this = &PTR_GetClass_06809560;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Magnetshroom_068097c8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Magnetshroom::~PlantAnimRig_Magnetshroom() */

void __thiscall
PlantAnimRig_Magnetshroom::~PlantAnimRig_Magnetshroom(PlantAnimRig_Magnetshroom *this)

{
  ~PlantAnimRig_Magnetshroom(this + -0x10);
  return;
}


/* PlantAnimRig_Magnetshroom::~PlantAnimRig_Magnetshroom() */

void __thiscall
PlantAnimRig_Magnetshroom::~PlantAnimRig_Magnetshroom(PlantAnimRig_Magnetshroom *this)

{
  ~PlantAnimRig_Magnetshroom(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Magnetshroom::~PlantAnimRig_Magnetshroom() */

void __thiscall
PlantAnimRig_Magnetshroom::~PlantAnimRig_Magnetshroom(PlantAnimRig_Magnetshroom *this)

{
  ~PlantAnimRig_Magnetshroom(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Magnetshroom::StaticClassInit() */

void PlantAnimRig_Magnetshroom::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Magnetshroom");
    (*pcVar2)(plVar1,asStack_10,FUN_04203c34,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Magnetshroom::StaticGetClass() */

long * PlantAnimRig_Magnetshroom::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Magnetshroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Magnetshroom::GetClass() const */

long * PlantAnimRig_Magnetshroom::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Magnetshroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Magnetshroom::PlantAnimRig_Magnetshroom() */

void __thiscall
PlantAnimRig_Magnetshroom::PlantAnimRig_Magnetshroom(PlantAnimRig_Magnetshroom *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06809560;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Magnetshroom_068097c8;
  return;
}


/* PlantAnimRig_Magnetshroom::StaticNew() */

PlantAnimRig_Magnetshroom * PlantAnimRig_Magnetshroom::StaticNew(void)

{
  PlantAnimRig_Magnetshroom *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Magnetshroom(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Magnetshroom::PlayMagnetpull(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_Magnetshroom::PlayMagnetpull
          (PlantAnimRig_Magnetshroom *this,RtReflectionDelegate *param_2)

{
  long lVar1;
  int iVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"special");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Magnetshroom::PlayMagnetCatch(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_Magnetshroom::PlayMagnetCatch
          (PlantAnimRig_Magnetshroom *this,RtReflectionDelegate *param_2)

{
  long lVar1;
  int iVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"catch");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Magnetshroom::PlayMagnetHolding() */

void __thiscall PlantAnimRig_Magnetshroom::PlayMagnetHolding(PlantAnimRig_Magnetshroom *this)

{
  long lVar1;
  int iVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"busy");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar2 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Magnetshroom::PlayMagnetPlantfoodCollect() */

void __thiscall
PlantAnimRig_Magnetshroom::PlayMagnetPlantfoodCollect(PlantAnimRig_Magnetshroom *this)

{
  long lVar1;
  int iVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"plantfood_collection");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar2 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Magnetshroom::GetMagnetLayers() */

void __thiscall PlantAnimRig_Magnetshroom::GetMagnetLayers(PlantAnimRig_Magnetshroom *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  std::string::string(asStack_10,"Magnet_Item");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

