// Class: GuacodileProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuacodileProjectile::SetJumpState() */

void __thiscall GuacodileProjectile::SetJumpState(GuacodileProjectile *this)

{
  undefined4 uVar1;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x1ac) = 0;
  local_8 = ___stack_chk_guard;
  pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_40,"special2");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar1 = PopAnimRig::PlayAndStop(pPVar2,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x1b0) = uVar1;
  std::string::~string(asStack_40);
  nop();
  Projectile::SetVelocity((Projectile *)this,0.0,0.0,0.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GuacodileProjectile::~GuacodileProjectile() */

void __thiscall GuacodileProjectile::~GuacodileProjectile(GuacodileProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_068066c0;
  *(undefined ***)(this + 0x10) = &PTR__GuacodileProjectile_068068b0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to GuacodileProjectile::~GuacodileProjectile() */

void __thiscall GuacodileProjectile::~GuacodileProjectile(GuacodileProjectile *this)

{
  ~GuacodileProjectile(this + -0x10);
  return;
}


/* GuacodileProjectile::~GuacodileProjectile() */

void __thiscall GuacodileProjectile::~GuacodileProjectile(GuacodileProjectile *this)

{
  ~GuacodileProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GuacodileProjectile::~GuacodileProjectile() */

void __thiscall GuacodileProjectile::~GuacodileProjectile(GuacodileProjectile *this)

{
  ~GuacodileProjectile(this + -0x10);
  return;
}


/* GuacodileProjectile::GuacodileProjectile() */

void __thiscall GuacodileProjectile::GuacodileProjectile(GuacodileProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_068066c0;
  *(undefined ***)(this + 0x10) = &PTR__GuacodileProjectile_068068b0;
  return;
}


/* GuacodileProjectile::StaticNew() */

GuacodileProjectile * GuacodileProjectile::StaticNew(void)

{
  GuacodileProjectile *this;
  
  this = ::operator_new(0x1b8);
  GuacodileProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuacodileProjectile::StaticClassInit() */

void GuacodileProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GuacodileProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_041f478c,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GuacodileProjectile::StaticGetClass() */

long * GuacodileProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GuacodileProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GuacodileProjectile::GetClass() const */

long * GuacodileProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"GuacodileProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GuacodileProjectile::onAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void GuacodileProjectile::onAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"start_motion");
  if (!bVar1) {
    return;
  }
  ProjectileHelpers::RandomizeVelocities((Projectile *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuacodileProjectile::onProjectileInitialized() */

void __thiscall GuacodileProjectile::onProjectileInitialized(GuacodileProjectile *this)

{
  TimeChallengeEndLevelUI *this_00;
  undefined4 uVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DailySignActivityWidget::setIsCanAwardToday((DailySignActivityWidget *)this,true);
  uVar1 = PVZ_T();
  this[0x1b4] = (GuacodileProjectile)0x0;
  *(undefined4 *)(this + 0x1ac) = 1;
  this[0x1b5] = (GuacodileProjectile)0x0;
  *(undefined4 *)(this + 0x1b0) = 0xffffffff;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  this_00 = (TimeChallengeEndLevelUI *)Projectile::GetAnimRig((Projectile *)this);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<GuacodileProjectile,void(GuacodileProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aCStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuacodileProjectile::onPostLoad() */

void __thiscall GuacodileProjectile::onPostLoad(GuacodileProjectile *this)

{
  TimeChallengeEndLevelUI *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (TimeChallengeEndLevelUI *)Projectile::GetAnimRig((Projectile *)this);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<GuacodileProjectile,void(GuacodileProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aCStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuacodileProjectile::chomp() */

void __thiscall GuacodileProjectile::chomp(GuacodileProjectile *this)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long extraout_x0;
  undefined8 *puVar6;
  code *pcVar7;
  BoardEntity *this_00;
  float fVar8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [8];
  float local_60;
  undefined8 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps((Projectile *)this);
  nop();
  fVar8 = *(float *)(extraout_x0 + 0x1e4);
  DamageInfo::DamageInfo(aDStack_68);
  (**(code **)(*(long *)this + 0x178))(this,aDStack_68,0);
  local_60 = fVar8;
  iVar4 = FUN_041f4048(*(undefined4 *)(this + 0x70));
  if (iVar4 == 2) {
    local_60 = fVar8 * 1.5;
  }
  else if (2 < iVar4) {
    local_60 = fVar8 + fVar8;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  pcVar7 = *(code **)(*(long *)this + 0x188);
  Projectile::CalcSweptCollisionRectBoardSpace();
  (*pcVar7)(this,avStack_80,(Point *)local_90);
  uVar1 = *(undefined4 *)(this + 0x30);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar2) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    this_00 = (BoardEntity *)*puVar6;
    cVar3 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,uVar1);
    if ((cVar3 != '\0') &&
       (cVar3 = (**(code **)(*(long *)this_00 + 0x168))(this_00,this), cVar3 == '\0')) {
      iVar4 = BoardEntity::CalcColumnPosition(this_00);
      iVar5 = FUN_041f4038(*(undefined4 *)(this + 0xa8));
      Sexy::Point::Point((Point *)local_90,iVar4,iVar5);
      local_50 = local_90[0];
      (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuacodileProjectile::onUpdate(float) */

void GuacodileProjectile::onUpdate(float param_1)

{
  char cVar1;
  undefined4 uVar2;
  Projectile *in_x0;
  PopAnimRig *pPVar3;
  SexyVector3 *pSVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  long extraout_x0;
  float fVar8;
  float fVar9;
  int local_48 [4];
  DummyInit aDStack_38 [48];
  long local_8;
  
  fVar9 = *(float *)(in_x0 + 0x1a8);
  local_8 = ___stack_chk_guard;
  fVar8 = (float)PVZ_T();
  if (fVar9 <= fVar8) {
    chomp((GuacodileProjectile *)in_x0);
    Projectile::GetProps(in_x0);
    nop();
    fVar9 = *(float *)(extraout_x0 + 0x1e0);
    fVar8 = (float)PVZ_T();
    *(float *)(in_x0 + 0x1a8) = fVar8 + 1.0 / fVar9;
  }
  pPVar3 = (PopAnimRig *)Projectile::GetAnimRig(in_x0);
  if ((*(int *)(in_x0 + 0x1ac) == 0) &&
     (cVar1 = PopAnimRig::IsAnimFinished(pPVar3,*(undefined4 *)(in_x0 + 0x1b0)), cVar1 != '\0')) {
    std::string::string((string *)local_48,"special2_projectile");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    uVar2 = PopAnimRig::PlayAndContinue(pPVar3,(string *)local_48,0,aDStack_38);
    *(undefined4 *)(in_x0 + 0x1b0) = uVar2;
    std::string::~string((string *)local_48);
    nop();
    *(undefined4 *)(in_x0 + 0x1ac) = 1;
  }
  pSVar4 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)in_x0);
  cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),pSVar4);
  if (cVar1 != '\0') {
    Board::DoEntityLandedEffects(*(Board **)(gLawnApp + 0x9f0),pSVar4,(BoardEntity *)0x0);
    (**(code **)(*(long *)in_x0 + 0x48))();
  }
  if (((in_x0[0x1b4] == (Projectile)0x0) && (in_x0[0x1b5] != (Projectile)0x0)) &&
     (Projectile::CalcSweptCollisionRectBoardSpace(), 800 < local_48[0])) {
    in_x0[0x1b4] = (Projectile)0x1;
    pfVar5 = (float *)Projectile::GetVelocityScale(in_x0);
    pfVar6 = (float *)Projectile::GetVelocity(in_x0);
    if (0.0 < *pfVar6) {
      Projectile::SetVelocityScale(in_x0,-*pfVar5,pfVar5[1],pfVar5[2]);
      lVar7 = Projectile::GetAnimRig(in_x0);
      if (lVar7 != 0) {
        FUN_041f4078(in_x0 + 0xd4);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

