// Class: ArtifactGashaponGuacodileProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponGuacodileProjectile::StaticClassInit() */

void ArtifactGashaponGuacodileProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactGashaponGuacodileProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_037c909c,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGashaponGuacodileProjectile::StaticGetClass() */

long * ArtifactGashaponGuacodileProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactGashaponGuacodileProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactGashaponGuacodileProjectile::GetClass() const */

long * ArtifactGashaponGuacodileProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactGashaponGuacodileProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactGashaponGuacodileProjectile::onAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ArtifactGashaponGuacodileProjectile::onAnimCommand
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
/* ArtifactGashaponGuacodileProjectile::onPostLoad() */

void __thiscall
ArtifactGashaponGuacodileProjectile::onPostLoad(ArtifactGashaponGuacodileProjectile *this)

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
  Delegate4<ArtifactGashaponGuacodileProjectile,void(ArtifactGashaponGuacodileProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aCStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGashaponGuacodileProjectile::ArtifactGashaponGuacodileProjectile() */

void __thiscall
ArtifactGashaponGuacodileProjectile::ArtifactGashaponGuacodileProjectile
          (ArtifactGashaponGuacodileProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06699950;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactGashaponGuacodileProjectile_06699b40;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c0));
  return;
}


/* ArtifactGashaponGuacodileProjectile::StaticNew() */

ArtifactGashaponGuacodileProjectile * ArtifactGashaponGuacodileProjectile::StaticNew(void)

