// Class: ArtifactGashaponParsnipProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponParsnipProjectile::StaticClassInit() */

void ArtifactGashaponParsnipProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactGashaponParsnipProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_037c94a8,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGashaponParsnipProjectile::StaticGetClass() */

long * ArtifactGashaponParsnipProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactGashaponParsnipProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactGashaponParsnipProjectile::GetClass() const */

long * ArtifactGashaponParsnipProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactGashaponParsnipProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactGashaponParsnipProjectile::onAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ArtifactGashaponParsnipProjectile::onAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"use_action");
  if (bVar1) {
    (**(code **)(*(long *)param_1 + 0x1e8))(param_1);
  }
  return;
}


/* ArtifactGashaponParsnipProjectile::ArtifactGashaponParsnipProjectile() */

void __thiscall
ArtifactGashaponParsnipProjectile::ArtifactGashaponParsnipProjectile
          (ArtifactGashaponParsnipProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06699c00;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactGashaponParsnipProjectile_06699e00;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c0));
  return;
}


/* ArtifactGashaponParsnipProjectile::StaticNew() */

ArtifactGashaponParsnipProjectile * ArtifactGashaponParsnipProjectile::StaticNew(void)

{
  ArtifactGashaponParsnipProjectile *this;
  
  this = ::operator_new(0x1d8);
  ArtifactGashaponParsnipProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponParsnipProjectile::chomp(BoardEntity*) */

void __thiscall
ArtifactGashaponParsnipProjectile::chomp
          (ArtifactGashaponParsnipProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  long extraout_x0;
  float fVar2;
  float fVar3;
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps((Projectile *)this);
  nop();
  fVar3 = *(float *)(extraout_x0 + 0x1e4);
  fVar2 = (float)Projectile::GetDamageAmount((Projectile *)this);
  if (fVar2 != 0.0) {
    fVar3 = (float)Projectile::GetDamageAmount((Projectile *)this);
  }
  DamageInfo::DamageInfo(aDStack_68);
  (**(code **)(*(long *)this + 0x178))(this,aDStack_68,0);
  local_60 = fVar3 * *(float *)(this + 0x1b4);
  if (*(float *)(this + 0x1b8) != 0.0) {
    local_60 = *(float *)(this + 0x1b8);
  }
  cVar1 = (**(code **)(*(long *)param_1 + 0xb8))(param_1,*(undefined4 *)(this + 0x30));
  if (cVar1 != '\0') {
    (**(code **)(*(long *)param_1 + 0x110))(param_1,aDStack_68);
  }
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponParsnipProjectile::onProjectileInitialized() */

void __thiscall
ArtifactGashaponParsnipProjectile::onProjectileInitialized(ArtifactGashaponParsnipProjectile *this)

{
  TimeChallengeEndLevelUI *this_00;
  undefined4 uVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DailySignActivityWidget::setIsCanAwardToday((DailySignActivityWidget *)this,true);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  *(undefined4 *)(this + 0x1b0) = 0xffffffff;
  *(undefined4 *)(this + 0x1b4) = 0x3f800000;
  *(undefined4 *)(this + 0x1b8) = 0;
  this_00 = (TimeChallengeEndLevelUI *)Projectile::GetAnimRig((Projectile *)this);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<ArtifactGashaponParsnipProjectile,void(ArtifactGashaponParsnipProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aCStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1c0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponParsnipProjectile::onUpdate(float) */

void ArtifactGashaponParsnipProjectile::onUpdate(float param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  SexyVector3 *pSVar3;
  long lVar4;
  code *pcVar5;
  float fVar6;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar3 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(in_x0);
  cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),pSVar3);
  if (cVar1 != '\0') {
    Board::DoEntityLandedEffects(*(Board **)(gLawnApp + 0x9f0),pSVar3,(BoardEntity *)0x0);
    (**(code **)(*(long *)in_x0 + 0x48))();
  }
  fVar6 = *(float *)pSVar3;
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  if ((float)(iVar2 * 9 + 200) < fVar6) {
    (**(code **)(*(long *)in_x0 + 0x48))();
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  pcVar5 = *(code **)(*(long *)in_x0 + 0x188);
  Projectile::CalcSweptCollisionRectBoardSpace();
  (*pcVar5)();
  lVar4 = FUN_037c0ebc(local_20,local_18);
  if (lVar4 == 0) {
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               (in_x0 + 0x1c0));
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGashaponParsnipProjectile::~ArtifactGashaponParsnipProjectile() */

void __thiscall
ArtifactGashaponParsnipProjectile::~ArtifactGashaponParsnipProjectile
          (ArtifactGashaponParsnipProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06699c00;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactGashaponParsnipProjectile_06699e00;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1c0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ArtifactGashaponParsnipProjectile::~ArtifactGashaponParsnipProjectile() */

void __thiscall
ArtifactGashaponParsnipProjectile::~ArtifactGashaponParsnipProjectile
          (ArtifactGashaponParsnipProjectile *this)

{
  ~ArtifactGashaponParsnipProjectile(this + -0x10);
  return;
}


/* ArtifactGashaponParsnipProjectile::~ArtifactGashaponParsnipProjectile() */

void __thiscall
ArtifactGashaponParsnipProjectile::~ArtifactGashaponParsnipProjectile
          (ArtifactGashaponParsnipProjectile *this)

{
  ~ArtifactGashaponParsnipProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArtifactGashaponParsnipProjectile::~ArtifactGashaponParsnipProjectile() */

void __thiscall
ArtifactGashaponParsnipProjectile::~ArtifactGashaponParsnipProjectile
          (ArtifactGashaponParsnipProjectile *this)

{
  ~ArtifactGashaponParsnipProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponParsnipProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
ArtifactGashaponParsnipProjectile::OnCollideEntity
          (ArtifactGashaponParsnipProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x1c0);
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    ToolPacketData::GetProps();
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                         (uVar2,uVar3,aRStack_20);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    if (bVar1) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )this_00,(RtWeakPtr *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      (**(code **)(*(long *)this + 0x1e0))(this,param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}

