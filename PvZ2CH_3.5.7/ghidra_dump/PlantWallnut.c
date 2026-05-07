// Class: PlantWallnut


/* PlantWallnut::CanApplyPlantfood() */

void __thiscall PlantWallnut::CanApplyPlantfood(PlantWallnut *this)

{
  Shield *this_00;
  
  this_00 = (Shield *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
  ;
  Shield::CanDeployShield(this_00);
  return;
}


/* PlantWallnut::ApplyPlantfood() */

void __thiscall PlantWallnut::ApplyPlantfood(PlantWallnut *this)

{
  Shield *this_00;
  
  Plant::Heal(*(Plant **)(this + 0x10));
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 5;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  this_00 = (Shield *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
  ;
  Shield::DeployShield(this_00);
  return;
}


/* PlantWallnut::TryBlockZombossRush(Zombie*) */

void PlantWallnut::TryBlockZombossRush(Zombie *param_1)

{
  Zombie *pZVar1;
  
  pZVar1 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
  Shield::TryBlockZombossRush(pZVar1);
  return;
}


/* PlantWallnut::CanBeWatered() */

byte __thiscall PlantWallnut::CanBeWatered(PlantWallnut *this)

{
  char cVar1;
  byte bVar2;
  Plant *this_00;
  
  this_00 = *(Plant **)(this + 0x10);
  cVar1 = FUN_0407acd0(*(undefined4 *)(this_00 + 0x1d0));
  if (((cVar1 == '\0') && (*(int *)(this_00 + 200) != 3)) &&
     (cVar1 = Plant::IsSuspended(this_00), cVar1 == '\0')) {
    bVar2 = (**(code **)(*(long *)this + 0x180))(this);
    return bVar2 ^ 1;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWallnut::StaticClassInit() */

void PlantWallnut::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWallnut");
    (*pcVar2)(plVar1,asStack_10,FUN_0407d0b0,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWallnut::StaticGetClass() */

long * PlantWallnut::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWallnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWallnut::GetClass() const */

long * PlantWallnut::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWallnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWallnut::PlantWallnut() */

void __thiscall PlantWallnut::PlantWallnut(PlantWallnut *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067c9820;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  this[0x30] = (PlantWallnut)0x0;
  this[0x31] = (PlantWallnut)0x0;
  this[0x32] = (PlantWallnut)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  return;
}


/* PlantWallnut::StaticNew() */

PlantWallnut * PlantWallnut::StaticNew(void)

{
  PlantWallnut *this;
  
  this = ::operator_new(0x50);
  PlantWallnut(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWallnut::~PlantWallnut() */

void __thiscall PlantWallnut::~PlantWallnut(PlantWallnut *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  RtWeakPtr *this_01;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (RtWeakPtr *)(this + 0x40);
  *(undefined ***)this = &PTR_GetClass_067c9820;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar2 + 0x48))();
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_01,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  this_00 = (RtWeakPtr *)(this + 0x48);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWallnut::~PlantWallnut() */

void __thiscall PlantWallnut::~PlantWallnut(PlantWallnut *this)

{
  ~PlantWallnut(this);
  AK::FreeHook(this);
  return;
}


/* PlantWallnut::TakeDamage(DamageInfo const&) */

void __thiscall PlantWallnut::TakeDamage(PlantWallnut *this,DamageInfo *param_1)

{
  DamageInfo *pDVar1;
  
  pDVar1 = (DamageInfo *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  Shield::ReduceDamage(pDVar1);
  return;
}


/* PlantWallnut::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantWallnut::TakeSmashAttack(PlantWallnut *this,RtWeakPtr *param_2)

{
  char cVar1;
  BoardEntity *pBVar2;
  
  cVar1 = Plant::IsInvincible(*(Plant **)(this + 0x10),false);
  if (cVar1 == '\0') {
    pBVar2 = (BoardEntity *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
    cVar1 = Shield::TakeSmashAttack(pBVar2);
    if (cVar1 == '\0') {
      Plant::KillPlant(*(Plant **)(this + 0x10),0,1,0x10000000000);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWallnut::tossZombie(Zombie*) */

void __thiscall PlantWallnut::tossZombie(PlantWallnut *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  ZombieTosserSubSystem *pZVar4;
  uint uVar5;
  Point *extraout_x1;
  TPoint *pTVar6;
  Board *this_00;
  ZombieTosserSubSystem *pZVar9;
  float fVar7;
  float fVar8;
  TPoint<int> aTStack_88 [8];
  int local_80 [2];
  int local_78;
  int local_74;
  float local_70 [4];
  Vec3 aVStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  fVar7 = pfVar3[1];
  fVar8 = *pfVar3;
  EATextSquish::Vec3::Vec3((Vec3 *)local_70,fVar8 + 80.0,fVar7,0.0);
  cVar1 = (**(code **)(*(long *)param_1 + 0x3f0))(param_1);
  if (cVar1 == '\0') {
    pZVar9._0_4_ = (ZombieTosserSubSystem *)0x43020000;
  }
  else {
    uVar5 = (uint)DAT_06aeacf0 & 1;
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    if (((DAT_06aeacf0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aeacf0), iVar2 != 0)) {
      Sexy::Point::Point((Point *)&DAT_06aeacf8,uVar5,-1);
      Sexy::Point::Point((Point *)&DAT_06aead00,uVar5,1);
      Sexy::Point::Point((Point *)&DAT_06aead08,1,-1);
      Sexy::Point::Point((Point *)&DAT_06aead10,1,1);
      __cxa_guard_release(&DAT_06aeacf0);
    }
    iVar2 = 0;
    pTVar6 = (TPoint *)&DAT_06aeacf8;
    BoardTransforms::BoardSpaceToGrid((BoardTransforms *)&DAT_06aea000,fVar8,fVar7);
    do {
      Sexy::TPoint<int>::operator+(aTStack_88,pTVar6);
      Sexy::Point::Point((Point *)local_80,(TPoint *)aVStack_60);
      cVar1 = Board::IsPitOfDoom(this_00,(Point *)local_80);
      if (cVar1 != '\0') {
        BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)local_80,extraout_x1);
        EATextSquish::Vec3::Vec3(aVStack_60,(float)local_78,(float)local_74,0.0);
        Sexy::SexyVector3::operator=((SexyVector3 *)local_70,(SexyVector3 *)aVStack_60);
        if ((int)(&DAT_06aeacfc)[(long)iVar2 * 2] < 1) {
          pZVar9._0_4_ = (ZombieTosserSubSystem *)0x43020000;
        }
        else {
          pZVar9._0_4_ = (ZombieTosserSubSystem *)0x44228000;
        }
        if (((&DAT_06aeacf8)[(long)iVar2 * 2] == 0) && (local_80[0] < *(int *)(this_00 + 0xf8))) {
          local_70[0] = local_70[0] + 40.0;
        }
        goto LAB_0407b68c;
      }
      iVar2 = iVar2 + 1;
      pTVar6 = pTVar6 + 8;
    } while (iVar2 != 4);
    pZVar9._0_4_ = (ZombieTosserSubSystem *)0x43020000;
  }
LAB_0407b68c:
  local_70[0] = (float)NEON_fminnm(local_70[0],0x44480000);
  pZVar4 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
  ZombieTosserSubSystem::LaunchZombie
            (pZVar9._0_4_,0x3f000000,pZVar4,param_1,(Vec3 *)local_70,aRStack_50,0);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWallnut::Initialize() */

void __thiscall PlantWallnut::Initialize(PlantWallnut *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  undefined1 uVar1;
  long lVar2;
  undefined4 *puVar3;
  Shield *pSVar4;
  undefined4 local_20 [2];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  lVar2 = FUN_0407b8b8(*(undefined8 *)(this + 0x10));
  GameObject::Create<Shield>();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  puVar3 = (undefined4 *)FUN_0407ad90(*(undefined8 *)(lVar2 + 0x2c8),uVar1);
  local_20[0] = *puVar3;
  pSVar4 = (Shield *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Shield::SetProps(pSVar4,(ShieldProps *)local_20);
  pSVar4 = (Shield *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
  Shield::SetAnimRig(pSVar4,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWallnut::GetBallsCount() */

undefined4 __thiscall PlantWallnut::GetBallsCount(PlantWallnut *this)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_0407b8b8(*(undefined8 *)(this + 0x10));
  uVar1 = 0;
  if ((*(char *)(lVar2 + 0x2b8) == '\0') && (*(int *)(this + 0x38) - 2U < 3)) {
    uVar1 = *(undefined4 *)(&DAT_05752fd0 + (ulong)(*(int *)(this + 0x38) - 2U) * 4);
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWallnut::PlayAttackAnimation() */

void __thiscall PlantWallnut::PlayAttackAnimation(PlantWallnut *this)

{
  int iVar1;
  char cVar2;
  long lVar3;
  PlantAnimRig_Wallnut *pPVar4;
  undefined8 uVar5;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_0407b8b8(*(undefined8 *)(this + 0x10));
  if (*(char *)(lVar3 + 0x2b8) == '\0') {
    uVar5 = *(undefined8 *)(this + 0x10);
    cVar2 = FUN_0407ad5c(uVar5);
    if (cVar2 != '\0') {
      iVar1 = *(int *)(this + 0x38);
      if (iVar1 == 4) {
        pPVar4 = (PlantAnimRig_Wallnut *)FUN_0407b4dc(uVar5);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,OnAnimStopped);
        Sexy::Delegate1<std::string_const&>::
        Delegate1<PlantWallnut,void(PlantWallnut::*)(std::string_const&)>(aDStack_38,aCStack_50);
        PlantAnimRig_Wallnut::PlayShootIce(pPVar4,aDStack_38);
      }
      else if (iVar1 == 5) {
        pPVar4 = (PlantAnimRig_Wallnut *)FUN_0407b4dc(uVar5);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,OnAnimStopped);
        Sexy::Delegate1<std::string_const&>::
        Delegate1<PlantWallnut,void(PlantWallnut::*)(std::string_const&)>(aDStack_38,aCStack_50);
        PlantAnimRig_Wallnut::PlayShootElectric(pPVar4,aDStack_38);
      }
      else if (iVar1 == 3) {
        pPVar4 = (PlantAnimRig_Wallnut *)FUN_0407b4dc(uVar5);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,OnAnimStopped);
        Sexy::Delegate1<std::string_const&>::
        Delegate1<PlantWallnut,void(PlantWallnut::*)(std::string_const&)>(aDStack_38,aCStack_50);
        PlantAnimRig_Wallnut::PlayShootFire(pPVar4,aDStack_38);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWallnut::NeedCharge() */

byte __thiscall PlantWallnut::NeedCharge(PlantWallnut *this)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  
  lVar2 = FUN_0407b8b8(*(undefined8 *)(this + 0x10));
  bVar3 = 0;
  if (*(char *)(lVar2 + 0x2b8) == '\0') {
    cVar1 = FUN_0407ad5c(*(undefined8 *)(this + 0x10));
    bVar3 = 0;
    if ((cVar1 != '\0') && (bVar3 = 0, this[0x31] != (PlantWallnut)0x0)) {
      bVar3 = (byte)this[0x32] ^ 1;
    }
  }
  return bVar3;
}


/* PlantWallnut::DoCharge() */

void __thiscall PlantWallnut::DoCharge(PlantWallnut *this)

{
  long lVar1;
  float fVar2;
  
  lVar1 = FUN_0407b8b8(*(undefined8 *)(this + 0x10));
  if (*(char *)(lVar1 + 0x2b8) == '\0') {
    this[0x31] = (PlantWallnut)0x0;
    this[0x32] = (PlantWallnut)0x1;
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x34) = fVar2 + *(float *)(lVar1 + 0x2c4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWallnut::OnAnimStopped(std::string const&) */

void __thiscall PlantWallnut::OnAnimStopped(PlantWallnut *this,string *param_1)

{
  char cVar1;
  long lVar2;
  RtObject *this_00;
  PlantAnimRig_Wallnut *pPVar3;
  long *plVar4;
  UIEasyButtonWidget *this_01;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_0407b8b8(*(undefined8 *)(this + 0x10));
  if (*(char *)(lVar2 + 0x2b8) == '\0') {
    this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_Wallnut>(this_00);
    if (pPVar3 != (PlantAnimRig_Wallnut *)0x0) {
      std::string::string(asStack_18,"recover");
      FUN_05475d88(asStack_10,param_1);
      cVar1 = PlantAnimRig_Wallnut::IsWallnutAnim(pPVar3,asStack_18,asStack_10);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      nop();
      if (cVar1 == '\0') {
        FUN_05475d88(asStack_10,param_1);
        cVar1 = PlantAnimRig_Wallnut::IsShootAnim(pPVar3,asStack_10);
        std::string::~string(asStack_10);
        if (cVar1 == '\0') goto LAB_0407bccc;
        this_01 = *(UIEasyButtonWidget **)(this + 0x10);
      }
      else {
        this_01 = *(UIEasyButtonWidget **)(this + 0x10);
        *(undefined4 *)(this + 0x38) = 2;
      }
      *(undefined4 *)(this_01 + 200) = 4;
      plVar4 = (long *)UIEasyButtonWidget::GetImageNormal(this_01);
      (**(code **)(*plVar4 + 0x118))();
    }
  }
LAB_0407bccc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWallnut::FindTargetAndFire(PlantWeapon) */

char PlantWallnut::FindTargetAndFire(PlantWallnut *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_0407b8b8(*(undefined8 *)(param_1 + 0x10));
  if ((*(char *)(lVar3 + 0x2b8) == '\0') &&
     (cVar1 = Plant::CanFindTarget(*(undefined8 *)(param_1 + 0x10),1), cVar1 != '\0')) {
    cVar1 = FUN_0407ad5c(*(undefined8 *)(param_1 + 0x10));
    if ((cVar1 != '\0') && (iVar2 = GetBallsCount(param_1), 0 < iVar2)) {
      iVar2 = *(int *)(param_1 + 0x38);
      if (iVar2 == 3) {
        *(undefined4 *)(param_1 + 0x38) = 4;
      }
      else if (iVar2 == 4) {
        *(undefined4 *)(param_1 + 0x38) = 5;
        param_1[0x31] = (PlantWallnut)0x1;
      }
      else if (iVar2 == 2) {
        *(undefined4 *)(param_1 + 0x38) = 3;
      }
      (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
      return cVar1;
    }
  }
  return '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWallnut::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantWallnut::Fire(PlantWallnut *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_0407b8b8(*(undefined8 *)(this + 0x10));
  if (*(char *)(lVar2 + 0x2b8) == '\0') {
    iVar1 = *(int *)(this + 0x38);
    if (iVar1 == 4) {
      uVar3 = 2;
    }
    else if (iVar1 == 5) {
      uVar3 = 3;
    }
    else {
      uVar4 = 0;
      if (iVar1 != 3) goto LAB_0407bf10;
      uVar3 = 1;
    }
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = uVar3;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    uVar4 = PlantFramework::Fire((PlantFramework *)this,aRStack_10,param_3,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    uVar4 = PlantFramework::Fire((PlantFramework *)this,aRStack_10,param_3,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
LAB_0407bf10:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWallnut::LoadBallsRig(WallNutBallsType) */

void PlantWallnut::LoadBallsRig
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
               long *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  Effect_PopAnim *this;
  float *pfVar3;
  ResourceInfo *pRVar4;
  RtWeakPtr *__n;
  float fVar5;
  float fVar6;
  float fVar7;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_0407b8b8(param_2[2]);
  if (*(char *)(lVar2 + 0x2b8) == '\0') {
    __n = aRStack_18;
    std::string::string(asStack_20,"");
    nop();
    iVar1 = (**(code **)(*param_2 + 0x88))(param_2);
    if (param_3 == 0) {
      iVar1 = iVar1 + 1;
      std::string::append(asStack_20,"POPANIM_EFFECTS_WALLNUT_EFFECT_FRONT",(size_t)__n);
    }
    else if (param_3 == 1) {
      iVar1 = iVar1 + -1;
      std::string::append(asStack_20,"POPANIM_EFFECTS_WALLNUT_EFFECT_BACK",(size_t)__n);
    }
    this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    if (this != (Effect_PopAnim *)0x0) {
      pfVar3 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_2[2]);
      fVar5 = *pfVar3;
      fVar6 = pfVar3[1];
      fVar7 = pfVar3[2];
      GetPAMByName(asStack_20);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
      Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar4,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      (**(code **)(*(long *)this + 0x80))(0x3f800000,this);
      EATextSquish::Vec3::Vec3
                ((Vec3 *)aRStack_18,(float)(int)(fVar5 - 100.0),(float)(int)(fVar6 - 105.0),
                 (float)(int)fVar7);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,-1);
      FUN_0407acc4(this + 0x1c,iVar1);
      StandaloneEffect::SetVisibility((StandaloneEffect *)this,false);
    }
    ToolPacketData::GetProps();
    std::string::~string(asStack_20);
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWallnut::GetFrontBallsRig() */

void PlantWallnut::GetFrontBallsRig(void)

{
  RtWeakPtr *this;
  long in_x0;
  ResourceInfo *pRVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this = (RtWeakPtr *)(in_x0 + 0x40);
  local_8 = ___stack_chk_guard;
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
  if (pRVar1 == (ResourceInfo *)0x0) {
    LoadBallsRig(aRStack_10);
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWallnut::GetBackBallsRig() */

void PlantWallnut::GetBackBallsRig(void)

{
  RtWeakPtr *this;
  long in_x0;
  ResourceInfo *pRVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this = (RtWeakPtr *)(in_x0 + 0x48);
  local_8 = ___stack_chk_guard;
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
  if (pRVar1 == (ResourceInfo *)0x0) {
    LoadBallsRig(aRStack_10);
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWallnut::UpdateFrontBall() */

void __thiscall PlantWallnut::UpdateFrontBall(PlantWallnut *this)

{
  int iVar1;
  char cVar2;
  long lVar3;
  UIWidget *this_00;
  PopAnimRig *this_01;
  StandaloneEffect *pSVar4;
  Effect_PopAnim *pEVar5;
  char *__s;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_0407b8b8(*(undefined8 *)(this + 0x10));
  if ((*(char *)(lVar3 + 0x2b8) == '\0') && (1 < *(uint *)(this + 0x38))) {
    GetFrontBallsRig();
    this_00 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    this_01 = (PopAnimRig *)UIWidget::GetAtlasImage(this_00);
    cVar2 = PopAnimRig::IsPlayingAnything(this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (cVar2 == '\0') {
      iVar1 = *(int *)(this + 0x38);
      if (iVar1 == 3) {
        GetFrontBallsRig();
        pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        StandaloneEffect::SetVisibility(pSVar4,true);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        GetFrontBallsRig();
        pEVar5 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        __s = "2ball";
      }
      else if (iVar1 == 4) {
        GetFrontBallsRig();
        pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        StandaloneEffect::SetVisibility(pSVar4,true);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        GetFrontBallsRig();
        pEVar5 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        __s = "1ball";
      }
      else {
        if (iVar1 != 2) goto LAB_0407c394;
        GetFrontBallsRig();
        pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        StandaloneEffect::SetVisibility(pSVar4,true);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        GetFrontBallsRig();
        pEVar5 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        __s = "3ball";
      }
      std::string::string((string *)aRStack_10,__s);
      Effect_PopAnim::PlaySingleAnimation(pEVar5,aRStack_10,0);
      std::string::~string((string *)aRStack_10);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
  }
LAB_0407c394:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWallnut::RecoverAllBalls() */

void __thiscall PlantWallnut::RecoverAllBalls(PlantWallnut *this)

{
  char cVar1;
  long lVar2;
  StandaloneEffect *pSVar3;
  Effect_PopAnim *pEVar4;
  PlantAnimRig_Wallnut *pPVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_0407b8b8(*(undefined8 *)(this + 0x10));
  if ((*(char *)(lVar2 + 0x2b8) == '\0') &&
     (cVar1 = FUN_0407ad5c(*(undefined8 *)(this + 0x10)), cVar1 != '\0')) {
    this[0x31] = (PlantWallnut)0x0;
    this[0x32] = (PlantWallnut)0x0;
    *(undefined4 *)(this + 0x38) = 1;
    GetFrontBallsRig();
    pSVar3 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    StandaloneEffect::SetVisibility(pSVar3,true);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    GetFrontBallsRig();
    pEVar4 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    std::string::string((string *)aRStack_50,"recover");
    Effect_PopAnim::PlaySingleAnimation(pEVar4,aRStack_50,0);
    std::string::~string((string *)aRStack_50);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    GetBackBallsRig();
    pSVar3 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    StandaloneEffect::SetVisibility(pSVar3,true);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    GetBackBallsRig();
    pEVar4 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    std::string::string((string *)aRStack_50,"recover");
    Effect_PopAnim::PlaySingleAnimation(pEVar4,aRStack_50,0);
    std::string::~string((string *)aRStack_50);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    pPVar5 = (PlantAnimRig_Wallnut *)FUN_0407b4dc(*(undefined8 *)(this + 0x10));
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnAnimStopped);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PlantWallnut,void(PlantWallnut::*)(std::string_const&)>(aDStack_38,aRStack_50);
    PlantAnimRig_Wallnut::PlayRecover(pPVar5,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWallnut::UpdateBackBall() */

void __thiscall PlantWallnut::UpdateBackBall(PlantWallnut *this)

{
  char cVar1;
  long lVar2;
  UIWidget *this_00;
  PopAnimRig *this_01;
  StandaloneEffect *pSVar3;
  Effect_PopAnim *pEVar4;
  char *__s;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_0407b8b8(*(undefined8 *)(this + 0x10));
  if (*(char *)(lVar2 + 0x2b8) == '\0') {
    GetBackBallsRig();
    this_00 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    this_01 = (PopAnimRig *)UIWidget::GetAtlasImage(this_00);
    cVar1 = PopAnimRig::IsPlayingAnything(this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (cVar1 == '\0') {
      switch(*(undefined4 *)(this + 0x38)) {
      case 1:
      case 2:
        GetBackBallsRig();
        pSVar3 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        StandaloneEffect::SetVisibility(pSVar3,true);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        GetBackBallsRig();
        pEVar4 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        __s = "3ball";
        break;
      case 3:
        GetBackBallsRig();
        pSVar3 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        StandaloneEffect::SetVisibility(pSVar3,true);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        GetBackBallsRig();
        pEVar4 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        __s = "2ball";
        break;
      case 4:
        GetBackBallsRig();
        pSVar3 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        StandaloneEffect::SetVisibility(pSVar3,true);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        GetBackBallsRig();
        pEVar4 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        __s = "1ball";
        break;
      default:
        goto switchD_0407c77c_default;
      }
      std::string::string((string *)aRStack_10,__s);
      Effect_PopAnim::PlaySingleAnimation(pEVar4,aRStack_10,0);
      std::string::~string((string *)aRStack_10);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
  }
switchD_0407c77c_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantWallnut::UpdateActions() */

void __thiscall PlantWallnut::UpdateActions(PlantWallnut *this)

{
  char cVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = FUN_0407b8b8(*(undefined8 *)(this + 0x10));
  if (*(char *)(lVar2 + 0x2b8) != '\0') {
    return;
  }
  cVar1 = NeedCharge(this);
  if (cVar1 != '\0') {
    DoCharge(this);
    return;
  }
  lVar2 = *(long *)(this + 0x10);
  cVar1 = FUN_0407ad5c(lVar2);
  if (cVar1 == '\0') {
    return;
  }
  if (*(int *)(this + 0x38) != 0) {
    if (((*(int *)(this + 0x38) != 5) || (this[0x32] == (PlantWallnut)0x0)) ||
       (fVar4 = *(float *)(this + 0x34), fVar3 = (float)PVZ_T(), fVar3 < fVar4)) goto LAB_0407c920;
    lVar2 = *(long *)(this + 0x10);
  }
  if (*(int *)(lVar2 + 200) == 4) {
    RecoverAllBalls(this);
  }
LAB_0407c920:
  UpdateFrontBall(this);
  UpdateBackBall(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWallnut::Draw(Sexy::Graphics*) */

void PlantWallnut::Draw(Graphics *param_1)

{
  RtWeakPtr *this;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  wchar16 *pwVar7;
  Shield *this_00;
  float *pfVar8;
  long lVar9;
  Insets *pIVar10;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  float fVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Draw(param_1);
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    pwVar7 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pIVar10 = aIStack_28;
    std::string::string(asStack_18,"HealthBars");
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar7,(wchar16 *)asStack_18,(LineBreakCategory *)pIVar10,in_x3,in_x4);
    if (cVar1 != '\0') {
      this = (RtWeakPtr *)(param_1 + 0x28);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
      if (bVar2) {
        this_00 = (Shield *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        cVar1 = Shield::Undamaged(this_00);
        std::string::~string(asStack_18);
        nop();
        if (cVar1 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          Shield::GetShieldInfo();
          pfVar8 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                            **)(param_1 + 0x10));
          fVar11 = *pfVar8;
          iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
          iVar3 = FUN_0407af2c((int)(fVar11 - (float)(iVar3 / 2)));
          lVar9 = std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  **)(param_1 + 0x10));
          fVar11 = *(float *)(lVar9 + 4);
          iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
          iVar4 = FUN_0407af2c((int)(fVar11 - (float)iVar4));
          BoardConstants::GRIDSQUARE_WIDTH();
          iVar5 = FUN_0407af2c();
          BoardConstants::GRIDSQUARE_HEIGHT();
          iVar6 = FUN_0407af2c();
          Sexy::Insets::Insets(aIStack_38,iVar3,iVar4,iVar5,iVar6);
          PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12);
          Sexy::Color::Color((Color *)asStack_18,7);
          WriteWordInRect();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          Shield::GetShieldPercent();
          pfVar8 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                            **)(param_1 + 0x10));
          fVar11 = *pfVar8;
          iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
          iVar3 = FUN_0407af2c((int)(fVar11 - (float)(iVar3 / 2)));
          lVar9 = std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  **)(param_1 + 0x10));
          fVar11 = *(float *)(lVar9 + 4);
          iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
          iVar4 = FUN_0407af2c((int)((fVar11 + 12.0) - (float)iVar4));
          BoardConstants::GRIDSQUARE_WIDTH();
          iVar5 = FUN_0407af2c();
          BoardConstants::GRIDSQUARE_HEIGHT();
          iVar6 = FUN_0407af2c();
          Sexy::Insets::Insets(aIStack_28,iVar3,iVar4,iVar5,iVar6);
          PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12);
          Sexy::Color::Color((Color *)asStack_18,7);
          WriteWordInRect();
          FUN_05476c50(auStack_40);
          FUN_05476c50(auStack_48);
        }
        goto LAB_0407ca94;
      }
    }
    std::string::~string(asStack_18);
    nop();
  }
LAB_0407ca94:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWallnut::DieExplode() */

void __thiscall PlantWallnut::DieExplode(PlantWallnut *this)

{
  char cVar1;
  bool bVar2;
  float *pfVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  long lVar5;
  undefined8 *puVar6;
  Zombie *this_01;
  ulong uVar7;
  ZombieSelfExplode *pZVar8;
  RealObject *this_02;
  ulong uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  string asStack_70 [24];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_02 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_70,"Play_CherryBomb");
  RealObject::PlayPositionalSound(this_02,asStack_70,0.0);
  std::string::~string(asStack_70);
  nop();
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar12 = *pfVar3;
  fVar11 = pfVar3[1];
  fVar13 = pfVar3[2];
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 != (Effect_PopAnim *)0x0) {
    std::string::string((string *)&local_88,"POPANIM_EFFECTS_WALLNUT_EXPLOSION");
    GetPAMByName((string *)&local_88);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_70);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
    std::string::~string((string *)&local_88);
    nop();
    (**(code **)(*(long *)this_00 + 0x80))(0x3fc00000,this_00);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)asStack_70,(float)(int)(fVar12 - 130.0),(float)(int)(fVar11 - 290.0),
               (float)(int)fVar13);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)asStack_70,-1);
    FUN_0407acc4(this_00 + 0x1c,500000);
    std::string::string(asStack_70,"animation");
    Effect_PopAnim::PlaySingleAnimation(this_00,asStack_70,0);
    std::string::~string(asStack_70);
    nop();
  }
  uVar9 = 0;
  Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),3,-4,0.0);
  (**(code **)(*(long *)this + 0x2b8))(auStack_98,this,0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_88);
  EntityFinder::GetEntitiesTouchingRectangle
            ((string *)&local_88,2,auStack_98,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),
             *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
  uVar10 = local_88;
  lVar5 = FUN_0407ad98(local_88,local_80);
  if (lVar5 != 0) {
    do {
      puVar6 = (undefined8 *)FUN_0407ada4(uVar10,uVar9);
      this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
      if ((((this_01 != (Zombie *)0x0) && (cVar1 = Zombie::IsOnGround(this_01), cVar1 != '\0')) &&
          (bVar2 = Sexy::RtObject::IsA<ZombiePirateCannon>((RtObject *)this_01), !bVar2)) &&
         (((bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_01), !bVar2 &&
           (cVar1 = (**(code **)(*(long *)this_01 + 0x4d8))(this_01), cVar1 == '\0')) &&
          ((cVar1 = (**(code **)(*(long *)this_01 + 0x508))(this_01), cVar1 == '\0' &&
           (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_01), !bVar2)))))) {
        Zombie::GetCurrentTitleStatus();
        cVar1 = local_58;
        TitleStatus::~TitleStatus((TitleStatus *)asStack_70);
        if (((cVar1 == '\0') &&
            (cVar1 = (**(code **)(*(long *)this_01 + 0x328))(this_01), cVar1 == '\0')) &&
           ((cVar1 = (**(code **)(*(long *)this_01 + 0x330))(this_01), cVar1 == '\0' &&
            ((((cVar1 = Zombie::IsJumping(this_01), cVar1 == '\0' &&
               (cVar1 = Zombie::HasCondition(this_01,0x99), cVar1 == '\0')) &&
              (cVar1 = Zombie::HasCondition(this_01,0x27), cVar1 == '\0')) &&
             ((cVar1 = Zombie::HasCondition(this_01,0x25), cVar1 == '\0' &&
              (cVar1 = Zombie::HasCondition(this_01,0x2c), cVar1 == '\0')))))))) {
          bVar2 = Sexy::RtObject::IsA<ZombieSelfExplode>((RtObject *)this_01);
          if (bVar2) {
            pZVar8 = Sexy::RtObject::Cast<ZombieSelfExplode>((RtObject *)this_01);
            cVar1 = FUN_0407ad7c(pZVar8[0x801]);
            if (cVar1 != '\0') goto LAB_0407da40;
          }
          tossZombie(this,this_01);
        }
      }
LAB_0407da40:
      uVar10 = local_88;
      uVar9 = uVar9 + 1;
      uVar7 = FUN_0407ad98(local_88,local_80);
    } while (uVar9 < uVar7);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWallnut::onKilled(bool) */

void PlantWallnut::onKilled(bool param_1)

{
  char cVar1;
  int iVar2;
  PlantWallnut *this;
  Plant *this_00;
  string asStack_10 [8];
  long local_8;
  
  this = (PlantWallnut *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  this_00 = *(Plant **)(this + 0x10);
  std::string::string(asStack_10,"NoDiedMsg");
  cVar1 = Plant::HasTag(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if ((cVar1 == '\0') && (cVar1 = Plant::IsInPlantDefence(*(Plant **)(this + 0x10)), cVar1 == '\0'))
  {
    cVar1 = Plant::IsSkillCheat(*(Plant **)(this + 0x10));
    if (cVar1 == '\0') {
      iVar2 = FUN_0407ad54();
      if (iVar2 == 2) {
        iVar2 = RandRangeInt(0,1);
        if (iVar2 != 0) goto LAB_0407dc54;
      }
      else if (iVar2 < 3) goto LAB_0407dc54;
    }
    else {
      cVar1 = Plant::IsSkillActivate(*(Plant **)(this + 0x10));
      if (cVar1 == '\0') goto LAB_0407dc54;
    }
    DieExplode(this);
  }
LAB_0407dc54:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWallnut::tossEnded(Zombie*) */

void __thiscall PlantWallnut::tossEnded(PlantWallnut *this,Zombie *param_1)

{
  char cVar1;
  RtWeakPtrBase *this_00;
  string *psVar2;
  SexyVector3 *pSVar3;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtrBase *)Zombie::GetType(param_1);
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_18,"pirate_barrel");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  cVar1 = Sexy::RtWeakPtrBase::operator==(this_00,(RtWeakPtrBase *)aRStack_10);
  if (cVar1 != '\0') {
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),pSVar3);
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      std::string::~string(asStack_18);
      nop();
      Zombie::TakeFatalDamage(param_1,*(BoardEntity **)(this + 0x10));
      goto LAB_0407dd84;
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
LAB_0407dd84:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