{
  ArtifactGashaponGuacodileProjectile *this;
  
  this = ::operator_new(0x1d8);
  ArtifactGashaponGuacodileProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponGuacodileProjectile::chomp(BoardEntity*) */

void __thiscall
ArtifactGashaponGuacodileProjectile::chomp
          (ArtifactGashaponGuacodileProjectile *this,BoardEntity *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long extraout_x0;
  undefined8 local_70;
  DamageInfo aDStack_68 [8];
  float local_60;
  undefined8 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps((Projectile *)this);
  nop();
  fVar1 = *(float *)(extraout_x0 + 0x1e4);
  DamageInfo::DamageInfo(aDStack_68);
  (**(code **)(*(long *)this + 0x178))(this,aDStack_68,0);
  local_60 = fVar1;
  if (*(float *)(this + 0x1b8) != 0.0) {
    local_60 = *(float *)(this + 0x1b8);
  }
  cVar2 = (**(code **)(*(long *)param_1 + 0xb8))(param_1,*(undefined4 *)(this + 0x30));
  if (cVar2 != '\0') {
    iVar3 = BoardEntity::CalcColumnPosition(param_1);
    iVar4 = FUN_037c0e2c(*(undefined4 *)(this + 0xa8));
    Sexy::Point::Point((Point *)&local_70,iVar3,iVar4);
    local_50 = local_70;
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
/* ArtifactGashaponGuacodileProjectile::onProjectileInitialized() */

void __thiscall
ArtifactGashaponGuacodileProjectile::onProjectileInitialized
          (ArtifactGashaponGuacodileProjectile *this)

{
  TimeChallengeEndLevelUI *this_00;
  undefined4 uVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DailySignActivityWidget::setIsCanAwardToday((DailySignActivityWidget *)this,true);
  uVar1 = PVZ_T();
  this[0x1b4] = (ArtifactGashaponGuacodileProjectile)0x0;
  *(undefined4 *)(this + 0x1ac) = 1;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  *(undefined4 *)(this + 0x1b0) = 0xffffffff;
  this[0x1b5] = (ArtifactGashaponGuacodileProjectile)0x0;
  *(undefined4 *)(this + 0x1b8) = 0;
  this_00 = (TimeChallengeEndLevelUI *)Projectile::GetAnimRig((Projectile *)this);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<ArtifactGashaponGuacodileProjectile,void(ArtifactGashaponGuacodileProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
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
/* ArtifactGashaponGuacodileProjectile::onUpdate(float) */

void ArtifactGashaponGuacodileProjectile::onUpdate(float param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  Projectile *in_x0;
  PopAnimRig *pPVar4;
  SexyVector3 *pSVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  code *pcVar9;
  float fVar10;
  int local_60;
  undefined8 local_50;
  undefined8 local_48;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar4 = (PopAnimRig *)Projectile::GetAnimRig(in_x0);
  if (*(int *)(in_x0 + 0x1ac) == 0) {
    cVar1 = PopAnimRig::IsAnimFinished(pPVar4,*(undefined4 *)(in_x0 + 0x1b0));
    if (cVar1 != '\0') {
      std::string::string((string *)&local_50,"special2_projectile");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      uVar3 = PopAnimRig::PlayAndContinue(pPVar4,(string *)&local_50,0,aDStack_38);
      *(undefined4 *)(in_x0 + 0x1b0) = uVar3;
      std::string::~string((string *)&local_50);
      nop();
      *(undefined4 *)(in_x0 + 0x1ac) = 1;
    }
  }
  pSVar5 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)in_x0);
  cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),pSVar5);
  if (cVar1 != '\0') {
    Board::DoEntityLandedEffects(*(Board **)(gLawnApp + 0x9f0),pSVar5,(BoardEntity *)0x0);
    (**(code **)(*(long *)in_x0 + 0x48))();
  }
  fVar10 = *(float *)pSVar5;
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  if ((float)(iVar2 * 9 + 200) < fVar10) {
    (**(code **)(*(long *)in_x0 + 0x48))();
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  pcVar9 = *(code **)(*(long *)in_x0 + 0x188);
  Projectile::CalcSweptCollisionRectBoardSpace();
  (*pcVar9)();
  lVar6 = FUN_037c0ebc(local_50,local_48);
  if (lVar6 == 0) {
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               (in_x0 + 0x1c0));
  }
  if (((in_x0[0x1b4] == (Projectile)0x0) && (in_x0[0x1b5] != (Projectile)0x0)) &&
     (Projectile::CalcSweptCollisionRectBoardSpace(), 800 < local_60)) {
    in_x0[0x1b4] = (Projectile)0x1;
    pfVar7 = (float *)Projectile::GetVelocityScale(in_x0);
    pfVar8 = (float *)Projectile::GetVelocity(in_x0);
    if (0.0 < *pfVar8) {
      Projectile::SetVelocityScale(in_x0,-*pfVar7,pfVar7[1],pfVar7[2]);
      lVar6 = Projectile::GetAnimRig(in_x0);
      if (lVar6 != 0) {
        FUN_037c1334(in_x0 + 0xd4);
      }
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGashaponGuacodileProjectile::~ArtifactGashaponGuacodileProjectile() */

void __thiscall
ArtifactGashaponGuacodileProjectile::~ArtifactGashaponGuacodileProjectile
          (ArtifactGashaponGuacodileProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06699950;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactGashaponGuacodileProjectile_06699b40;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1c0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ArtifactGashaponGuacodileProjectile::~ArtifactGashaponGuacodileProjectile()
    */

void __thiscall
ArtifactGashaponGuacodileProjectile::~ArtifactGashaponGuacodileProjectile
          (ArtifactGashaponGuacodileProjectile *this)

{
  ~ArtifactGashaponGuacodileProjectile(this + -0x10);
  return;
}


/* ArtifactGashaponGuacodileProjectile::~ArtifactGashaponGuacodileProjectile() */

void __thiscall
ArtifactGashaponGuacodileProjectile::~ArtifactGashaponGuacodileProjectile
          (ArtifactGashaponGuacodileProjectile *this)

{
  ~ArtifactGashaponGuacodileProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArtifactGashaponGuacodileProjectile::~ArtifactGashaponGuacodileProjectile()
    */

void __thiscall
ArtifactGashaponGuacodileProjectile::~ArtifactGashaponGuacodileProjectile
          (ArtifactGashaponGuacodileProjectile *this)

{
  ~ArtifactGashaponGuacodileProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponGuacodileProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
ArtifactGashaponGuacodileProjectile::OnCollideEntity
          (ArtifactGashaponGuacodileProjectile *this,BoardEntity *param_1)

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
      chomp(this,param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}

