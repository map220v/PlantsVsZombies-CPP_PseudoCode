// Class: PlantReincarnation


/* PlantReincarnation::CanApplyPlantfood() */

bool __thiscall PlantReincarnation::CanApplyPlantfood(PlantReincarnation *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) != 10;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantReincarnation::StaticClassInit() */

void PlantReincarnation::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantReincarnation");
    (*pcVar2)(plVar1,asStack_10,FUN_0424be64,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantReincarnation::StaticGetClass() */

long * PlantReincarnation::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantReincarnation",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantReincarnation::GetClass() const */

long * PlantReincarnation::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantReincarnation",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantReincarnation::PlantReincarnation() */

void __thiscall PlantReincarnation::PlantReincarnation(PlantReincarnation *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06816cb0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  return;
}


/* PlantReincarnation::StaticNew() */

PlantReincarnation * PlantReincarnation::StaticNew(void)

{
  PlantReincarnation *this;
  
  this = ::operator_new(0x40);
  PlantReincarnation(this);
  return this;
}


/* PlantReincarnation::~PlantReincarnation() */

void __thiscall PlantReincarnation::~PlantReincarnation(PlantReincarnation *this)

{
  *(undefined ***)this = &PTR_GetClass_06816cb0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantReincarnation::~PlantReincarnation() */

void __thiscall PlantReincarnation::~PlantReincarnation(PlantReincarnation *this)

{
  ~PlantReincarnation(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantReincarnation::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantReincarnation::Fire
          (PlantReincarnation *this,RtWeakPtrBase *param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  RtObject *this_00;
  ReincarnationPuffProjectile *pRVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x34] == (PlantReincarnation)0x0) {
    cVar1 = (**(code **)(*(long *)this + 0x180))();
    if (cVar1 == '\0') {
      if (param_4 == 0) {
        *(int *)(this + 0x30) = *(int *)(this + 0x30) + -1;
      }
    }
    else {
      param_4 = 1;
      this[0x34] = (PlantReincarnation)0x1;
    }
    param_4 = param_4 + (*(int *)(this + 0x2c) + -1) * 2;
    *(int *)(*(long *)(this + 0x10) + 0x150) = param_4;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    this_00 = (RtObject *)PlantFramework::Fire((PlantFramework *)this,aRStack_10,param_3,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if ((this_00 != (RtObject *)0x0) &&
       (cVar1 = (**(code **)(*(long *)this + 0x180))(this), cVar1 != '\0')) {
      FUN_04249b24(this_00 + 0xb0);
      iVar3 = FUN_04249ab8(*(undefined4 *)(this_00 + 0xa8));
      FUN_04249abc(this_00 + 0xa8,iVar3 + -1);
      bVar2 = Sexy::RtObject::IsA<ReincarnationPuffProjectile>(this_00);
      if (bVar2) {
        pRVar4 = Sexy::RtObject::Cast<ReincarnationPuffProjectile>(this_00);
        FUN_04249b18(pRVar4 + 0x1ac);
      }
    }
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
  }
  else {
    this_00 = (RtObject *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantReincarnation::SetPopAnimDelegates(PlantAnimRig*) */

void __thiscall
PlantReincarnation::SetPopAnimDelegates(PlantReincarnation *this,PlantAnimRig *param_1)

{
  PlantAnimRig_Reincarnation *pPVar1;
  CBMemberTranslatorX aCStack_128 [24];
  CBMemberTranslatorX aCStack_110 [24];
  CBMemberTranslatorX aCStack_f8 [24];
  CBMemberTranslatorX aCStack_e0 [24];
  Delegate1<float> aDStack_c8 [48];
  Delegate1<float> aDStack_98 [48];
  Delegate1<float> aDStack_68 [48];
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::SetPopAnimDelegates((PlantFramework *)this,param_1);
  pPVar1 = (PlantAnimRig_Reincarnation *)FUN_0424b5dc(*(undefined8 *)(this + 0x10));
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (*(ReceivedDataCallback **)(this + 0x10),Plant::OnUseSpecialAnimCommand);
  Sexy::Delegate1<float>::Delegate1<Plant,void(Plant::*)(float)>(aDStack_c8,aCStack_128);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (*(ReceivedDataCallback **)(this + 0x10),Plant::OnUseActionAnimCommand);
  Sexy::Delegate1<float>::Delegate1<Plant,void(Plant::*)(float)>(aDStack_98,aCStack_110);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,FirePuffCallback);
  Sexy::Delegate1<float>::Delegate1<PlantReincarnation,void(PlantReincarnation::*)(float)>
            (aDStack_68,aCStack_f8);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,FireWindCallback);
  Sexy::Delegate1<float>::Delegate1<PlantReincarnation,void(PlantReincarnation::*)(float)>
            (aDStack_38,aCStack_e0);
  PlantAnimRig_Reincarnation::SetPlantDelegates(pPVar1,aDStack_c8,aDStack_98,aDStack_68,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantReincarnation::FirePuffCallback(float) */

void PlantReincarnation::FirePuffCallback(float param_1)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this;
  char cVar1;
  long *in_x0;
  long lVar2;
  Projectile *pPVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar4 = *(code **)(*in_x0 + 0xb0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  lVar2 = (*pcVar4)();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (((lVar2 != 0) && (*(char *)((long)in_x0 + 0x34) != '\0')) &&
     (cVar1 = Plant::GetAvatarEnable((Plant *)in_x0[2]), cVar1 != '\0')) {
    this = (RtWeakPtr<SpartanBambooMatrixSystem> *)(in_x0 + 7);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this,(RtWeakPtrBase *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    pPVar3 = (Projectile *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    lVar2 = Projectile::GetVelocity(pPVar3);
    fVar5 = *(float *)(lVar2 + 4);
    fVar6 = *(float *)(lVar2 + 8);
    pPVar3 = (Projectile *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    lVar2 = FUN_0424b7a8(in_x0[2]);
    Projectile::SetVelocity(pPVar3,*(float *)(lVar2 + 0x2d0),fVar5,fVar6);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantReincarnation::getPetalAmount() */

int __thiscall PlantReincarnation::getPetalAmount(PlantReincarnation *this)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_0424b7a8(*(undefined8 *)(this + 0x10));
  uVar4 = *(undefined8 *)(this + 0x10);
  iVar3 = *(int *)(lVar2 + 0x2b8);
  iVar1 = FUN_04249ad0(uVar4);
  if (4 < iVar1) {
    lVar2 = FUN_0424b7a8(uVar4);
    return *(int *)(lVar2 + 0x2b8) + -4;
  }
  if (iVar1 < 3) {
    if (iVar1 == 2) {
      lVar2 = FUN_0424b7a8(uVar4);
      iVar3 = *(int *)(lVar2 + 0x2b8) + -1;
    }
    return iVar3;
  }
  lVar2 = FUN_0424b7a8(uVar4);
  return *(int *)(lVar2 + 0x2b8) + -2;
}


/* PlantReincarnation::PostInitializeFromPropertySheet() */

void __thiscall PlantReincarnation::PostInitializeFromPropertySheet(PlantReincarnation *this)

{
  int iVar1;
  
  iVar1 = getPetalAmount(this);
  if (iVar1 < *(int *)(this + 0x30)) {
    *(int *)(this + 0x30) = iVar1;
  }
  return;
}


/* PlantReincarnation::CancelPlantfood() */

void __thiscall PlantReincarnation::CancelPlantfood(PlantReincarnation *this)

{
  undefined4 uVar1;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  uVar1 = getPetalAmount(this);
  *(undefined4 *)(this + 0x30) = uVar1;
  return;
}


/* PlantReincarnation::FindTargetAndFire(PlantWeapon) */

char __thiscall PlantReincarnation::FindTargetAndFire(PlantReincarnation *this,undefined8 param_2)

{
  char cVar1;
  PopAnimRig *this_00;
  long *plVar2;
  
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(this + 0x28);
  cVar1 = FUN_04249ad8(*(undefined8 *)(this + 0x10));
  if (cVar1 != '\0') {
    cVar1 = PlantFramework::FindTargetAndFire(this,param_2);
    if (cVar1 != '\0') {
      return cVar1;
    }
    this_00 = (PopAnimRig *)FUN_0424ba28(*(undefined8 *)(this + 0x10));
    cVar1 = PopAnimRig::IsPlayingAnything(this_00);
    if (cVar1 == '\0') {
      plVar2 = (long *)FUN_0424b5dc(*(undefined8 *)(this + 0x10));
      (**(code **)(*plVar2 + 0x118))();
      return '\0';
    }
  }
  return '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantReincarnation::setState(unsigned int) */

void __thiscall PlantReincarnation::setState(PlantReincarnation *this,uint param_1)

{
  undefined4 uVar1;
  long *plVar2;
  PlantAnimRig_Reincarnation *pPVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(uint *)(*(long *)(this + 0x10) + 200) = param_1;
  if (param_1 == 10) {
    *(undefined4 *)(this + 0x28) = 3;
    *(undefined4 *)(this + 0x2c) = 3;
  }
  else if (param_1 == 0xb) {
    if (*(int *)(this + 0x28) < 3) {
      *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
    }
    uVar1 = getPetalAmount(this);
    *(undefined4 *)(this + 0x30) = uVar1;
    pPVar3 = (PlantAnimRig_Reincarnation *)FUN_0424b5dc(*(undefined8 *)(this + 0x10));
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_Reincarnation::PlayPuff(pPVar3,aRStack_50,*(undefined4 *)(this + 0x28));
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  else if (param_1 == 4) {
    plVar2 = (long *)FUN_0424b5dc();
    (**(code **)(*plVar2 + 0x118))();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantReincarnation::Initialize() */

void __thiscall PlantReincarnation::Initialize(PlantReincarnation *this)

{
  undefined4 uVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x34] = (PlantReincarnation)0x0;
  *(undefined4 *)(this + 0x28) = 1;
  *(undefined4 *)(this + 0x2c) = 1;
  setState(this,4);
  uVar1 = getPetalAmount(this);
  *(undefined4 *)(this + 0x30) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x38),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantReincarnation::UpdateActions() */

void __thiscall PlantReincarnation::UpdateActions(PlantReincarnation *this)

{
  char cVar1;
  PopAnimRig *pPVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  
  lVar5 = *(long *)(this + 0x10);
  switch(*(undefined4 *)(lVar5 + 200)) {
  case 4:
    if (*(int *)(this + 0x30) < 1) {
      fVar6 = (float)PVZ_T();
      lVar4 = FUN_0424b7a8(*(undefined8 *)(this + 0x10));
      *(float *)(lVar5 + 0x128) = fVar6 + *(float *)(lVar4 + 700);
      setState(this,0xc);
      return;
    }
    break;
  case 10:
    pPVar2 = (PopAnimRig *)FUN_0424ba28(lVar5);
    cVar1 = PopAnimRig::IsPlayingAnything(pPVar2);
    if (cVar1 == '\0') {
      (**(code **)(*(long *)this + 0x228))(this);
      this[0x34] = (PlantReincarnation)0x0;
LAB_0424bd50:
      setState(this,4);
      return;
    }
    break;
  case 0xb:
    pPVar2 = (PopAnimRig *)FUN_0424ba28(lVar5);
    cVar1 = PopAnimRig::IsPlayingAnything(pPVar2);
    if (cVar1 == '\0') goto LAB_0424bd50;
    break;
  case 0xc:
    pPVar2 = (PopAnimRig *)FUN_0424ba28(lVar5);
    cVar1 = PopAnimRig::IsPlayingAnything(pPVar2);
    if (cVar1 == '\0') {
      plVar3 = (long *)FUN_0424b5dc(*(undefined8 *)(this + 0x10));
      (**(code **)(*plVar3 + 0x118))();
    }
    fVar6 = (float)PVZ_T();
    if (*(float *)(*(long *)(this + 0x10) + 0x128) <= fVar6) {
      setState(this,0xb);
      return;
    }
  }
  return;
}


/* PlantReincarnation::ApplyPlantfood() */

void __thiscall PlantReincarnation::ApplyPlantfood(PlantReincarnation *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  setState(this,10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantReincarnation::FireStrongWind(int, int) */

void __thiscall PlantReincarnation::FireStrongWind(PlantReincarnation *this,int param_1,int param_2)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar6;
  long lVar7;
  RtObject *this_02;
  ulong uVar8;
  Projectile *pPVar9;
  float *pfVar10;
  RtObject *this_03;
  ZombieTosserSubSystem *pZVar11;
  ulong uVar12;
  undefined8 uVar13;
  ZombieConditionsStruct *pZVar20;
  ulong uVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  Point aPStack_f8 [4];
  undefined4 local_f4;
  Point aPStack_f0 [8];
  int local_e8;
  int local_e4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_e0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_d8 [8];
  undefined8 local_d0;
  undefined8 local_c8;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b8 [72];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar12 = 0;
  Sexy::Point::Point(aPStack_f8,param_1,param_2);
  Sexy::Point::Point(aPStack_f0,0xeb,-0xaa);
  BoardTransforms::GridToBoardSpace(aPStack_f8);
  Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_e8,(TPoint *)aPStack_f0);
  uVar3 = Board::MakeRenderOrder(0x65130,local_f4,0);
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&local_d0,"POPANIM_EFFECTS_DAZEYCHAIN_HITFX");
  GetPAMByName((string *)&local_d0);
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_70);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar6,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
  std::string::~string((string *)&local_d0);
  nop();
  uVar16 = 0;
  uVar14 = (ulong)(uint)(float)local_e4;
  EATextSquish::Vec3::Vec3((Vec3 *)&local_70,(float)local_e8,(float)local_e4,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)&local_70,-1);
  std::string::string((string *)&local_70,"wind");
  Effect_PopAnim::PlaySingleAnimation(this_01,(RtWeakPtr *)&local_70,0);
  std::string::~string((string *)&local_70);
  nop();
  FUN_04249ab0(this_01 + 0x1c,uVar3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_d0);
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  lVar7 = FUN_0424b7a8(*(undefined8 *)(this + 0x10));
  fVar17 = *(float *)(lVar7 + 0x2c0);
  lVar7 = FUN_0424b7a8(*(undefined8 *)(this + 0x10));
  uVar19 = *(uint *)(lVar7 + 0x2c4);
  Sexy::Insets::Insets
            ((Insets *)&local_70,param_1,param_2 + -1,
             *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) - param_1,3);
  EntityFinder::GetEntitiesInGridSquares((string *)&local_d0,2,(RtWeakPtr *)&local_70);
  uVar13 = local_d0;
  lVar7 = FUN_04249af8(local_d0,local_c8);
  if (lVar7 != 0) {
    do {
      FUN_04249b04(uVar13,uVar12);
      ToolPacketData::GetProps();
      this_02 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_70)
      ;
      bVar1 = Sexy::RtObject::IsA<Zombie>(this_02);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
      if (bVar1) {
        FUN_04249b04(local_d0,uVar12);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        cVar2 = (**(code **)(*(long *)this_03 + 0x330))(this_03);
        if (((((cVar2 == '\0') &&
              (cVar2 = (**(code **)(*(long *)this_03 + 0x328))(this_03), cVar2 == '\0')) &&
             (cVar2 = FUN_0424aa54(*(undefined4 *)(this_03 + 0x28)), cVar2 == '\0')) &&
            ((bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>(this_03), !bVar1 &&
             (bVar1 = Sexy::RtObject::IsA<ZombieMech>(this_03), !bVar1)))) &&
           ((bVar1 = Sexy::RtObject::IsA<Zomboss>(this_03), !bVar1 &&
            ((cVar2 = (**(code **)(*(long *)this_03 + 0x4d8))(this_03), cVar2 == '\0' &&
             (cVar2 = RealObject::IsOnOpposingTeam(this_03,2), cVar2 == '\0')))))) {
          Zombie::GetCurrentTitleStatus();
          if (((local_58 != '\0') ||
              (((cVar2 = (**(code **)(*(long *)this_03 + 0x508))(this_03), cVar2 != '\0' ||
                (bVar1 = Sexy::RtObject::IsA<ZombieAgileBronze>(this_03), bVar1)) ||
               (bVar1 = Sexy::RtObject::IsA<ZombieStrongBronze>(this_03), bVar1)))) ||
             (((bVar1 = Sexy::RtObject::IsA<ZombieMagicBronze>(this_03), bVar1 ||
               (bVar1 = Sexy::RtObject::IsA<ZombieLionDance>(this_03), bVar1)) ||
              ((bVar1 = Sexy::RtObject::IsA<ZombieWealthGod>(this_03), bVar1 ||
               ((bVar1 = Sexy::RtObject::IsA<ZombieSkyCityTwinsPlane>(this_03), bVar1 ||
                (bVar1 = Sexy::RtObject::IsA<ZombieInvisiblePlane>(this_03), bVar1)))))))) {
            TitleStatus::~TitleStatus((TitleStatus *)&local_70);
          }
          else {
            bVar1 = Sexy::RtObject::IsA<ZombiePirateCannon>(this_03);
            TitleStatus::~TitleStatus((TitleStatus *)&local_70);
            if (!bVar1) {
              lVar7 = FUN_0424b7a8(*(undefined8 *)(this + 0x10));
                    /* WARNING: Load size is inaccurate */
              pZVar20._0_4_ = *(ZombieConditionsStruct **)(lVar7 + 0x2c8);
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        (aRStack_d8,(RtWeakPtrBase *)aRStack_e0);
              ZombieConditionsStruct::ZombieConditionsStruct
                        (pZVar20._0_4_,(RtWeakPtr *)&local_70,2,aRStack_d8);
              Zombie::ApplyCondition((Zombie *)this_03,(ZombieConditionsStruct *)&local_70);
              PVPZoneData::~PVPZoneData((PVPZoneData *)&local_70);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_e0);
              iVar5 = SharkMinion::getRow((SharkMinion *)this_03);
              uVar3 = (undefined4)uVar14;
              if (param_2 == iVar5) {
                local_70 = ZombieTosserSubSystem::CaculateTargetButNotOffScreen
                                     ((Zombie *)this_03,(float)iVar4 * fVar17);
                local_68 = (undefined4)uVar16;
                local_6c = uVar3;
                pZVar11 = Board::GetGameSubSystem<ZombieTosserSubSystem>
                                    (*(Board **)(gLawnApp + 0x9f0));
                RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b8);
                uVar14 = (ulong)uVar19;
                ZombieTosserSubSystem::LaunchZombie
                          ((ZombieTosserSubSystem *)0x3f800000,pZVar11,this_03,
                           (RtWeakPtr *)&local_70,aRStack_b8,0);
                RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                ::~RtReflectionDelegate
                          ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                            *)aRStack_b8);
              }
            }
          }
        }
      }
      uVar13 = local_d0;
      uVar12 = uVar12 + 1;
      uVar8 = FUN_04249af8(local_d0,local_c8);
    } while (uVar12 < uVar8);
  }
  this_00 = (RtWeakPtr *)(this + 0x38);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pPVar9 = (Projectile *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pfVar10 = (float *)Projectile::GetVelocity(pPVar9);
    fVar18 = *pfVar10;
    fVar17 = pfVar10[1];
    fVar15 = pfVar10[2];
    pPVar9 = (Projectile *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    lVar7 = FUN_0424b7a8(*(undefined8 *)(this + 0x10));
    Projectile::SetVelocity(pPVar9,*(float *)(lVar7 + 0x2cc) * fVar18 + fVar18,fVar17,fVar15);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_d0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantReincarnation::FireWindCallback(float) */

void PlantReincarnation::FireWindCallback(float param_1)

{
  int iVar1;
  int iVar2;
  PlantReincarnation *in_x0;
  
  iVar1 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(in_x0 + 0x10));
  iVar2 = SharkMinion::getRow(*(SharkMinion **)(in_x0 + 0x10));
  FireStrongWind(in_x0,iVar1,iVar2);
  return;
}

