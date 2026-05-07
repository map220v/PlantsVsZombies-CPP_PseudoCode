// Class: ZombieZombossMech_Steam


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Steam::StaticClassInit() */

void ZombieZombossMech_Steam::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZombossMech_Steam");
    (*pcVar2)(plVar1,asStack_10,FUN_03c494f4,0x970,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_Steam::StaticGetClass() */

long * ZombieZombossMech_Steam::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieZombossMech_Steam",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMech_Steam::GetClass() const */

long * ZombieZombossMech_Steam::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieZombossMech_Steam",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMech_Steam::resetActionIndex() */

void __thiscall ZombieZombossMech_Steam::resetActionIndex(ZombieZombossMech_Steam *this)

{
  *(undefined4 *)(this + 0x968) = 0;
  return;
}


/* ZombieZombossMech_Steam::ZombieZombossMech_Steam() */

void __thiscall ZombieZombossMech_Steam::ZombieZombossMech_Steam(ZombieZombossMech_Steam *this)

{
  ZombieZombossMech::ZombieZombossMech((ZombieZombossMech *)this);
  *(undefined ***)this = &PTR_GetClass_06751110;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_Steam_06751cd0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x960));
  *(undefined4 *)(this + 0x968) = 0;
  return;
}


/* ZombieZombossMech_Steam::StaticNew() */

ZombieZombossMech_Steam * ZombieZombossMech_Steam::StaticNew(void)

{
  ZombieZombossMech_Steam *this;
  
  this = ::operator_new(0x970);
  ZombieZombossMech_Steam(this);
  return this;
}


/* ZombieZombossMech_Steam::~ZombieZombossMech_Steam() */

void __thiscall ZombieZombossMech_Steam::~ZombieZombossMech_Steam(ZombieZombossMech_Steam *this)

{
  *(undefined ***)this = &PTR_GetClass_06751110;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_Steam_06751cd0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x960));
  ZombieZombossMech::~ZombieZombossMech((ZombieZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_Steam::~ZombieZombossMech_Steam() */

void __thiscall ZombieZombossMech_Steam::~ZombieZombossMech_Steam(ZombieZombossMech_Steam *this)

{
  ~ZombieZombossMech_Steam(this + -0x10);
  return;
}


/* ZombieZombossMech_Steam::~ZombieZombossMech_Steam() */

void __thiscall ZombieZombossMech_Steam::~ZombieZombossMech_Steam(ZombieZombossMech_Steam *this)

{
  ~ZombieZombossMech_Steam(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_Steam::~ZombieZombossMech_Steam() */

void __thiscall ZombieZombossMech_Steam::~ZombieZombossMech_Steam(ZombieZombossMech_Steam *this)

{
  ~ZombieZombossMech_Steam(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Steam::CanBeTargetedByPlant(Sexy::RtWeakPtr<PlantType>, bool) const */

void __thiscall
ZombieZombossMech_Steam::CanBeTargetedByPlant
          (ZombieZombossMech_Steam *this,RtWeakPtrBase *param_2,undefined1 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar1 = 0;
  local_8 = ___stack_chk_guard;
  iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  if (iVar2 < iVar3) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    uVar1 = Zombie::CanBeTargetedByPlant((Zombie *)this,aRStack_10,param_3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Steam::performRandomZombossAction() */

void __thiscall ZombieZombossMech_Steam::performRandomZombossAction(ZombieZombossMech_Steam *this)

{
  int iVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  RtWeakPtrBase *pRVar5;
  undefined8 uVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  lVar3 = ZombieZombossMech::getActiveStage((ZombieZombossMech *)this);
  uVar4 = FUN_03c3ed30(*(undefined8 *)(lVar3 + 0x50),*(undefined8 *)(lVar3 + 0x58));
  if ((ulong)(long)*(int *)(this + 0x968) < uVar4) {
    lVar3 = ZombieZombossMech::getActiveStage((ZombieZombossMech *)this);
    pRVar5 = (RtWeakPtrBase *)
             FUN_03c3ed3c(*(undefined8 *)(lVar3 + 0x50),(long)*(int *)(this + 0x968));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar5);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    cVar2 = ZombieZombossMech::tryPerformZombossAction((ZombieZombossMech *)this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar2 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
    else {
      iVar1 = *(int *)(this + 0x968);
      *(int *)(this + 0x968) = iVar1 + 1;
      lVar3 = ZombieZombossMech::getActiveStage((ZombieZombossMech *)this);
      uVar4 = FUN_03c3ed30(*(undefined8 *)(lVar3 + 0x50),*(undefined8 *)(lVar3 + 0x58));
      if (uVar4 <= (ulong)(long)(iVar1 + 1)) {
        resetActionIndex(this);
      }
      uVar6 = 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Steam::launchCannonImps() */

void ZombieZombossMech_Steam::launchCannonImps(void)

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
      if (((DAT_06ad0970 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad0970), iVar2 != 0)) {
        in_s1 = 1.0;
        in_s2 = 0x428a0000;
        EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06ad0798,-55.0,1.0,69.0);
        __cxa_guard_release(&DAT_06ad0970);
      }
      iVar6 = iVar6 + 1;
      local_40 = (float)Sexy::SexyVector3::operator+(this,(SexyVector3 *)&DAT_06ad0798);
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


/* ZombieZombossMech_Steam::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void __thiscall
ZombieZombossMech_Steam::onPopAnimCommand
          (ZombieZombossMech_Steam *this,string *param_1,float param_2,string *param_3,
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


/* ZombieZombossMech_Steam::CollidesWithType(CollisionTypeFlags) const */

undefined8 __thiscall
ZombieZombossMech_Steam::CollidesWithType(ZombieZombossMech_Steam *this,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  if (iVar2 <= iVar1) {
    return 0;
  }
  uVar3 = Zombie::CollidesWithType((Zombie *)this,param_2);
  return uVar3;
}


/* ZombieZombossMech_Steam::onStartedNewStage(int) */

void __thiscall
ZombieZombossMech_Steam::onStartedNewStage(ZombieZombossMech_Steam *this,int param_1)

{
  ZombieZombossMech::onStartedNewStage((ZombieZombossMech *)this,param_1);
  resetActionIndex(this);
  return;
}

