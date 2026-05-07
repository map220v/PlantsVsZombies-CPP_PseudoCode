// Class: ZombieZombossMech_Pirate


/* ZombieZombossMech_Pirate::SetCurrentImpCannonActionDef(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

void __thiscall
ZombieZombossMech_Pirate::SetCurrentImpCannonActionDef
          (ZombieZombossMech_Pirate *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x960),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Pirate::StaticClassInit() */

void ZombieZombossMech_Pirate::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZombossMech_Pirate");
    (*pcVar2)(plVar1,asStack_10,FUN_0471ce98,0x968,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_Pirate::StaticGetClass() */

long * ZombieZombossMech_Pirate::StaticGetClass(void)

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
  uVar2 = ZombieZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech_Pirate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMech_Pirate::GetClass() const */

long * ZombieZombossMech_Pirate::GetClass(void)

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
  uVar2 = ZombieZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech_Pirate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMech_Pirate::ZombieZombossMech_Pirate() */

void __thiscall ZombieZombossMech_Pirate::ZombieZombossMech_Pirate(ZombieZombossMech_Pirate *this)

{
  ZombieZombossMech::ZombieZombossMech((ZombieZombossMech *)this);
  *(undefined ***)this = &PTR_GetClass_068bfca0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_Pirate_068c0860;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x960));
  return;
}


/* ZombieZombossMech_Pirate::StaticNew() */

ZombieZombossMech_Pirate * ZombieZombossMech_Pirate::StaticNew(void)

{
  ZombieZombossMech_Pirate *this;
  
  this = ::operator_new(0x968);
  ZombieZombossMech_Pirate(this);
  return this;
}


/* ZombieZombossMech_Pirate::~ZombieZombossMech_Pirate() */

void __thiscall ZombieZombossMech_Pirate::~ZombieZombossMech_Pirate(ZombieZombossMech_Pirate *this)

{
  *(undefined ***)this = &PTR_GetClass_068bfca0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_Pirate_068c0860;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x960));
  ZombieZombossMech::~ZombieZombossMech((ZombieZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_Pirate::~ZombieZombossMech_Pirate() */

void __thiscall ZombieZombossMech_Pirate::~ZombieZombossMech_Pirate(ZombieZombossMech_Pirate *this)

{
  ~ZombieZombossMech_Pirate(this + -0x10);
  return;
}


/* ZombieZombossMech_Pirate::~ZombieZombossMech_Pirate() */

void __thiscall ZombieZombossMech_Pirate::~ZombieZombossMech_Pirate(ZombieZombossMech_Pirate *this)

{
  ~ZombieZombossMech_Pirate(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_Pirate::~ZombieZombossMech_Pirate() */

void __thiscall ZombieZombossMech_Pirate::~ZombieZombossMech_Pirate(ZombieZombossMech_Pirate *this)

{
  ~ZombieZombossMech_Pirate(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Pirate::launchCannonImps() */

void ZombieZombossMech_Pirate::launchCannonImps(void)

{
  int iVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  long extraout_x0;
  SexyVector3 *this;
  long *extraout_x0_00;
  string *psVar3;
  SexyVector3 *pSVar4;
  long *plVar5;
  int iVar6;
  code *pcVar7;
  float fVar8;
  float in_s1;
  undefined4 in_s2;
  float fVar9;
  float fVar10;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_2b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x960));
  nop();
  if (0 < *(int *)(extraout_x0 + 0x48)) {
    iVar6 = 0;
    this = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(in_x0);
    do {
      Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
      local_30 = Zombie::GetSummonZombieLevel((Zombie *)in_x0);
      local_2b = 1;
      plVar5 = *(long **)(gLawnApp + 0x9f0);
      pcVar7 = *(code **)(*plVar5 + 0x318);
      psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
      pSVar4 = (SexyVector3 *)
               (*pcVar7)(plVar5,(DVec3 *)&local_40,0xfffffffb,(ValidatePlantData *)&local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      if (((DAT_06b218f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b218f8), iVar2 != 0)) {
        in_s1 = 1.0;
        in_s2 = 0x428a0000;
        EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06b217e0,-55.0,1.0,69.0);
        __cxa_guard_release(&DAT_06b218f8);
      }
      iVar6 = iVar6 + 1;
      local_40 = (float)Sexy::SexyVector3::operator+(this,(SexyVector3 *)&DAT_06b217e0);
      local_3c = in_s1;
      local_38 = in_s2;
      BoardEntity::PlaceOnBoard(pSVar4);
      nop();
      iVar2 = BoardTransforms::GridToBoardSpaceX(*(int *)(extraout_x0 + 0x58));
      iVar1 = BoardTransforms::GridToBoardSpaceX(*(int *)(extraout_x0 + 0x5c));
      DVec3::DVec3((DVec3 *)&local_40);
      fVar8 = (float)(**(code **)(*(long *)in_x0 + 0x308))(0x3f800000);
      local_40 = (float)iVar2 + fVar8 * (float)(iVar1 - iVar2);
      iVar2 = (**(code **)(*(long *)in_x0 + 0x300))();
      iVar2 = BoardTransforms::GridToBoardSpaceY(iVar2);
      local_3c = (float)iVar2;
      fVar9 = *(float *)(extraout_x0 + 0x4c);
      fVar10 = *(float *)(extraout_x0 + 0x50);
      fVar8 = (float)(**(code **)(*(long *)in_x0 + 0x308))(0x40000000);
      in_s1 = local_3c;
      in_s2 = local_38;
      (**(code **)(*extraout_x0_00 + 0xa08))
                (local_40,local_3c,local_38,fVar9 + fVar10 * (fVar8 + -1.0),
                 *(undefined4 *)(extraout_x0 + 0x54),extraout_x0_00,0);
      ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
    } while (iVar6 < *(int *)(extraout_x0 + 0x48));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_Pirate::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void __thiscall
ZombieZombossMech_Pirate::onPopAnimCommand
          (ZombieZombossMech_Pirate *this,string *param_1,float param_2,string *param_3,
          string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_3,"cannon_fire");
  if (!bVar1) {
    ZombieZombossMech::onPopAnimCommand((ZombieZombossMech *)this,param_1,param_2,param_3,param_4);
    return;
  }
  launchCannonImps();
  return;
}

