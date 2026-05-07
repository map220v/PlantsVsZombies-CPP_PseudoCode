// Class: PlantBoophoneGeisha


/* PlantBoophoneGeisha::Initialize() */

void __thiscall PlantBoophoneGeisha::Initialize(PlantBoophoneGeisha *this)

{
  *(undefined4 *)(this + 0x28) = 0;
  this[0x2c] = (PlantBoophoneGeisha)0x0;
  PlantFramework::Initialize((PlantFramework *)this);
  return;
}


/* PlantBoophoneGeisha::FindTargetAndFire(PlantWeapon) */

undefined8 PlantBoophoneGeisha::FindTargetAndFire(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x2c) != '\0') {
    return 0;
  }
  uVar1 = PlantFramework::FindTargetAndFire();
  return uVar1;
}


/* PlantBoophoneGeisha::ApplyPlantfood() */

void __thiscall PlantBoophoneGeisha::ApplyPlantfood(PlantBoophoneGeisha *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  FUN_03c2d1d4(this + 0x2c,1);
  return;
}


/* PlantBoophoneGeisha::CancelPlantfood() */

void __thiscall PlantBoophoneGeisha::CancelPlantfood(PlantBoophoneGeisha *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  FUN_03c2d1d4(this + 0x2c,0);
  return;
}


/* PlantBoophoneGeisha::PlantBoophoneGeisha() */

void __thiscall PlantBoophoneGeisha::PlantBoophoneGeisha(PlantBoophoneGeisha *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0674c3a0;
  return;
}


/* PlantBoophoneGeisha::StaticNew() */

PlantBoophoneGeisha * PlantBoophoneGeisha::StaticNew(void)

