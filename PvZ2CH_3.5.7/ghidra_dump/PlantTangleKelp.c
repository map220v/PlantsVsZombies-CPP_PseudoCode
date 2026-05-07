// Class: PlantTangleKelp


/* PlantTangleKelp::CanBeTargeted() */

bool __thiscall PlantTangleKelp::CanBeTargeted(PlantTangleKelp *this)

{
  return 1 < *(int *)(*(long *)(this + 0x10) + 200) - 0xbU;
}


/* PlantTangleKelp::finishSwallowingZombie(float) */

void PlantTangleKelp::finishSwallowingZombie(float param_1)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTangleKelp::StaticClassInit() */

void PlantTangleKelp::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantTangleKelp");
    (*pcVar2)(plVar1,asStack_10,FUN_041e9108,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTangleKelp::StaticGetClass() */

long * PlantTangleKelp::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTangleKelp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTangleKelp::GetClass() const */

long * PlantTangleKelp::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTangleKelp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTangleKelp::~PlantTangleKelp() */

void __thiscall PlantTangleKelp::~PlantTangleKelp(PlantTangleKelp *this)

{
  *(undefined ***)this = &PTR_GetClass_06804770;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantTangleKelp::~PlantTangleKelp() */

void __thiscall PlantTangleKelp::~PlantTangleKelp(PlantTangleKelp *this)

{
  ~PlantTangleKelp(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTangleKelp::IsInDeepWater(Sexy::RtWeakPtr<Zombie> const&) */

void __thiscall PlantTangleKelp::IsInDeepWater(PlantTangleKelp *this,RtWeakPtr *param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar1;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  local_18 = (float)*puVar1;
  local_10 = *(undefined4 *)(puVar1 + 1);
  _local_18 = CONCAT44((int)((ulong)*puVar1 >> 0x20),local_18 - 17.0);
  Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),(SexyVector3 *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTangleKelp::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

void PlantTangleKelp::CanTargetZombie
               (PlantTangleKelp *param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  undefined1 uVar2;
  long *plVar3;
  Zombie *pZVar4;
  RealObject *this;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = (**(code **)(*plVar3 + 0x330))();
  if (cVar1 == '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = (**(code **)(*plVar3 + 0x328))();
    if (cVar1 == '\0') {
      pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      cVar1 = Zombie::IsOnGround(pZVar4);
      if (cVar1 != '\0') {
        this = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        cVar1 = RealObject::IsOnOpposingTeam(this,*(RealObject **)(param_1 + 0x10));
        if ((cVar1 != '\0') && (cVar1 = IsInDeepWater(param_1,(RtWeakPtr *)param_2), cVar1 != '\0'))
        {
          pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          cVar1 = Zombie::IsControlled(pZVar4);
          if (cVar1 == '\0') {
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
            uVar2 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)param_1);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            goto LAB_041e7454;
          }
        }
      }
    }
  }
  uVar2 = 0;
LAB_041e7454:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PlantTangleKelp::PlantTangleKelp() */

void __thiscall PlantTangleKelp::PlantTangleKelp(PlantTangleKelp *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06804770;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  return;
}


/* PlantTangleKelp::StaticNew() */

PlantTangleKelp * PlantTangleKelp::StaticNew(void)

{
  PlantTangleKelp *this;
  
  this = ::operator_new(0x30);
  PlantTangleKelp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTangleKelp::SetPopAnimDelegates(PlantAnimRig*) */

void __thiscall PlantTangleKelp::SetPopAnimDelegates(PlantTangleKelp *this,PlantAnimRig *param_1)

{
  PlantAnimRig *pPVar1;
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1<float> aDStack_68 [48];
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::SetPopAnimDelegates((PlantFramework *)this,param_1);
  pPVar1 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,finishSwallowingZombie);
  Sexy::Delegate1<float>::Delegate1<PlantTangleKelp,void(PlantTangleKelp::*)(float)>
            (aDStack_68,aCStack_98);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,spawnPlantFoodTentacles);
  Sexy::Delegate1<float>::Delegate1<PlantTangleKelp,void(PlantTangleKelp::*)(float)>
            (aDStack_38,aCStack_80);
  PlantAnimRig::SetPlantDelegates(pPVar1,aDStack_68,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTangleKelp::setState(unsigned int) */

void __thiscall PlantTangleKelp::setState(PlantTangleKelp *this,uint param_1)

{
  UIEasyButtonWidget *this_00;
  PopAnimRig *pPVar1;
  PlantAnimRig *pPVar2;
  long *plVar3;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(uint *)(this_00 + 200) != param_1) {
    *(uint *)(this_00 + 200) = param_1;
    if (param_1 == 10) {
      plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
      (**(code **)(*plVar3 + 0x118))();
    }
    else if (param_1 == 0xc) {
      pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
      std::string::string(asStack_58,"attack_emerge");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_60,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 asStack_60);
      PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_58);
      nop();
      pPVar2 = (PlantAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PlantAnimRig::SetState(pPVar2,0xe);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTangleKelp::Initialize() */

void __thiscall PlantTangleKelp::Initialize(PlantTangleKelp *this)

{
  PlantFramework::Initialize((PlantFramework *)this);
  setState(this,10);
  return;
}


/* PlantTangleKelp::ApplyPlantfood() */

void __thiscall PlantTangleKelp::ApplyPlantfood(PlantTangleKelp *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  setState(this,5);
  return;
}


/* PlantTangleKelp::CancelPlantfood() */

void __thiscall PlantTangleKelp::CancelPlantfood(PlantTangleKelp *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTangleKelp::UpdateActions() */

void __thiscall PlantTangleKelp::UpdateActions(PlantTangleKelp *this)

{
  char cVar1;
  bool bVar2;
  SexyVector3 *pSVar3;
  PopAnimRig *pPVar4;
  PlantAnimRig *pPVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  UnchartedModePlantNumData aUStack_80 [8];
  RtWeakPtr aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(this_00 + 200) == 10) {
    UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_80,1,0);
    PlantFramework::FindTargetZombie(aRStack_78,this,0,aUStack_80);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_78);
    if (bVar2) {
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x28),aRStack_78);
      setState(this,0xb);
      pPVar4 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_58,"attack_submerge");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_60,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 asStack_60);
      PopAnimRig::PlayAndStop(pPVar4,asStack_58,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_58);
      nop();
      pPVar5 = (PlantAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PlantAnimRig::SetState(pPVar5,0xe);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x10);
  }
  cVar1 = FUN_041e63e8(*(undefined4 *)(this_00 + 0x1d0));
  if (cVar1 == '\0') {
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    cVar1 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),pSVar3);
    if (cVar1 == '\0') {
      Plant::KillPlant(*(Plant **)(this + 0x10),1,0,0x8000000000);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTangleKelp::zombieIsBlacklisted(Zombie const*) const */

void __thiscall PlantTangleKelp::zombieIsBlacklisted(PlantTangleKelp *this,Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar8;
  ZombieGargantuar *pZVar9;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = FUN_041e8720(*(undefined8 *)(this + 0x10));
  uVar6 = FUN_041e7da0(*(undefined8 *)(lVar5 + 0x2c8));
  uVar7 = FUN_041e7df0(*(undefined8 *)(lVar5 + 0x2d0));
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar6,uVar7,lVar8 + 8);
  local_10 = FUN_041e7df0(*(undefined8 *)(lVar5 + 0x2d0));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if ((((bVar1) ||
       (pZVar9 = Sexy::RtObject::Cast<ZombieGargantuar>((RtObject *)param_1),
       pZVar9 != (ZombieGargantuar *)0x0)) || (iVar3 = Zombie::GetSizeType(param_1), iVar3 == 2)) ||
     ((cVar2 = Zombie::CanTakeFatalDamage(param_1), cVar2 == '\0' ||
      (iVar3 = FUN_041e6420(*(undefined4 *)(param_1 + 0xb0)), iVar3 == 0xc)))) {
    bVar1 = true;
  }
  else {
    iVar3 = FUN_041e63e4(*(undefined4 *)(param_1 + 0x50));
    iVar4 = FUN_041e6410(*(undefined8 *)(this + 0x10));
    bVar1 = iVar4 < iVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTangleKelp::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantTangleKelp::onAnimStoppedCallback(PlantTangleKelp *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  ResourceInfo *pRVar4;
  PlantTangleKelpTentacle *pPVar5;
  long lVar6;
  Plant *pPVar7;
  undefined8 uVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==("attack_submerge",param_1);
  if (!bVar1) {
    bVar1 = std::operator==("attack_emerge",param_1);
    if (bVar1) {
      setState(this,10);
    }
    goto LAB_041e9d68;
  }
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x28));
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x28));
  if (pRVar4 == (ResourceInfo *)0x0) {
LAB_041e9dc4:
    UnchartedModePlantNumData::UnchartedModePlantNumData
              ((UnchartedModePlantNumData *)aRStack_18,1,0);
    PlantFramework::FindTargetZombie((RtWeakPtr *)aRStack_10,this,0,aRStack_18);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (pRVar4 == (ResourceInfo *)0x0) {
      setState(this,0xc);
      goto LAB_041e9d68;
    }
  }
  else {
    pcVar9 = *(code **)(*(long *)this + 0x3e0);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    cVar2 = (*pcVar9)(this,aRStack_10,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    if (cVar2 == '\0') goto LAB_041e9dc4;
  }
  pPVar5 = Board::AddEffect<PlantTangleKelpTentacle>(*(Board **)(gLawnApp + 0x9f0));
  cVar2 = zombieIsBlacklisted(this,(Zombie *)pRVar4);
  if (cVar2 == '\0') {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    uVar8 = *(undefined8 *)(this + 0x10);
    uVar3 = FUN_041e6410(uVar8);
    lVar6 = FUN_041e8720(uVar8);
    pPVar7 = *(Plant **)(this + 0x10);
    fVar10 = (float)FUN_041e63f4(*(undefined4 *)(pPVar7 + 0xf4),*(undefined4 *)(pPVar7 + 0x100),
                                 *(undefined4 *)(pPVar7 + 0x104),*(undefined4 *)(pPVar7 + 0x3b8));
    fVar11 = (float)FUN_041e6404(*(undefined4 *)(pPVar7 + 0x3bc));
    fVar12 = *(float *)(lVar6 + 0x2c0);
    fVar13 = (float)Plant::GetExtraDPSmodifier(pPVar7);
    fVar14 = (float)FUN_041e6408(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
    PlantTangleKelpTentacle::SwallowZombie
              ((PlantTangleKelpTentacle *)(fVar10 * fVar11 * fVar12 * fVar13 * fVar14),pPVar5,
               aRStack_10,uVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    lVar6 = FUN_041e8720(*(undefined8 *)(this + 0x10));
    pPVar7 = *(Plant **)(this + 0x10);
    fVar10 = (float)FUN_041e63f4(*(undefined4 *)(pPVar7 + 0xf4),*(undefined4 *)(pPVar7 + 0x100),
                                 *(undefined4 *)(pPVar7 + 0x104),*(undefined4 *)(pPVar7 + 0x3b8));
    fVar11 = (float)FUN_041e6404(*(undefined4 *)(pPVar7 + 0x3bc));
    fVar12 = *(float *)(lVar6 + 0x2c0);
    fVar13 = (float)Plant::GetExtraDPSmodifier(pPVar7);
    fVar14 = (float)FUN_041e6408(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
    PlantTangleKelpTentacle::SlapZombie
              ((PlantTangleKelpTentacle *)(fVar10 * fVar11 * fVar12 * fVar13 * fVar14),pPVar5,
               aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  Plant::KillPlant(*(Plant **)(this + 0x10),1,0,0x8000000000);
LAB_041e9d68:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTangleKelp::spawnPlantFoodTentacles(float) */

void PlantTangleKelp::spawnPlantFoodTentacles(float param_1)

{
  char cVar1;
  int iVar2;
  PlantFramework *in_x0;
  undefined8 uVar3;
  long lVar4;
  PlantTangleKelpTentacle *pPVar5;
  undefined8 *puVar6;
  Zombie *pZVar7;
  int iVar8;
  long lVar9;
  Plant *pPVar10;
  code *pcVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  float local_30;
  float fStack_2c;
  float local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_50);
  uVar3 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          **)(in_x0 + 0x10));
  lVar4 = Board::FindRegionWithFlags(*(undefined8 *)(gLawnApp + 0x9f0),uVar3,2);
  if (lVar4 != 0) {
    Board::GetGridBoundingRect();
    BoardRegion::GetRegion();
    Sexy::Insets::Insets
              ((Insets *)&local_20,(int)local_30,(int)fStack_2c,
               (int)((float)((int)local_40 + local_38) - local_30),(int)local_24);
    local_50 = local_20;
    local_48 = local_18;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
             (Insets *)&local_50,0xffffffff,0xffffffff);
  lVar4 = FUN_041e8720(*(undefined8 *)(in_x0 + 0x10));
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(in_x0 + 0x10));
  iVar8 = *(int *)(lVar4 + 700);
  if (cVar1 == '\0') {
    iVar8 = *(int *)(lVar4 + 0x2b8);
  }
  if (0 < iVar8) {
    do {
      while( true ) {
        cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                          ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
        if (cVar1 != '\0') goto LAB_041ea6fc;
        iVar2 = FUN_041e6448(local_20,local_18);
        iVar2 = PlantFramework::Rand(in_x0,iVar2);
        lVar9 = (long)iVar2;
        puVar6 = (undefined8 *)FUN_041e6454(local_20,lVar9);
        pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
        pcVar11 = *(code **)(*(long *)in_x0 + 0x3e0);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)&local_40);
        cVar1 = (*pcVar11)();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        if (cVar1 != '\0') break;
        local_58 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_20);
        local_40 = __gnu_cxx::
                   __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                   ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                *)&local_58,lVar9);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_30,(__normal_iterator *)&local_40);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,
                   CONCAT44(fStack_2c,local_30));
      }
      pPVar5 = Board::AddEffect<PlantTangleKelpTentacle>(*(Board **)(gLawnApp + 0x9f0));
      cVar1 = zombieIsBlacklisted((PlantTangleKelp *)in_x0,pZVar7);
      if (cVar1 == '\0') {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)&local_40);
        pPVar10 = *(Plant **)(in_x0 + 0x10);
        fVar12 = (float)FUN_041e63f4(*(undefined4 *)(pPVar10 + 0xf4),
                                     *(undefined4 *)(pPVar10 + 0x100),
                                     *(undefined4 *)(pPVar10 + 0x104),
                                     *(undefined4 *)(pPVar10 + 0x3b8));
        fVar13 = (float)FUN_041e6404(*(undefined4 *)(pPVar10 + 0x3bc));
        fVar15 = *(float *)(lVar4 + 0x2c4);
        fVar14 = (float)Plant::GetExtraDPSmodifier(pPVar10);
        fVar16 = (float)FUN_041e6408(*(undefined4 *)(*(long *)(in_x0 + 0x10) + 0x424));
        PlantTangleKelpTentacle::SwallowZombie
                  ((PlantTangleKelpTentacle *)(fVar12 * fVar13 * fVar15 * fVar14 * fVar16),pPVar5,
                   (Vec3 *)&local_30,1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      }
      else {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)&local_40);
        pPVar10 = *(Plant **)(in_x0 + 0x10);
        fVar12 = (float)FUN_041e63f4(*(undefined4 *)(pPVar10 + 0xf4),
                                     *(undefined4 *)(pPVar10 + 0x100),
                                     *(undefined4 *)(pPVar10 + 0x104),
                                     *(undefined4 *)(pPVar10 + 0x3b8));
        fVar13 = (float)FUN_041e6404(*(undefined4 *)(pPVar10 + 0x3bc));
        fVar15 = *(float *)(lVar4 + 0x2c0);
        fVar14 = (float)Plant::GetExtraDPSmodifier(pPVar10);
        fVar16 = (float)FUN_041e6408(*(undefined4 *)(*(long *)(in_x0 + 0x10) + 0x424));
        PlantTangleKelpTentacle::SlapZombie
                  ((PlantTangleKelpTentacle *)(fVar12 * fVar13 * fVar15 * fVar14 * fVar16),pPVar5,
                   (Vec3 *)&local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      }
      iVar8 = iVar8 + -1;
      local_58 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
      local_40 = __gnu_cxx::
                 __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                 ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                              *)&local_58,lVar9);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_30,(__normal_iterator *)&local_40);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,
                 CONCAT44(fStack_2c,local_30));
    } while (iVar8 != 0);
  }
LAB_041ea774:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_041ea6fc:
  do {
    fVar12 = (float)RandRangeFloat(0.0,(float)(int)local_48);
    fVar16 = (float)(int)local_50;
    fVar13 = (float)RandRangeFloat(0.0,(float)local_48._4_4_);
    fVar14 = (float)local_50._4_4_;
    pPVar5 = Board::AddEffect<PlantTangleKelpTentacle>(*(Board **)(gLawnApp + 0x9f0));
    EATextSquish::Vec3::Vec3((Vec3 *)&local_30,fVar12 + fVar16,fVar13 + fVar14,0.0);
    PlantTangleKelpTentacle::SpawnAtPosition(pPVar5,(SexyVector3 *)&local_30);
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  goto LAB_041ea774;
}

