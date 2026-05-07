// Class: PlantAnimRig_Wintersweet


/* PlantAnimRig_Wintersweet::~PlantAnimRig_Wintersweet() */

void __thiscall PlantAnimRig_Wintersweet::~PlantAnimRig_Wintersweet(PlantAnimRig_Wintersweet *this)

{
  *(undefined ***)this = &PTR_GetClass_067e0650;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Wintersweet_067e08b8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Wintersweet::~PlantAnimRig_Wintersweet() */

void __thiscall PlantAnimRig_Wintersweet::~PlantAnimRig_Wintersweet(PlantAnimRig_Wintersweet *this)

{
  ~PlantAnimRig_Wintersweet(this + -0x10);
  return;
}


/* PlantAnimRig_Wintersweet::~PlantAnimRig_Wintersweet() */

void __thiscall PlantAnimRig_Wintersweet::~PlantAnimRig_Wintersweet(PlantAnimRig_Wintersweet *this)

{
  ~PlantAnimRig_Wintersweet(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Wintersweet::~PlantAnimRig_Wintersweet() */

void __thiscall PlantAnimRig_Wintersweet::~PlantAnimRig_Wintersweet(PlantAnimRig_Wintersweet *this)

{
  ~PlantAnimRig_Wintersweet(this + -0x10);
  return;
}


/* PlantAnimRig_Wintersweet::StaticGetClass() */

long * PlantAnimRig_Wintersweet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Wintersweet",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_Wintersweet::GetClass() const */

long * PlantAnimRig_Wintersweet::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Wintersweet",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_Wintersweet::PlantAnimRig_Wintersweet() */

void __thiscall PlantAnimRig_Wintersweet::PlantAnimRig_Wintersweet(PlantAnimRig_Wintersweet *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067e0650;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Wintersweet_067e08b8;
  return;
}


/* PlantAnimRig_Wintersweet::StaticNew() */

PlantAnimRig_Wintersweet * PlantAnimRig_Wintersweet::StaticNew(void)

{
  PlantAnimRig_Wintersweet *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Wintersweet(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Wintersweet::playGrowAnim(std::string const&,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Wintersweet::playGrowAnim
          (PlantAnimRig_Wintersweet *this,undefined8 param_1,RtReflectionDelegate *param_3)

{
  int iVar1;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,param_1,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Wintersweet::updateIdleAnimState(std::string const&, int) */

void __thiscall
PlantAnimRig_Wintersweet::updateIdleAnimState
          (PlantAnimRig_Wintersweet *this,string *param_1,int param_2)

{
  bool bVar1;
  undefined8 uVar2;
  string *psVar3;
  string asStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_0547429c(param_1);
  Sexy::StrFormat("flower_%s_0%d",asStack_78,uVar2,(ulong)(uint)param_2);
  std::string::string(asStack_48,"flower_red_01");
  psVar3 = (string *)&local_8;
  std::string::string(asStack_40,"flower_red_02");
  std::string::string(asStack_38,"flower_red_03");
  std::string::string(asStack_30,"flower_red_04");
  std::string::string(asStack_28,"flower_white_01");
  std::string::string(asStack_20,"flower_white_02");
  std::string::string(asStack_18,"flower_white_03");
  std::string::string(asStack_10,"flower_white_04");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_60,asStack_48,8,
             (__normal_iterator *)&local_68);
  do {
    psVar3 = psVar3 + -8;
    std::string::~string(psVar3);
  } while (psVar3 != asStack_48);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  local_70 = FUN_040f2bc0(local_60);
  local_68 = FUN_040f2c10(local_58);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar1) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    bVar1 = (bool)std::operator==(psVar3,asStack_78);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,bVar1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_60);
  std::string::~string(asStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

