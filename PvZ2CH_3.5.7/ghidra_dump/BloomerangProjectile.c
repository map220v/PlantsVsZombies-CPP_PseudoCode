// Class: BloomerangProjectile


/* BloomerangProjectile::onInitialized() */

void __thiscall BloomerangProjectile::onInitialized(BloomerangProjectile *this)

{
  this[0x1a5] = (BloomerangProjectile)0x0;
  this[0x214] = (BloomerangProjectile)0x0;
  *(undefined4 *)(this + 0x200) = 0;
  *(undefined4 *)(this + 0x204) = 0;
  this[0x215] = (BloomerangProjectile)0x0;
  *(undefined4 *)(this + 0x210) = 0x3e800000;
  return;
}


/* BloomerangProjectile::onDeflection(BoardEntity*) */

void BloomerangProjectile::onDeflection(BoardEntity *param_1)

{
  param_1[0x215] = (BoardEntity)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BloomerangProjectile::StaticClassInit() */

void BloomerangProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BloomerangProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03fec638,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BloomerangProjectile::StaticGetClass() */

long * BloomerangProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BloomerangProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BloomerangProjectile::GetClass() const */

long * BloomerangProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"BloomerangProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BloomerangProjectile::SetBoundaryPosition(Sexy::SexyVector2 const&, Sexy::SexyVector2 const&) */

void __thiscall
BloomerangProjectile::SetBoundaryPosition
          (BloomerangProjectile *this,SexyVector2 *param_1,SexyVector2 *param_2)

{
  *(undefined8 *)(this + 0x1e8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x1d8) = *(undefined8 *)param_2;
  return;
}


/* BloomerangProjectile::SetTargets(Sexy::SexyVector2 const&, Sexy::SexyVector2 const&) */

void __thiscall
BloomerangProjectile::SetTargets
          (BloomerangProjectile *this,SexyVector2 *param_1,SexyVector2 *param_2)

{
  *(undefined8 *)(this + 0x1e8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x1e0) = *(undefined8 *)param_2;
  return;
}


/* BloomerangProjectile::SetBaseVelocity(Sexy::SexyVector3 const&) */

void __thiscall
BloomerangProjectile::SetBaseVelocity(BloomerangProjectile *this,SexyVector3 *param_1)

{
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1f0),param_1);
  return;
}


/* BloomerangProjectile::SetSlowdown(float, float) */

void __thiscall
BloomerangProjectile::SetSlowdown(BloomerangProjectile *this,float param_1,float param_2)

{
  *(float *)(this + 0x208) = param_1;
  *(float *)(this + 0x20c) = param_2;
  return;
}


/* BloomerangProjectile::SetOutgoingHitCount(int) */

void __thiscall BloomerangProjectile::SetOutgoingHitCount(BloomerangProjectile *this,int param_1)

{
  *(int *)(this + 0x200) = param_1;
  return;
}


/* BloomerangProjectile::SetPauseDuration(float, bool) */

void __thiscall
BloomerangProjectile::SetPauseDuration(BloomerangProjectile *this,float param_1,bool param_2)

{
  *(float *)(this + 0x210) = param_1;
  this[0x214] = (BloomerangProjectile)param_2;
  return;
}


/* BloomerangProjectile::BloomerangProjectile() */

void __thiscall BloomerangProjectile::BloomerangProjectile(BloomerangProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067b0500;
  *(undefined ***)(this + 0x10) = &PTR__BloomerangProjectile_067b06f0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c0));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1d8));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1e0));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1e8));
  DVec3::DVec3((DVec3 *)(this + 0x1f0));
  return;
}


/* BloomerangProjectile::StaticNew() */

BloomerangProjectile * BloomerangProjectile::StaticNew(void)

{
  BloomerangProjectile *this;
  
  this = ::operator_new(0x218);
  BloomerangProjectile(this);
  return this;
}


/* BloomerangProjectile::~BloomerangProjectile() */

void __thiscall BloomerangProjectile::~BloomerangProjectile(BloomerangProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067b0500;
  *(undefined ***)(this + 0x10) = &PTR__BloomerangProjectile_067b06f0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1c0));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to BloomerangProjectile::~BloomerangProjectile() */

void __thiscall BloomerangProjectile::~BloomerangProjectile(BloomerangProjectile *this)

{
  ~BloomerangProjectile(this + -0x10);
  return;
}


