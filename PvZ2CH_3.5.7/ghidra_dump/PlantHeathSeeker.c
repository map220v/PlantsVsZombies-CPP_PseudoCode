// Class: PlantHeathSeeker


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeathSeeker::StaticClassInit() */

void PlantHeathSeeker::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantHeathSeeker");
    (*pcVar2)(plVar1,asStack_10,FUN_0400ec98,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHeathSeeker::StaticGetClass() */

long * PlantHeathSeeker::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantHeathSeeker",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHeathSeeker::GetClass() const */

long * PlantHeathSeeker::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantHeathSeeker",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHeathSeeker::PlantHeathSeeker() */

void __thiscall PlantHeathSeeker::PlantHeathSeeker(PlantHeathSeeker *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067b4b00;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  this[0x58] = (PlantHeathSeeker)0x0;
  *(undefined4 *)(this + 0x60) = 0;
  this[100] = (PlantHeathSeeker)0x0;
  return;
}


/* PlantHeathSeeker::StaticNew() */

PlantHeathSeeker * PlantHeathSeeker::StaticNew(void)

{
  PlantHeathSeeker *this;
  
  this = ::operator_new(0x68);
  PlantHeathSeeker(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeathSeeker::setState(unsigned int) */

void __thiscall PlantHeathSeeker::setState(PlantHeathSeeker *this,uint param_1)

{
  UIEasyButtonWidget *this_00;
  PlantAnimRig_JackOLantern *extraout_x0;
  PlantAnimRig_JackOLantern *extraout_x0_00;
  PlantAnimRig_CeleryStalker *extraout_x0_01;
  undefined4 uVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  *(uint *)(this_00 + 200) = param_1;
  if (param_1 == 0xb) {
    UIEasyButtonWidget::GetImageNormal(this_00);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    PlantAnimRig_CeleryStalker::LoopAttack
              (extraout_x0_01,
               (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),3,-4,0.0);
    this[0x58] = (PlantHeathSeeker)0x1;
    uVar1 = PVZ_T();
    *(undefined4 *)(this + 0x5c) = uVar1;
  }
  else {
    if (param_1 == 0xc) {
      UIEasyButtonWidget::GetImageNormal(this_00);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_60,asStack_58);
      PlantAnimRig_JackOLantern::PlayAttackEnd(extraout_x0_00,aRStack_50);
    }
    else {
      if (param_1 != 10) goto LAB_0400ddd8;
      UIEasyButtonWidget::GetImageNormal(this_00);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_60,asStack_58);
      PlantAnimRig_JackOLantern::PlayAttackStart(extraout_x0,aRStack_50);
    }
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
LAB_0400ddd8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeathSeeker::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantHeathSeeker::onAnimStoppedCallback(PlantHeathSeeker *this,string *param_1)

{
  long lVar1;
  PlantAnimRig_CeleryStalker *extraout_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_05474374(param_1,"attack_start",0);
  if (lVar1 == -1) {
    lVar1 = FUN_05474374(param_1,"attack_loop",0);
    if (lVar1 == -1) {
      lVar1 = FUN_05474374(param_1,"attack_end",0);
      if (lVar1 != -1) {
        Plant::KillPlant(*(Plant **)(this + 0x10),1,0,0x8000000000);
      }
    }
    else {
      UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_CeleryStalker::LoopAttack(extraout_x0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
  }
  else {
    setState(this,0xb);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeathSeeker::SpawnProjectile(int) */

void __thiscall PlantHeathSeeker::SpawnProjectile(PlantHeathSeeker *this,int param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  Projectile *this_00;
  long extraout_x0;
  DVec3 *this_01;
  ulong uVar6;
  HeathSeekerProjectile *extraout_x0_00;
  HeathSeekerProjectile *extraout_x0_01;
  long lVar7;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar8;
  BoardEntity *pBVar9;
  HeathSeekerProjectile *pHVar10;
  ulong uVar11;
  float fVar12;
  Board *pBVar15;
  undefined4 uVar13;
  undefined4 uVar14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  string asStack_50 [8];
  wstring awStack_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  uVar1 = *(undefined4 *)(*(long *)(this + 0x10) + 0x150);
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 1;
  local_8 = ___stack_chk_guard;
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_50,"HeathSeekerDefaultProjectile");
  Sexy::ToWString(asStack_50);
  Sexy::RtName::RtName((RtName *)&local_40,awStack_48);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_58,uVar4,0xc,(RtName *)&local_40);
  Sexy::RtName::~RtName((RtName *)&local_40);
  FUN_05476c50(awStack_48);
  std::string::~string(asStack_50);
  nop();
  puVar5 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
                    /* WARNING: Load size is inaccurate */
  pBVar15._0_4_ = *puVar5;
  uVar13 = *(undefined4 *)((long)puVar5 + 4);
  uVar14 = *(undefined4 *)(puVar5 + 1);
  uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_58);
  this_00 = (Projectile *)
            Board::AddProjectile
                      (pBVar15._0_4_,uVar4,(RtName *)&local_40,*(undefined8 *)(this + 0x10),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  FUN_0400c5f0((RtName *)&local_40,*(undefined8 *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  Sexy::SexyMath::DegToRad
            ((float)(*(int *)(extraout_x0 + 0x2c4) + param_1 * *(int *)(extraout_x0 + 0x2c8)));
  FUN_0400c5dc(this_00 + 0xc4);
  this_01 = (DVec3 *)Projectile::GetVelocity(this_00);
  fVar12 = (float)DVec3::getLength(this_01);
  Projectile::SetRotatedVelocity(this_00,fVar12);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  local_40 = Sexy::SexyMatrix3::operator*((SexyMatrix3 *)aSStack_30,(SexyVector3 *)this_01);
  local_3c = uVar13;
  local_38 = uVar14;
  Projectile::SetVelocity(this_00,(SexyVector3 *)&local_40);
  Projectile::SetInstigator(this_00,*(BoardEntity **)(this + 0x10));
  iVar3 = FUN_0400c614(*(undefined8 *)(this + 0x10));
  if (iVar3 == 1) {
    iVar3 = *(int *)(extraout_x0 + 0x2d4);
  }
  else if (iVar3 == 2) {
    iVar3 = *(int *)(extraout_x0 + 0x2d8);
  }
  else {
    iVar3 = *(int *)(extraout_x0 + 0x2dc);
  }
  uVar4 = *(undefined8 *)(this + 0x40);
  uVar6 = FUN_0400c628(uVar4,*(undefined8 *)(this + 0x48));
  if ((uVar6 == 0) || (uVar11 = (ulong)*(int *)(this + 0x60), uVar6 <= uVar11)) {
    nop();
    uVar4 = *(undefined8 *)(this + 0x28);
    uVar6 = FUN_0400c628(uVar4,*(undefined8 *)(this + 0x30));
    pBVar9 = (BoardEntity *)0x0;
    pHVar10 = extraout_x0_00;
    if (uVar6 != 0) {
      uVar11 = 0;
      if (uVar6 != 0) {
        uVar11 = (ulong)(long)*(int *)(this + 0x60) / uVar6;
      }
      pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)
               FUN_0400c634(uVar4,(long)*(int *)(this + 0x60) - uVar11 * uVar6);
      pBVar9 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
    }
  }
  else {
    nop();
    lVar7 = FUN_0400c628(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
    pHVar10 = extraout_x0_01;
    if (lVar7 == 0) {
      pBVar9 = (BoardEntity *)0x0;
    }
    else {
      uVar2 = 0;
      if (uVar6 != 0) {
        uVar2 = uVar11 / uVar6;
      }
      pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0400c634(uVar4,uVar11 - uVar2 * uVar6);
      pBVar9 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
    }
  }
  HeathSeekerProjectile::InitializeHeathSeeker
            (pHVar10,pBVar9,*(int *)(extraout_x0 + 0x2cc),*(int *)(extraout_x0 + 0x2d0),iVar3);
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = uVar1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeathSeeker::UpdateActions() */

void __thiscall PlantHeathSeeker::UpdateActions(PlantHeathSeeker *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long extraout_x0;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar2 != '\0') {
    FUN_0400c5f0(aRStack_10,*(undefined8 *)(this + 0x10));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    iVar3 = FUN_0400c614(*(undefined8 *)(this + 0x10));
    if (iVar3 == 1) {
      iVar3 = *(int *)(extraout_x0 + 0x2b8);
    }
    else if (iVar3 == 2) {
      iVar3 = *(int *)(extraout_x0 + 700);
    }
    else {
      iVar3 = *(int *)(extraout_x0 + 0x2c0);
    }
    iVar1 = iVar3 << 1;
    if (this[100] == (PlantHeathSeeker)0x0) {
      iVar1 = iVar3;
    }
    if (((this[0x58] != (PlantHeathSeeker)0x0) &&
        (fVar4 = (float)PVZ_T(), *(float *)(this + 0x5c) <= fVar4)) &&
       (*(int *)(this + 0x60) < iVar1)) {
      fVar4 = (float)PVZ_T();
      *(float *)(this + 0x5c) = fVar4 + *(float *)(extraout_x0 + 0x2e0);
      SpawnProjectile(this,*(int *)(this + 0x60));
      iVar3 = *(int *)(this + 0x60);
      *(int *)(this + 0x60) = iVar3 + 1;
      if (iVar1 == iVar3 + 1) {
        setState(this,0xc);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHeathSeeker::~PlantHeathSeeker() */

void __thiscall PlantHeathSeeker::~PlantHeathSeeker(PlantHeathSeeker *this)

{
  *(undefined ***)this = &PTR_GetClass_067b4b00;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x40));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantHeathSeeker::~PlantHeathSeeker() */

void __thiscall PlantHeathSeeker::~PlantHeathSeeker(PlantHeathSeeker *this)

{
  ~PlantHeathSeeker(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeathSeeker::Initialize() */

void __thiscall PlantHeathSeeker::Initialize(PlantHeathSeeker *this)

{
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *this_00;
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  RtWeakPtr *pRVar6;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  RtObject *this_02;
  Zombie *pZVar7;
  char *__s;
  code *pcVar8;
  long lVar9;
  RealObject *pRVar10;
  float fVar11;
  float fVar12;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    this_00 = (vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              (this + 0x28);
    fVar11 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    fVar12 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
    pcVar8 = *(code **)(*(long *)this + 200);
    this[100] = (PlantHeathSeeker)(fVar11 < fVar12);
    (*pcVar8)(avStack_20,this,0,0x800);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    operator=(this_00,(vector *)avStack_20);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              (avStack_20);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)this_00);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this_00);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<GridItemVase>*,std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>>>
              (uVar4,uVar5);
    setState(this,10);
    pRVar10 = *(RealObject **)(this + 0x10);
    std::string::string((string *)avStack_20,"sound003");
    RealObject::PlayPositionalSound(pRVar10,(string *)avStack_20,0.0);
    std::string::~string((string *)avStack_20);
    nop();
    uVar2 = PlantFramework::Rand((PlantFramework *)this,2);
    pRVar10 = *(RealObject **)(this + 0x10);
    if ((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f) == 1) {
      __s = "sound001";
    }
    else {
      __s = "sound004";
    }
    std::string::string((string *)avStack_20,__s);
    RealObject::PlayPositionalSound(pRVar10,(string *)avStack_20,0.0);
    std::string::~string((string *)avStack_20);
    nop();
    uVar4 = *(undefined8 *)(this + 0x28);
    iVar3 = FUN_0400c628(uVar4,*(undefined8 *)(this + 0x30));
    if (0 < iVar3) {
      lVar9 = 0;
      while( true ) {
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0400c634(uVar4,lVar9);
        this_02 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        if (((this_02 != (RtObject *)0x0) &&
            (pZVar7 = Sexy::RtObject::Cast<Zombie>(this_02), pZVar7 != (Zombie *)0x0)) &&
           ((cVar1 = Zombie::HasCondition(pZVar7,0x6a), cVar1 != '\0' ||
            ((cVar1 = Zombie::HasCondition(pZVar7,0x6b), cVar1 != '\0' ||
             (cVar1 = Zombie::HasCondition(pZVar7,0x6c), cVar1 != '\0')))))) {
          pRVar6 = (RtWeakPtr *)FUN_0400c634(*(undefined8 *)(this + 0x28),lVar9);
          std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                     *)(this + 0x40),pRVar6);
        }
        lVar9 = lVar9 + 1;
        if (iVar3 <= (int)lVar9) break;
        uVar4 = *(undefined8 *)(this + 0x28);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

