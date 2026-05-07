// Class: MangosteenElectricCircle


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MangosteenElectricCircle::StaticClassInit() */

void MangosteenElectricCircle::StaticClassInit(void)

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
    std::string::string(asStack_10,"MangosteenElectricCircle");
    (*pcVar2)(plVar1,asStack_10,FUN_03b09e08,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MangosteenElectricCircle::StaticGetClass() */

long * MangosteenElectricCircle::StaticGetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"MangosteenElectricCircle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MangosteenElectricCircle::GetClass() const */

long * MangosteenElectricCircle::GetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"MangosteenElectricCircle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MangosteenElectricCircle::MangosteenElectricCircle() */

void __thiscall MangosteenElectricCircle::MangosteenElectricCircle(MangosteenElectricCircle *this)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  
  lVar1 = ___stack_chk_guard;
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  this[0x109] = (MangosteenElectricCircle)0x0;
  *(undefined ***)this = &PTR_GetClass_0672b170;
  DVec3::DVec3((DVec3 *)(this + 0x10c));
  this[0x118] = (MangosteenElectricCircle)0x0;
  this[0x119] = (MangosteenElectricCircle)0x0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  *(undefined4 *)(this + 0x128) = 0x3e99999a;
  *(undefined4 *)(this + 300) = 0x3fa66666;
  *(float *)(this + 0x124) = (float)iVar2 * 1.5;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x130));
  DamageInfo::DamageInfo((DamageInfo *)(this + 0x148));
  *(undefined4 *)(this + 0x1ac) = 0xb;
  *(undefined4 *)(this + 0x1a8) = 0;
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x1b0) = uVar3;
  Set8BytesTo0(this + 0x1b8);
  std::string::string((string *)(this + 0x1c0),"idle");
  nop();
  *(undefined4 *)(this + 0x1c8) = 0;
  DamageInfo::DamageInfo((DamageInfo *)(this + 0x1d0));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MangosteenElectricCircle::StaticNew() */

MangosteenElectricCircle * MangosteenElectricCircle::StaticNew(void)

{
  MangosteenElectricCircle *this;
  
  this = ::operator_new(0x230);
  MangosteenElectricCircle(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MangosteenElectricCircle::hasDamaged(BoardEntity*) */

void __thiscall
MangosteenElectricCircle::hasDamaged(MangosteenElectricCircle *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  BoardEntity *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  if (param_1 == (BoardEntity *)0x0) {
    bVar1 = true;
  }
  else {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x130);
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,BoardEntity*>
                         (uVar2,uVar3,local_28);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* MangosteenElectricCircle::~MangosteenElectricCircle() */

void __thiscall MangosteenElectricCircle::~MangosteenElectricCircle(MangosteenElectricCircle *this)

{
  *(undefined ***)this = &PTR_GetClass_0672b170;
  DamageInfo::~DamageInfo((DamageInfo *)(this + 0x1d0));
  std::string::~string((string *)(this + 0x1c0));
  std::string::~string((string *)(this + 0x1b8));
  DamageInfo::~DamageInfo((DamageInfo *)(this + 0x148));
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x130));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* MangosteenElectricCircle::~MangosteenElectricCircle() */

void __thiscall MangosteenElectricCircle::~MangosteenElectricCircle(MangosteenElectricCircle *this)

{
  ~MangosteenElectricCircle(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MangosteenElectricCircle::setValues(ElectricCircleDescription) */

void __thiscall MangosteenElectricCircle::setValues(MangosteenElectricCircle *this,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  PopAnim *pPVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x109] = *(MangosteenElectricCircle *)(param_2 + 0x110);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x10c),(SexyVector3 *)(param_2 + 0xf8));
  fVar4 = *(float *)(param_2 + 0xc);
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(this + 0x120) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(this + 0x124) = uVar1;
  if (fVar4 == 0.0) {
    fVar4 = *(float *)(this + 0x128);
  }
  *(float *)(this + 0x128) = fVar4;
  DamageInfo::operator=((DamageInfo *)(this + 0x148),(DamageInfo *)(param_2 + 0x18));
  uVar1 = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(this + 0x1ac) = *(undefined4 *)(param_2 + 0x108);
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  thunk_FUN_05475e00(this + 0x1b8,param_2 + 0xe8);
  thunk_FUN_05475e00(this + 0x1c0,param_2 + 0xf0);
  *(undefined4 *)(this + 0x1c8) = *(undefined4 *)(param_2 + 0x10c);
  DamageInfo::operator=((DamageInfo *)(this + 0x1d0),(DamageInfo *)(param_2 + 0x78));
  uVar1 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(param_2 + 0xfc));
  iVar2 = Board::MakeRenderOrder(0x64960,uVar1,0);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this,(SexyVector3 *)(param_2 + 0xf8),iVar2);
  GetPAMByName((string *)(param_2 + 0xd8));
  pPVar3 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,pPVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
  Effect_PopAnim::SetPopAnimDelegates((Effect_PopAnim *)this);
  Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,param_2 + 0xe0,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MangosteenElectricCircle::setExplodeEffectValues(MangosteenElectricExplode*) */

