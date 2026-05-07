// Class: PlantAnimRig_Pepperpult


/* PlantAnimRig_Pepperpult::~PlantAnimRig_Pepperpult() */

void __thiscall PlantAnimRig_Pepperpult::~PlantAnimRig_Pepperpult(PlantAnimRig_Pepperpult *this)

{
  *(undefined ***)this = &PTR_GetClass_067d3f90;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Pepperpult_067d41f8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Pepperpult::~PlantAnimRig_Pepperpult() */

void __thiscall PlantAnimRig_Pepperpult::~PlantAnimRig_Pepperpult(PlantAnimRig_Pepperpult *this)

{
  ~PlantAnimRig_Pepperpult(this + -0x10);
  return;
}


/* PlantAnimRig_Pepperpult::~PlantAnimRig_Pepperpult() */

void __thiscall PlantAnimRig_Pepperpult::~PlantAnimRig_Pepperpult(PlantAnimRig_Pepperpult *this)

{
  ~PlantAnimRig_Pepperpult(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Pepperpult::~PlantAnimRig_Pepperpult() */

void __thiscall PlantAnimRig_Pepperpult::~PlantAnimRig_Pepperpult(PlantAnimRig_Pepperpult *this)

{
  ~PlantAnimRig_Pepperpult(this + -0x10);
  return;
}


/* PlantAnimRig_Pepperpult::StaticGetClass() */

long * PlantAnimRig_Pepperpult::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Pepperpult",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_Pepperpult::GetClass() const */

long * PlantAnimRig_Pepperpult::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Pepperpult",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_Pepperpult::PlantAnimRig_Pepperpult() */

void __thiscall PlantAnimRig_Pepperpult::PlantAnimRig_Pepperpult(PlantAnimRig_Pepperpult *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067d3f90;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Pepperpult_067d41f8;
  return;
}


/* PlantAnimRig_Pepperpult::StaticNew() */

PlantAnimRig_Pepperpult * PlantAnimRig_Pepperpult::StaticNew(void)

{
  PlantAnimRig_Pepperpult *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Pepperpult(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Pepperpult::ShowGhostFire(bool) */

void __thiscall PlantAnimRig_Pepperpult::ShowGhostFire(PlantAnimRig_Pepperpult *this,bool param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  string *psVar3;
  ulong uVar4;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"snapdragon_plantfood_fireball_frame_01 copy2");
  std::string::string(asStack_30,"snapdragon_plantfood_fireball_frame_02 copy2");
  std::string::string(asStack_28,"snapdragon_plantfood_fireball_frame_03 copy2");
  psVar3 = (string *)&local_8;
  std::string::string(asStack_20,"snapdragon_plantfood_fireball_frame_04 copy2");
  std::string::string(asStack_18,"snapdragon_plantfood_fireball_frame_05 copy2");
  std::string::string(asStack_10,"bullet_02");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_50,asStack_38,6,auStack_58);
  do {
    psVar3 = psVar3 + -8;
    std::string::~string(psVar3);
  } while (psVar3 != asStack_38);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  uVar4 = 0;
  while( true ) {
    uVar1 = local_50;
    uVar2 = FUN_040b1680(local_50,local_48);
    if (uVar2 <= uVar4) break;
    psVar3 = (string *)FUN_040b168c(uVar1,uVar4);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,param_1);
    uVar4 = uVar4 + 1;
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Pepperpult::onLevelUpdate() */

void __thiscall PlantAnimRig_Pepperpult::onLevelUpdate(PlantAnimRig_Pepperpult *this)

{
  ShowGhostFire(this,2 < *(int *)(this + 0x224));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Pepperpult::GetGhostFireLayers() */

void __thiscall PlantAnimRig_Pepperpult::GetGhostFireLayers(PlantAnimRig_Pepperpult *this)

{
  string *this_00;
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (string *)&local_8;
  std::string::string(asStack_38,"snapdragon_plantfood_fireball_frame_01 copy2");
  std::string::string(asStack_30,"snapdragon_plantfood_fireball_frame_02 copy2");
  std::string::string(asStack_28,"snapdragon_plantfood_fireball_frame_03 copy2");
  std::string::string(asStack_20,"snapdragon_plantfood_fireball_frame_04 copy2");
  std::string::string(asStack_18,"snapdragon_plantfood_fireball_frame_05 copy2");
  std::string::string(asStack_10,"bullet_02");
  std::vector<std::string,std::allocator<std::string>>::vector();
  do {
    this_00 = this_00 + -8;
    std::string::~string(this_00);
  } while (this_00 != asStack_38);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

