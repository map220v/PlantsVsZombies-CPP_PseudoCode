// Class: ParsnipProjectile


/* ParsnipProjectile::StartAnimation(bool) */

void __thiscall ParsnipProjectile::StartAnimation(ParsnipProjectile *this,bool param_1)

{
  this[0x1ac] = (ParsnipProjectile)param_1;
  (**(code **)(*(long *)this + 0x1e8))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParsnipProjectile::playAnimation() */

void __thiscall ParsnipProjectile::playAnimation(ParsnipProjectile *this)

{
  undefined4 uVar1;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  if (this[0x1ac] == (ParsnipProjectile)0x0) {
    std::string::string(asStack_40,"attack_run");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    uVar1 = PopAnimRig::PlayAndStop(pPVar2,asStack_40,0,aDStack_38);
    *(undefined4 *)(this + 0x1b0) = uVar1;
    std::string::~string(asStack_40);
    nop();
  }
  else {
    std::string::string(asStack_40,"plantfood_run");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    uVar1 = PopAnimRig::PlayAndStop(pPVar2,asStack_40,0,aDStack_38);
    *(undefined4 *)(this + 0x1b0) = uVar1;
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ParsnipProjectile::~ParsnipProjectile() */

void __thiscall ParsnipProjectile::~ParsnipProjectile(ParsnipProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06740750;
  *(undefined ***)(this + 0x10) = &PTR__ParsnipProjectile_06740950;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ParsnipProjectile::~ParsnipProjectile() */

void __thiscall ParsnipProjectile::~ParsnipProjectile(ParsnipProjectile *this)

{
  ~ParsnipProjectile(this + -0x10);
  return;
}


/* ParsnipProjectile::~ParsnipProjectile() */

void __thiscall ParsnipProjectile::~ParsnipProjectile(ParsnipProjectile *this)

{
  ~ParsnipProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ParsnipProjectile::~ParsnipProjectile() */

void __thiscall ParsnipProjectile::~ParsnipProjectile(ParsnipProjectile *this)

{
  ~ParsnipProjectile(this + -0x10);
  return;
}


/* ParsnipProjectile::ParsnipProjectile() */

void __thiscall ParsnipProjectile::ParsnipProjectile(ParsnipProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06740750;
  *(undefined ***)(this + 0x10) = &PTR__ParsnipProjectile_06740950;
  return;
}


/* ParsnipProjectile::StaticNew() */

ParsnipProjectile * ParsnipProjectile::StaticNew(void)

{
  ParsnipProjectile *this;
  
  this = ::operator_new(0x1b8);
  ParsnipProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParsnipProjectile::StaticClassInit() */

void ParsnipProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ParsnipProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03beda28,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ParsnipProjectile::StaticGetClass() */

long * ParsnipProjectile::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"ParsnipProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ParsnipProjectile::GetClass() const */

long * ParsnipProjectile::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"ParsnipProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ParsnipProjectile::onAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ParsnipProjectile::onAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"use_action");
  if (bVar1) {
    (**(code **)(*(long *)param_1 + 0x1e8))(param_1);
  }
  return;
}


/* ParsnipProjectile::onUpdate(float) */

void ParsnipProjectile::onUpdate(float param_1)

{
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  SexyVector3 *pSVar2;
  long extraout_x0;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(in_x0 + 0x1a8);
  fVar3 = (float)PVZ_T();
  if (fVar4 <= fVar3) {
    (**(code **)(*(long *)in_x0 + 0x1e0))();
    Projectile::GetProps((Projectile *)in_x0);
    nop();
    fVar4 = *(float *)(extraout_x0 + 0x1e0);
    fVar3 = (float)PVZ_T();
    *(float *)(in_x0 + 0x1a8) = fVar3 + 1.0 / fVar4;
  }
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(in_x0);
  cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),pSVar2);
  if (cVar1 != '\0') {
    Board::DoEntityLandedEffects(*(Board **)(gLawnApp + 0x9f0),pSVar2,(BoardEntity *)0x0);
    (**(code **)(*(long *)in_x0 + 0x48))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParsnipProjectile::onProjectileInitialized() */

void __thiscall ParsnipProjectile::onProjectileInitialized(ParsnipProjectile *this)

{
  TimeChallengeEndLevelUI *this_00;
  undefined4 uVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DailySignActivityWidget::setIsCanAwardToday((DailySignActivityWidget *)this,true);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1b0) = 0xffffffff;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  *(undefined4 *)(this + 0x1b4) = 0x3f800000;
  this_00 = (TimeChallengeEndLevelUI *)Projectile::GetAnimRig((Projectile *)this);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<ParsnipProjectile,void(ParsnipProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aCStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParsnipProjectile::chomp() */

void __thiscall ParsnipProjectile::chomp(ParsnipProjectile *this)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  long extraout_x0;
  undefined8 *puVar4;
  code *pcVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined8 local_98;
  undefined8 local_90 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps((Projectile *)this);
  nop();
  fVar8 = *(float *)(extraout_x0 + 0x1e4);
  fVar7 = (float)Projectile::GetDamageAmount((Projectile *)this);
  if (fVar7 != 0.0) {
    fVar8 = (float)Projectile::GetDamageAmount((Projectile *)this);
  }
  DamageInfo::DamageInfo(aDStack_68);
  (**(code **)(*(long *)this + 0x178))(this,aDStack_68,0);
  local_60 = fVar8 * *(float *)(this + 0x1b4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  pcVar5 = *(code **)(*(long *)this + 0x188);
  Projectile::CalcSweptCollisionRectBoardSpace();
  (*pcVar5)(this,avStack_80,(__normal_iterator *)local_90);
  uVar1 = *(undefined4 *)(this + 0x30);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_90[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_80);
  while (bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)local_90)
        , bVar2) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
    plVar6 = (long *)*puVar4;
    cVar3 = (**(code **)(*plVar6 + 0xb8))(plVar6,uVar1);
    if ((cVar3 != '\0') && (cVar3 = (**(code **)(*plVar6 + 0x168))(plVar6,this), cVar3 == '\0')) {
      (**(code **)(*plVar6 + 0x110))(plVar6,aDStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