void __thiscall
MangosteenElectricCircle::setExplodeEffectValues
          (MangosteenElectricCircle *this,MangosteenElectricExplode *param_1)

{
  ElectricExplodeDescription aEStack_108 [8];
  undefined1 auStack_100 [8];
  SexyVector3 aSStack_f8 [12];
  undefined4 local_ec;
  DamageInfo aDStack_e8 [96];
  ElectricExplodeDescription aEStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (MangosteenElectricExplode *)0x0) {
    ElectricExplodeDescription::ElectricExplodeDescription(aEStack_108);
    thunk_FUN_05475e00(aEStack_108,this + 0x1b8);
    thunk_FUN_05475e00(auStack_100,this + 0x1c0);
    Sexy::SexyVector3::operator=(aSStack_f8,(SexyVector3 *)(this + 0x10c));
    local_ec = *(undefined4 *)(this + 0x1c8);
    DamageInfo::operator=(aDStack_e8,(DamageInfo *)(this + 0x1d0));
    ElectricExplodeDescription::ElectricExplodeDescription(aEStack_88,aEStack_108);
    MangosteenElectricExplode::setValues(param_1,aEStack_88);
    ElectricExplodeDescription::~ElectricExplodeDescription(aEStack_88);
    ElectricExplodeDescription::~ElectricExplodeDescription(aEStack_108);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MangosteenElectricCircle::OnAnimCommand(std::string const&, std::string const&) */

void MangosteenElectricCircle::OnAnimCommand(string *param_1,string *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  MangosteenElectricExplode *pMVar3;
  
  bVar2 = std::operator==(param_2,"shrink");
  if (bVar2) {
    uVar1 = *(undefined4 *)(param_1 + 0x120);
    param_1[0x119] = (string)0x1;
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x124);
    *(undefined4 *)(param_1 + 0x124) = uVar1;
    *(undefined4 *)(param_1 + 300) = 0x3fcccccd;
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(param_1 + 0x130));
    return;
  }
  bVar2 = std::operator==(param_2,"expand");
  if (bVar2) {
    param_1[0x119] = (string)0x1;
  }
  else {
    bVar2 = std::operator==(param_2,"disappear");
    if (bVar2) {
      *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x124);
      return;
    }
    bVar2 = std::operator==(param_2,"exp");
    if (bVar2) {
      pMVar3 = Board::AddEffect<MangosteenElectricExplode>(*(Board **)(gLawnApp + 0x9f0));
      pMVar3 = Sexy::RtObject::Cast<MangosteenElectricExplode>((RtObject *)pMVar3);
      setExplodeEffectValues((MangosteenElectricCircle *)param_1,pMVar3);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MangosteenElectricCircle::onUpdate() */

void __thiscall MangosteenElectricCircle::onUpdate(MangosteenElectricCircle *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  float *pfVar6;
  RtObject *this_00;
  BoardEntity *this_01;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_38;
  undefined8 local_30;
  BoardEntity *local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::onUpdate((Effect_PopAnim *)this);
  lVar4 = UIWidget::GetAtlasImage((UIWidget *)this);
  lVar4 = FUN_03b060fc(*(undefined8 *)(lVar4 + 0x20));
  fVar7 = 10.0 / (float)*(int *)(lVar4 + 0x30);
  if (fVar7 <= 0.0) {
    *(undefined4 *)(this + 0x128) = 0x3e99999a;
  }
  else {
    *(float *)(this + 0x128) = fVar7;
  }
  fVar9 = *(float *)(this + 0x120);
  fVar7 = *(float *)(this + 0x124);
  if (fVar7 <= fVar9) {
    fVar8 = (float)PVZ_Dt();
    fVar7 = *(float *)(this + 0x11c) - (fVar8 * (fVar9 - fVar7)) / *(float *)(this + 0x128);
    *(float *)(this + 0x11c) = fVar7;
    if (fVar7 < *(float *)(this + 0x124)) {
      *(float *)(this + 0x11c) = *(float *)(this + 0x124);
    }
  }
  else {
    fVar8 = (float)PVZ_Dt();
    fVar7 = (fVar8 * (fVar7 - fVar9)) / *(float *)(this + 0x128) + *(float *)(this + 0x11c);
    *(float *)(this + 0x11c) = fVar7;
    if (*(float *)(this + 0x124) < fVar7) {
      *(float *)(this + 0x11c) = *(float *)(this + 0x124);
    }
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = operator|(2,4);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_28,*(float *)(this + 0x10c),*(float *)(this + 0x110));
  EntityFinder::GetEntitiesWithinCircle2D
            (ABS(*(float *)(this + 0x11c) - *(float *)(this + 0x120)),avStack_20,uVar3,
             (FastCurve *)&local_28);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
  if (bVar1) {
    do {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38)
      ;
      this_01 = (BoardEntity *)*puVar5;
      cVar2 = PlantMangosteen::canTarget(this_01);
      if (cVar2 != '\0') {
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this_01);
        fVar7 = (float)Distance2D(*(float *)(this + 0x10c),*(float *)(this + 0x110),*pfVar6,
                                  pfVar6[1]);
        if (*(float *)(this + 0x124) <= *(float *)(this + 0x120)) {
          if (*(float *)(this + 0x11c) < fVar7) goto LAB_03b0b6dc;
        }
        else if (fVar7 < *(float *)(this + 0x11c)) {
LAB_03b0b6dc:
          cVar2 = hasDamaged(this,this_01);
          if (cVar2 == '\0') {
            this_00 = (RtObject *)Sexy::RtObject::Cast<Zombie>((RtObject *)this_01);
            if (this_00 == (RtObject *)0x0) {
              this_00 = (RtObject *)Sexy::RtObject::Cast<GridItem>((RtObject *)this_01);
              if (this_00 == (RtObject *)0x0) goto LAB_03b0b678;
              (**(code **)(*(long *)this_00 + 0x110))(this_00,this + 0x148);
            }
            else {
                    /* WARNING: Load size is inaccurate */
              if (0.0 < (float)*(Zombie **)(this + 0x1a8)) {
                Zombie::ApplyCondition(*(Zombie **)(this + 0x1a8),0,this_00,6,1);
                    /* WARNING: Load size is inaccurate */
                Zombie::ApplyCondition(*(Zombie **)(this + 0x1a8),0,this_00,0x18,1);
                *(undefined4 *)(this + 0x19c) = 0x41200000;
              }
              (**(code **)(*(long *)this_00 + 0x110))(this_00,this + 0x148);
            }
            local_28 = Sexy::RtObject::Cast<BoardEntity>(this_00);
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x130),&local_28
                      );
          }
        }
      }
LAB_03b0b678:
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    } while (bVar1);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

