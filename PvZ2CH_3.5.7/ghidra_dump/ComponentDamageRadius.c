// Class: ComponentDamageRadius


/* ComponentDamageRadius::beginCoolDown() */

void __thiscall ComponentDamageRadius::beginCoolDown(ComponentDamageRadius *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_EOT();
  ComponentRadiusBurst::updateTimes((ComponentRadiusBurst *)this,fVar1);
  return;
}


/* ComponentDamageRadius::onAnimationTriggered() */

void __thiscall ComponentDamageRadius::onAnimationTriggered(ComponentDamageRadius *this)

{
  if (*(int *)(this + 0x1b4) == 0 && *(int *)(this + 0x1b0) == 0) {
    return;
  }
  Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),*(int *)(this + 0x1b0),*(int *)(this + 0x1b4),0.0)
  ;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentDamageRadius::StaticClassInit() */

void ComponentDamageRadius::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ComponentDamageRadiusProps");
    (*pcVar3)(plVar2,asStack_10,FUN_03b90ecc,0xe8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ComponentDamageRadius");
    (*pcVar3)(plVar2,asStack_10,FUN_03b9116c,0x208,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentDamageRadius::StaticGetClass() */

long * ComponentDamageRadius::StaticGetClass(void)

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
  uVar2 = ComponentRadiusBurst::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentDamageRadius",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentDamageRadius::GetClass() const */

long * ComponentDamageRadius::GetClass(void)

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
  uVar2 = ComponentRadiusBurst::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentDamageRadius",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentDamageRadius::StartApply() */

void __thiscall ComponentDamageRadius::StartApply(ComponentDamageRadius *this)

{
  ComponentRadiusBurst::calculateTimeForNextPropigate((ComponentRadiusBurst *)this);
  (**(code **)(*(long *)this + 0x80))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentDamageRadius::reportNumberOfZombiesDamagedToOwner(int) */

void ComponentDamageRadius::reportNumberOfZombiesDamagedToOwner(int param_1)

{
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentDamageRadius::HasPopanim() */

bool __thiscall ComponentDamageRadius::HasPopanim(ComponentDamageRadius *this)

{
  bool bVar1;
  
  bVar1 = std::operator!=((string *)(this + 0x138),"");
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentDamageRadius::NotifyDamagedZombie(BoardEntity*) */

void __thiscall
ComponentDamageRadius::NotifyDamagedZombie(ComponentDamageRadius *this,BoardEntity *param_1)

{
  char cVar1;
  long *plVar2;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    (**(code **)(*plVar2 + 0x130))(plVar2,param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentDamageRadius::reportToOwnerWhenApplyingDamage() */

void ComponentDamageRadius::reportToOwnerWhenApplyingDamage(void)

{
  char cVar1;
  long *plVar2;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    (**(code **)(*plVar2 + 0x140))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentDamageRadius::calculateDamageInfo() */

void ComponentDamageRadius::calculateDamageInfo(void)

{
  char cVar1;
  long in_x0;
  RtObject *pRVar2;
  Plant *pPVar3;
  long in_x8;
  float fVar4;
  RtMixedPtrBase aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  DamageInfoProps::BuildDamageInfo(in_x0 + 0x1c0,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  else {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pPVar3 = Sexy::RtObject::Cast<Plant>(pRVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    if (pPVar3 != (Plant *)0x0) {
      Sexy::ResourceInfoTypes::FontRes::GetFont();
      pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      pPVar3 = Sexy::RtObject::Cast<Plant>(pRVar2);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      fVar4 = (float)Plant::GetTotalDamageRate(pPVar3);
      *(float *)(in_x8 + 8) = *(float *)(in_x8 + 8) * fVar4;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentDamageRadius::createDamageEffect(BoardEntity*) */

void __thiscall
ComponentDamageRadius::createDamageEffect(ComponentDamageRadius *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  Effect_PopAnim *this_00;
  PopAnim *pPVar3;
  SexyVector3 *this_01;
  undefined4 uVar4;
  undefined4 uVar5;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    cVar1 = FUN_0547419c((string *)(this + 0x1b8));
    if (cVar1 == '\0') {
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      GetPAMByName((string *)(this + 0x1b8));
      pPVar3 = (PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      Effect_PopAnim::CreatePopAnimRig(this_00,pPVar3,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      Effect_PopAnim::SetCentered(this_00,true);
      this_01 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)param_1);
      uVar4 = 0xc1a00000;
      uVar5 = 0;
      EATextSquish::Vec3::Vec3(aVStack_28,0.0,-20.0,0.0);
      local_18 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aVStack_28);
      local_14 = uVar4;
      local_10 = uVar5;
      iVar2 = (**(code **)(*(long *)param_1 + 200))(param_1);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,iVar2 + 1);
      std::string::string((string *)&local_18,"animation");
      Effect_PopAnim::PlaySingleAnimation(this_00,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,0);
      std::string::~string((string *)&local_18);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentDamageRadius::ComponentDamageRadius() */

void __thiscall ComponentDamageRadius::ComponentDamageRadius(ComponentDamageRadius *this)

{
  ComponentRadiusBurst::ComponentRadiusBurst((ComponentRadiusBurst *)this);
  *(undefined ***)this = &PTR_GetClass_06735f00;
  ComponentDamageRadiusProps::ComponentDamageRadiusProps
            ((ComponentDamageRadiusProps *)(this + 0x120));
  return;
}


/* ComponentDamageRadius::StaticNew() */

ComponentDamageRadius * ComponentDamageRadius::StaticNew(void)

{
  ComponentDamageRadius *this;
  
  this = ::operator_new(0x208);
  ComponentDamageRadius(this);
  return this;
}


/* ComponentDamageRadius::playDamageSound() */

void __thiscall ComponentDamageRadius::playDamageSound(ComponentDamageRadius *this)

{
  char cVar1;
  string *psVar2;
  
  cVar1 = FUN_0547419c(this + 0x1a8);
  if (cVar1 != '\0') {
    return;
  }
  psVar2 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(psVar2,this + 0x1a8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentDamageRadius::applyDamageTo(std::vector<BoardEntity*, std::allocator<BoardEntity*> >) */

void __thiscall
ComponentDamageRadius::applyDamageTo
          (ComponentDamageRadius *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Zombie *pZVar4;
  long *plVar5;
  RtObject *this_00;
  code *pcVar6;
  RtMixedPtrBase aRStack_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  DamageInfo aDStack_c8 [96];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  calculateDamageInfo();
  local_d8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_2);
  local_d0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_2);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_d8,(__normal_iterator *)&local_d0), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d8);
    this_00 = (RtObject *)*puVar3;
    if (this_00 != (RtObject *)0x0) {
      pZVar4 = Sexy::RtObject::Cast<Zombie>(this_00);
      if ((pZVar4 == (Zombie *)0x0) ||
         (cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_e0), cVar2 == '\0')) {
        pcVar6 = *(code **)(*(long *)this_00 + 0x110);
        calculateDamageInfo();
        (*pcVar6)(this_00,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
        playDamageSound(this);
        createDamageEffect(this,(BoardEntity *)this_00);
      }
      else {
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_e0);
        cVar2 = (**(code **)(*plVar5 + 0x138))(plVar5,aDStack_c8,pZVar4);
        if (cVar2 == '\0') {
          pcVar6 = *(code **)(*(long *)this_00 + 0x110);
          calculateDamageInfo();
          (*pcVar6)(this_00,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
          playDamageSound(this);
          createDamageEffect(this,(BoardEntity *)this_00);
          NotifyDamagedZombie(this,(BoardEntity *)this_00);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_d8);
  }
  reportToOwnerWhenApplyingDamage();
  reportNumberOfZombiesDamagedToOwner((int)this);
  DamageInfo::~DamageInfo(aDStack_c8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentDamageRadius::damageZombies() */

void __thiscall ComponentDamageRadius::damageZombies(ComponentDamageRadius *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  (**(code **)(*(long *)this + 0xa8))(this,avStack_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector(avStack_20,(vector *)avStack_38);
  applyDamageTo(this,avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentDamageRadius::damageGridItems() */

void __thiscall ComponentDamageRadius::damageGridItems(ComponentDamageRadius *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  (**(code **)(*(long *)this + 0xa0))(this,avStack_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector(avStack_20,(vector *)avStack_38);
  applyDamageTo(this,avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentDamageRadius::beginApply() */

void __thiscall ComponentDamageRadius::beginApply(ComponentDamageRadius *this)

{
  (**(code **)(*(long *)this + 0xd8))();
  damageGridItems(this);
  return;
}


/* ComponentDamageRadius::SetRadiusProps(ComponentDamageRadiusProps const&) */

void __thiscall
ComponentDamageRadius::SetRadiusProps
          (ComponentDamageRadius *this,ComponentDamageRadiusProps *param_1)

{
  ComponentRadiusBurst::SetRadiusProps
            ((ComponentRadiusBurst *)this,(ComponentRadiusBurstProps *)param_1);
  ComponentDamageRadiusProps::operator=((ComponentDamageRadiusProps *)(this + 0x120),param_1);
  return;
}


/* ComponentDamageRadius::~ComponentDamageRadius() */

void __thiscall ComponentDamageRadius::~ComponentDamageRadius(ComponentDamageRadius *this)

{
  *(undefined ***)this = &PTR_GetClass_06735f00;
  ComponentDamageRadiusProps::~ComponentDamageRadiusProps
            ((ComponentDamageRadiusProps *)(this + 0x120));
  ComponentRadiusBurst::~ComponentRadiusBurst((ComponentRadiusBurst *)this);
  return;
}


/* ComponentDamageRadius::~ComponentDamageRadius() */

void __thiscall ComponentDamageRadius::~ComponentDamageRadius(ComponentDamageRadius *this)

{
  ~ComponentDamageRadius(this);
  AK::FreeHook(this);
  return;
}