/* BloomerangProjectile::~BloomerangProjectile() */

void __thiscall BloomerangProjectile::~BloomerangProjectile(BloomerangProjectile *this)

{
  ~BloomerangProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BloomerangProjectile::~BloomerangProjectile() */

void __thiscall BloomerangProjectile::~BloomerangProjectile(BloomerangProjectile *this)

{
  ~BloomerangProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BloomerangProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
BloomerangProjectile::OnCollideEntity(BloomerangProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  PlantGroup *this_02;
  Zombie *pZVar5;
  undefined8 uVar6;
  Plant *this_03;
  PlantBloomerang *this_04;
  BoardEntity *pBVar7;
  RealObject *this_05;
  Effect_PopAnim *this_06;
  SexyVector3 *pSVar8;
  ResourceInfo *pRVar9;
  char *__s;
  size_t __n;
  undefined8 uVar10;
  float fVar11;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) {
    if ((0 < *(int *)(this + 0x200)) && (*(int *)(this + 0x200) <= *(int *)(this + 0x204))) {
LAB_03fed020:
      uVar10 = 0;
      goto LAB_03fecfac;
    }
    pZVar5 = (Zombie *)0x0;
  }
  else {
    this_02 = Sexy::RtObject::Cast<PlantGroup>((RtObject *)param_1);
    if (this_02 != (PlantGroup *)0x0) {
      cVar2 = '\0';
      if (this[0x1a5] != (BloomerangProjectile)0x0) {
        pBVar7 = (BoardEntity *)Projectile::GetInstigator((Projectile *)this);
        cVar2 = PlantGroup::HasPlant(this_02,pBVar7);
      }
      std::string::string((string *)&local_10,"PlantBloomerang");
      PlantGroup::GetPlantOfClass((RtWeakPtr *)&local_18,this_02,(string *)&local_10);
      std::string::~string((string *)&local_10);
      nop();
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_18);
      if (bVar1) {
        this_03 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        cVar3 = Plant::IsConvertedByCondition(this_03);
        if ((cVar3 != '\0') || (this[0x215] == (BloomerangProjectile)0x0)) goto LAB_03fece74;
LAB_03fecf78:
        uVar10 = 1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        nop();
        PlantBloomerang::OnProjectileReturned(this_04,this);
        (**(code **)(*(long *)this + 0x48))(this);
      }
      else {
LAB_03fece74:
        if (cVar2 != '\0') goto LAB_03fecf78;
        uVar10 = 0;
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_18);
        if (!bVar1) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
          goto LAB_03fece94;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      goto LAB_03fecfac;
    }
LAB_03fece94:
    if (((0 < *(int *)(this + 0x200)) && (*(int *)(this + 0x200) <= *(int *)(this + 0x204))) ||
       ((pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar5 != (Zombie *)0x0 &&
        (cVar2 = (**(code **)(*(long *)pZVar5 + 0x328))(), cVar2 != '\0')))) goto LAB_03fed020;
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1a8);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  uVar10 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin(this_00);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_28 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                       (uVar10,uVar6,aRStack_30);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
  if (bVar1) {
    this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x1c0);
    uVar10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_01);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_01);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                         (uVar10,uVar6,aRStack_30);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_01);
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if ((bVar1) && (bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_30), bVar1))
    {
      this_05 = (RealObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      std::string::string((string *)&local_10,"Play_Plant_Bloomerange_Impact");
      RealObject::PlayPositionalSound(this_05,(string *)&local_10,0.0);
      std::string::~string((string *)&local_10);
      nop();
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )this_00,(RtWeakPtr *)aRStack_30);
      (**(code **)(*(long *)this + 0x1b0))(this,param_1);
      (**(code **)(*(long *)this + 0x168))(this,param_1);
      if ((pZVar5 != (Zombie *)0x0) && (this[0x214] != (BloomerangProjectile)0x0)) {
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(this + 0x210),0,pZVar5,2,1);
      }
      *(int *)(this + 0x204) = *(int *)(this + 0x204) + 1;
      this_06 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      pSVar8 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this);
      iVar4 = (**(code **)(*(long *)this + 200))(this);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_06,pSVar8,iVar4 + -1);
      std::string::string((string *)&local_18,"POPANIM_EFFECTS_BLOOMERANG_PROJECTILE_HIT");
      GetPAMByName((string *)&local_18);
      pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_10);
      __n = 0;
      Effect_PopAnim::CreatePopAnimRig(this_06,(PopAnim *)pRVar9,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      std::string::~string((string *)&local_18);
      nop();
      Effect_PopAnim::SetCentered(this_06,true);
      Set8BytesTo0((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      if (this[0x1a5] == (BloomerangProjectile)0x0) {
        fVar11 = (float)Sexy::Rand(1.0);
        if (fVar11 < 0.5) {
          __s = "animation";
        }
        else {
          __s = "animation2";
        }
      }
      else {
        fVar11 = (float)Sexy::Rand(1.0);
        if (fVar11 < 0.5) {
          __s = "animation3";
        }
        else {
          __s = "animation4";
        }
      }
      std::string::append((string *)&local_10,__s,__n);
      Effect_PopAnim::PlaySingleAnimation(this_06,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10,0);
      std::string::~string((string *)&local_10);
    }
  }
  uVar10 = 0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
LAB_03fecfac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BloomerangProjectile::onUpdate(float) */

void BloomerangProjectile::onUpdate(float param_1)

{
  FPoint *pFVar1;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar2;
  bool bVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float in_s2;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  float local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  float local_40;
  float local_3c;
  undefined4 local_30;
  float local_2c;
  undefined4 local_20;
  float fStack_1c;
  float local_18;
  undefined4 uStack_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x0[0x215] !=
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       )0x0) goto LAB_03fed3a0;
  pFVar1 = (FPoint *)(in_x0 + 0x1e0);
  param_1 = (float)VectorNorm(pFVar1);
  if (param_1 == 0.0) {
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(in_x0);
    fVar13 = pfVar4[1];
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,*pfVar4,fVar13);
    local_68 = (float)Sexy::SexyVector2::operator-
                                ((SexyVector2 *)&local_70,(SexyVector2 *)(in_x0 + 0x1e8));
    local_64 = fVar13;
    local_20 = Sexy::SexyVector3::Normalize((SexyVector3 *)(in_x0 + 0x1f0));
    fStack_1c = fVar13;
    local_18 = in_s2;
    fVar12 = (float)Sexy::SexyVector3::operator*((SexyVector3 *)&local_20,*(float *)(in_x0 + 0x208))
    ;
    fVar11 = fVar13;
    local_40 = fVar12;
    local_3c = fVar13;
    local_30 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_70,(SexyVector2 *)(in_x0 + 0x1d8))
    ;
    fVar10 = fVar13;
    local_2c = fVar11;
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,fVar12,fVar13);
    local_60 = Sexy::SexyVector2::operator+((SexyVector2 *)&local_30,(SexyVector2 *)&local_20);
    local_5c = fVar10;
    fVar11 = (float)DVec2::getLength((DVec2 *)&local_60);
    fVar10 = (float)DVec2::dot((DVec2 *)&local_60,(DVec2 *)&local_68);
    if ((0.0 <= fVar10) || (fVar11 <= 1.0)) {
      *(undefined8 *)(in_x0 + 0x1e0) = *(undefined8 *)(in_x0 + 0x1d8);
      param_1 = (float)VectorNorm(pFVar1);
    }
    else {
      if (0 < *(int *)(in_x0 + 0x204)) {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
        Sexy::Insets::Insets
                  ((Insets *)&local_30,(int)local_70,(int)(local_6c - pfVar4[2]),
                   (int)(*(float *)(in_x0 + 0x1d8) - local_70),10);
        uVar9 = operator|(4,2);
        EntityFinder::GetEntitiesTouchingRectangle
                  ((SexyVector3 *)&local_20,uVar9,(SexyVector2 *)&local_30,0xffffffff,0xffffffff);
        if (*(int *)(in_x0 + 0x204) < *(int *)(in_x0 + 0x200)) {
          bVar3 = false;
          pvVar2 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(in_x0 + 0x1a8);
          uVar8 = 0;
          while( true ) {
            uVar5 = CONCAT44(fStack_1c,local_20);
            uVar7 = FUN_03feae14(uVar5,CONCAT44(uStack_14,local_18));
            if (uVar7 <= uVar8) break;
            if (bVar3 != false) goto LAB_03fed670;
            FUN_03feae20(uVar5,uVar8);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)local_58,(RtWeakPtrBase *)&local_48);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
            uVar5 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin(pvVar2);
            uVar6 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(pvVar2);
            local_50 = std::
                       find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                                 (uVar5,uVar6,(RtWeakPtr<Sexy::SoundResource> *)local_58);
            local_48 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end(pvVar2);
            bVar3 = __gnu_cxx::operator==
                              ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_58);
            uVar8 = uVar8 + 1;
          }
          if (bVar3 == false) goto LAB_03fed64c;
        }
        else {
          uVar8 = 0;
          pvVar2 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(in_x0 + 0x1a8);
          while( true ) {
            uVar5 = CONCAT44(fStack_1c,local_20);
            uVar7 = FUN_03feae14(uVar5,CONCAT44(uStack_14,local_18));
            if (uVar7 <= uVar8) break;
            FUN_03feae20(uVar5,uVar8);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)local_58,(RtWeakPtrBase *)&local_48);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
            uVar5 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin(pvVar2);
            uVar6 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(pvVar2);
            local_50 = std::
                       find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                                 (uVar5,uVar6,(RtWeakPtr<Sexy::ResourceInfo> *)local_58);
            local_48 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end(pvVar2);
            bVar3 = __gnu_cxx::operator==
                              ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
            if (bVar3) {
              std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
              ::push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                           *)(in_x0 + 0x1c0),(RtWeakPtr *)local_58);
            }
            uVar8 = uVar8 + 1;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_58);
          }