{
  PlantBoophoneGeisha *this;
  
  this = ::operator_new(0x30);
  PlantBoophoneGeisha(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBoophoneGeisha::StaticClassInit() */

void PlantBoophoneGeisha::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantBoophoneGeisha");
    (*pcVar2)(plVar1,asStack_10,FUN_03c2e930,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBoophoneGeisha::StaticGetClass() */

long * PlantBoophoneGeisha::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantBoophoneGeisha",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBoophoneGeisha::GetClass() const */

long * PlantBoophoneGeisha::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantBoophoneGeisha",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBoophoneGeisha::~PlantBoophoneGeisha() */

void __thiscall PlantBoophoneGeisha::~PlantBoophoneGeisha(PlantBoophoneGeisha *this)

{
  *(undefined ***)this = &PTR_GetClass_0674c3a0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantBoophoneGeisha::~PlantBoophoneGeisha() */

void __thiscall PlantBoophoneGeisha::~PlantBoophoneGeisha(PlantBoophoneGeisha *this)

{
  ~PlantBoophoneGeisha(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBoophoneGeisha::PlayAttackAnimation() */

void __thiscall PlantBoophoneGeisha::PlayAttackAnimation(PlantBoophoneGeisha *this)

{
  UIEasyButtonWidget *this_00;
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03c2d1d4(this + 0x2c,1);
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  if (*(int *)(this_00 + 0x150) == 2) {
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    std::string::string(asStack_58,"attack5");
  }
  else {
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    std::string::string(asStack_58,"attack");
  }
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x398);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantBoophoneGeisha,void(PlantBoophoneGeisha::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBoophoneGeisha::PlayProjectileBack() */

void __thiscall PlantBoophoneGeisha::PlayProjectileBack(PlantBoophoneGeisha *this)

{
  char cVar1;
  PopAnimRig *pPVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_58,"attack3");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x398);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PlantBoophoneGeisha,void(PlantBoophoneGeisha::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBoophoneGeisha::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantBoophoneGeisha::Fire
          (undefined1 param_1 [16],float param_2,float param_3,PlantBoophoneGeisha *this)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  PlantAction *pPVar4;
  float *pfVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  RealObject *this_01;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  float local_90;
  float local_8c;
  float local_88;
  string asStack_80 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [112];
  long local_8;
  
  lVar6 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar6 + 0x150) = 0;
  local_8 = ___stack_chk_guard;
  lVar6 = FUN_03c2f560(lVar6);
  fVar13 = *(float *)(lVar6 + 700);
  FUN_03c2f560(*(undefined8 *)(this + 0x10));
  lVar6 = FUN_03c2f560(*(undefined8 *)(this + 0x10));
  fVar12 = *(float *)(lVar6 + 0x2c0);
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar6 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar6 == 0)) {
    fVar12 = 1.0;
    fVar13 = 1.0;
  }
  this_01 = *(RealObject **)(this + 0x10);
  iVar3 = FUN_03c2d19c(*(undefined4 *)(this_01 + 0x50));
  if (iVar3 == 2) {
    param_2 = 1.0;
    fVar12 = (float)RandRangeFloat(0.0,1.0);
    this_01 = *(RealObject **)(this + 0x10);
    bVar9 = fVar12 < fVar13;
  }
  else {
    bVar9 = false;
    if (2 < iVar3) {
      cVar2 = FUN_03c2d1a4(this_01);
      if (cVar2 == '\0') {
        param_2 = 1.0;
        fVar13 = (float)RandRangeFloat(0.0,1.0);
        this_01 = *(RealObject **)(this + 0x10);
        bVar9 = fVar13 < fVar12;
      }
      else {
        bVar9 = true;
        *(undefined4 *)(this_01 + 0x150) = 1;
      }
    }
  }
  std::string::string(asStack_80,"Play_Plant_Bloomerange_Attack");
  RealObject::PlayPositionalSound(this_01,asStack_80,0.0);
  std::string::~string(asStack_80);
  nop();
  lVar6 = FUN_03c2f560(*(undefined8 *)(this + 0x10));
  pPVar4 = (PlantAction *)
           FUN_03c2d254(*(undefined8 *)(lVar6 + 0x70),(long)*(int *)(*(long *)(this + 0x10) + 0x150)
                       );
  PlantAction::PlantAction((PlantAction *)asStack_80,pPVar4);
  fVar12 = (float)(**(code **)(*(long *)this + 0x110))
                            (*(undefined4 *)(*(long *)(this + 0x10) + 0xc4),this,asStack_80);
  local_90 = fVar12;
  local_8c = param_2;
  local_88 = param_3;
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar13 = *pfVar5;
  fVar10 = pfVar5[1];
  fVar11 = pfVar5[2];
  uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,(RtWeakPtrBase *)aRStack_78);
  uVar7 = *(undefined8 *)(this + 0x10);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
  uVar7 = Board::AddProjectile
                    ((Board *)(fVar12 + fVar13),param_2 + fVar10,param_3 + fVar11,uVar8,aRStack_98,
                     uVar7,*(undefined4 *)(lVar6 + 0x68));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  *(undefined4 *)(this_00 + 0x1a8) = 0;
  lVar6 = FUN_03c2f560(*(undefined8 *)(this + 0x10));
  uVar1 = *(uint *)(this + 0x28);
  *(undefined4 *)(this_00 + 0x1ac) = *(undefined4 *)(lVar6 + 0x2b8);
  uVar8 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(this_00);
  GeishaProjectile::InitTrajectory((GeishaProjectile *)this_00,(uVar1 & 1) << 1,uVar8);
  FUN_03c2d1c4(this_00 + 0x1f0,bVar9);
  *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
  PlantAction::~PlantAction((PlantAction *)asStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBoophoneGeisha::DoSpecial(int) */

void PlantBoophoneGeisha::DoSpecial(int param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  PlantAction *pPVar4;
  float *pfVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  SexyVector3 *pSVar6;
  long lVar7;
  undefined8 uVar8;
  RealObject *this_00;
  float fVar9;
  float fVar10;
  float in_s1;
  float fVar11;
  float in_s2;
  float fVar12;
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  float local_90;
  string asStack_80 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [112];
  long local_8;
  
  plVar2 = (long *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  Plant::GetAvatarEnable((Plant *)plVar2[2]);
  this_00 = (RealObject *)plVar2[2];
  *(undefined4 *)(this_00 + 0x150) = 2;
  std::string::string(asStack_80,"Play_Plant_Bloomerange_Attack");
  RealObject::PlayPositionalSound(this_00,asStack_80,0.0);
  std::string::~string(asStack_80);
  nop();
  lVar3 = FUN_03c2f560(plVar2[2]);
  pPVar4 = (PlantAction *)
           FUN_03c2d254(*(undefined8 *)(lVar3 + 0x70),(long)*(int *)(plVar2[2] + 0x150));
  PlantAction::PlantAction((PlantAction *)asStack_80,pPVar4);
  fVar9 = (float)(**(code **)(*plVar2 + 0x110))(*(undefined4 *)(plVar2[2] + 0xc4),plVar2,asStack_80)
  ;
  local_90 = fVar9;
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)plVar2[2]);
  fVar10 = *pfVar5;
  fVar11 = pfVar5[1];
  fVar12 = pfVar5[2];
  uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,(RtWeakPtrBase *)aRStack_78);
  lVar7 = plVar2[2];
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
  Board::AddProjectile
            ((Board *)(fVar9 + fVar10),in_s1 + fVar11,in_s2 + fVar12,uVar8,aRStack_98,lVar7,
             *(undefined4 *)(lVar3 + 0x68));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  pSVar6 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this);
  BashoPultProjectile::SetReturnPosition((BashoPultProjectile *)this,pSVar6);
  uVar1 = Plant::GetAvatarEnable((Plant *)plVar2[2]);
  FUN_03c2d1cc(this + 0x1b4,uVar1);
  PlantAction::~PlantAction((PlantAction *)asStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBoophoneGeisha::onAnimStoppedCallback(std::string const&) */

void __thiscall
PlantBoophoneGeisha::onAnimStoppedCallback(PlantBoophoneGeisha *this,string *param_1)

{
  PlantBoophoneGeisha PVar1;
  bool bVar2;
  string *psVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = asStack_10;
  std::string::string(asStack_18,"idle");
  nop();
  Set8BytesTo0(asStack_10);
  bVar2 = std::operator==(param_1,"attack");
  if (bVar2) {
    std::string::append(asStack_10,"attack2",(size_t)psVar3);
  }
  else {
    bVar2 = std::operator==(param_1,"attack5");
    if ((bVar2) || (bVar2 = std::operator==(param_1,"attack5_3"), bVar2)) {
      std::string::append(asStack_10,"attack5_2",(size_t)psVar3);
      PVar1 = this[0x2c];
      goto joined_r0x03c2fbfc;
    }
  }
  PVar1 = this[0x2c];
joined_r0x03c2fbfc:
  if (PVar1 == (PlantBoophoneGeisha)0x0) {
    psVar3 = (string *)FUN_03c2faec(*(undefined8 *)(this + 0x10));
    PlantAnimRig_HoyaCordata::setIdleTag(psVar3);
  }
  else {
    psVar3 = (string *)FUN_03c2faec(*(undefined8 *)(this + 0x10));
    PlantAnimRig_HoyaCordata::setIdleTag(psVar3);
  }
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