LAB_03fed64c:
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_48,fVar12,fVar13);
          uVar9 = Sexy::SexyVector2::operator+((SexyVector2 *)&local_70,(SexyVector2 *)&local_48);
          *(undefined4 *)(in_x0 + 0x1e0) = uVar9;
          *(float *)(in_x0 + 0x1e4) = fVar13;
        }
LAB_03fed670:
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      }
      param_1 = (float)VectorNorm(pFVar1);
    }
  }
  if (param_1 <= 0.0) goto LAB_03fed3a0;
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x0);
  fVar11 = pfVar4[1];
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_50,*pfVar4,fVar11);
  uVar9 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_50,(SexyVector2 *)pFVar1);
  local_48 = CONCAT44(fVar11,uVar9);
  local_40 = (float)Sexy::SexyVector2::operator-
                              ((SexyVector2 *)&local_50,(SexyVector2 *)(in_x0 + 0x1e8));
  local_3c = fVar11;
  fVar11 = (float)DVec2::getLength((DVec2 *)&local_48);
  if (in_x0[0x1a5] ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       )0x0) {
    fVar10 = (float)DVec2::dot((DVec2 *)&local_48,(DVec2 *)&local_40);
    if ((fVar10 < 0.0) && (fVar10 = 1.0, 1.0 < fVar11)) goto LAB_03fed318;
    in_x0[0x1a5] = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    )0x1;
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               (in_x0 + 0x1a8));
    *(undefined4 *)(in_x0 + 0x200) = 0;
    *(undefined4 *)(in_x0 + 0x204) = 0;
    if (in_x0[0x1a5] !=
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         )0x0) goto LAB_03fed314;
    fVar12 = *(float *)(in_x0 + 0x208);
    fVar10 = 1.0;
    if (fVar11 <= fVar12) goto LAB_03fed324;
LAB_03fed428:
    fVar11 = 0.0;
    local_68 = 1.0;
  }
  else {
LAB_03fed314:
    fVar10 = -1.0;
LAB_03fed318:
    fVar12 = *(float *)(in_x0 + 0x208);
    if (fVar12 < fVar11) goto LAB_03fed428;
LAB_03fed324:
    local_68 = fVar11 / fVar12;
    fVar11 = 1.0 - local_68;
  }
  local_30 = Sexy::SexyVector3::operator*((SexyVector3 *)(in_x0 + 0x1f0),fVar10);
  fVar10 = 1.0;
  local_60 = 0x3f800000;
  local_2c = fVar12;
  local_58[0] = CurveLerp<float>(&local_60,in_x0 + 0x20c,1);
  pfVar4 = eastl::max_alt<float>(&local_68,local_58);
  local_20 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_30,*pfVar4);
  fStack_1c = fVar10;
  local_18 = fVar11;
  param_1 = (float)Projectile::SetVelocity((Projectile *)in_x0,(SexyVector3 *)&local_20);
LAB_03fed3a0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}

