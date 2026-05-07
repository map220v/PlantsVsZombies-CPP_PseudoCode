// Class: PokraProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PokraProjectile::StaticClassInit() */

void PokraProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PokraProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04cd7278,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PokraProjectile::StaticGetClass() */

long * PokraProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PokraProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PokraProjectile::GetClass() const */

long * PokraProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PokraProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PokraProjectile::onSetInstigator(BoardEntity*) */

void PokraProjectile::onSetInstigator(BoardEntity *param_1)

{
  BoardEntity BVar1;
  Plant *this;
  long lVar2;
  undefined4 uVar3;
  
  Projectile::GetInstigator((Projectile *)param_1);
  nop();
  if (this == (Plant *)0x0) {
    return;
  }
  BVar1 = (BoardEntity)Plant::GetAvatarEnable(this);
  param_1[0x1c0] = BVar1;
  uVar3 = Plant::GetExtraDPSmodifier(this);
  lVar2 = *(long *)this;
  *(undefined4 *)(param_1 + 0x1c4) = uVar3;
  if (*(code **)(lVar2 + 0x1f8) == Plant::IsInPlantFoodState) {
    BVar1 = (BoardEntity)Plant::IsInPlantFoodState(this);
    param_1[0x1c8] = BVar1;
    Sexy::OutputDebugStrF
              ((wchar_t *)"PokraProjectile::onSetInstigator isAvatar : %d",
               (ulong)(byte)param_1[0x1c0]);
    return;
  }
  BVar1 = (BoardEntity)(**(code **)(lVar2 + 0x1f8))();
  param_1[0x1c8] = BVar1;
  Sexy::OutputDebugStrF
            ((wchar_t *)"PokraProjectile::onSetInstigator isAvatar : %d",(ulong)(byte)param_1[0x1c0]
            );
  return;
}


/* PokraProjectile::PokraProjectile() */

void __thiscall PokraProjectile::PokraProjectile(PokraProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0699f080;
  *(undefined ***)(this + 0x10) = &PTR__PokraProjectile_0699f270;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  return;
}


/* PokraProjectile::StaticNew() */

PokraProjectile * PokraProjectile::StaticNew(void)

{
  PokraProjectile *this;
  
  this = ::operator_new(0x1d0);
  PokraProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PokraProjectile::addPoisonTileToBoard(Sexy::Point&) */

void __thiscall PokraProjectile::addPoisonTileToBoard(PokraProjectile *this,Point *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  RtObject *this_00;
  PoisonMistGridItem *this_01;
  Board *this_02;
  string asStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)param_1;
  local_8 = ___stack_chk_guard;
  if ((((-2 < iVar1) && (iVar2 = BoardConstants::NUMBER_OF_COLUMNS(), iVar1 <= iVar2)) &&
      (iVar1 = *(int *)(param_1 + 4), -2 < iVar1)) &&
     (iVar2 = BoardConstants::NUMBER_OF_ROWS(), iVar1 <= iVar2)) {
    this_02 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"poison_mist");
    this_00 = (RtObject *)
              Board::AddGridItem(this_02,asStack_10,*(int *)param_1,*(int *)(param_1 + 4),1);
    this_01 = Sexy::RtObject::Cast<PoisonMistGridItem>(this_00);
    std::string::~string(asStack_10);
    nop();
    PoisonMistGridItem::InitializeValues(this_01,(bool)this[0x1c0]);
    uVar3 = FUN_04cd24a0(*(undefined4 *)(this + 0x24));
    FUN_04cd24a4(this_01 + 0x24,uVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PokraProjectile::spawnOrRefreshPoisonTiles() */

void __thiscall PokraProjectile::spawnOrRefreshPoisonTiles(PokraProjectile *this)

{
  char cVar1;
  SexyVector3 *pSVar2;
  PoisonMistGridItem *this_00;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x1c0] != (PokraProjectile)0x0) && (this[0x1c8] != (PokraProjectile)0x0)) {
    pSVar2 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_18 = *(undefined8 *)pSVar2;
    local_10 = *(undefined4 *)(pSVar2 + 8);
    auVar8 = Projectile::GetProps((Projectile *)this);
    local_18 = CONCAT44(local_18._4_4_,(float)local_18 + *(float *)(auVar8._0_8_ + 0x120));
    BoardTransforms::BoardSpaceToGridUnbounded((BoardTransforms *)&local_18,auVar8._8_8_);
    cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_20);
    if (cVar1 == '\0') {
      this_00 = (PoisonMistGridItem *)FUN_04cd673c(local_20,local_1c);
      lVar3 = FUN_04cd6820(local_20,local_1c);
      lVar4 = FUN_04cd6904(local_20,local_1c);
      lVar5 = FUN_04cd69e8(local_20,local_1c);
      lVar6 = FUN_04cd6acc(local_20,local_1c);
      lVar7 = FUN_04cd6bb0(local_20,local_1c);
      if (this_00 == (PoisonMistGridItem *)0x0) {
        if ((((lVar3 == 0) && (lVar4 == 0)) && (lVar5 == 0 && lVar6 == 0)) && (lVar7 == 0)) {
          addPoisonTileToBoard(this,(Point *)&local_20);
        }
      }
      else {
        PoisonMistGridItem::ResetTimer(this_00);
      }
    }
    else {
      Board::DoEntityLandedEffects(*(Board **)(gLawnApp + 0x9f0),pSVar2,(BoardEntity *)0x0);
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PokraProjectile::onUpdate(float) */

void PokraProjectile::onUpdate(float param_1)

{
  char cVar1;
  SexyVector3 *pSVar2;
  PoisonMistGridItem *this;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float extraout_s0;
  undefined1 auVar8 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  undefined4 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if ((in_x0[0x1c0] !=
       (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        )0x0) &&
     (in_x0[0x1c8] !=
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       )0x0)) {
    pSVar2 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(in_x0);
    uStack_18 = *(undefined8 *)pSVar2;
    uStack_10 = *(undefined4 *)(pSVar2 + 8);
    auVar8 = Projectile::GetProps((Projectile *)in_x0);
    uStack_18 = CONCAT44(uStack_18._4_4_,(float)uStack_18 + *(float *)(auVar8._0_8_ + 0x120));
    BoardTransforms::BoardSpaceToGridUnbounded((BoardTransforms *)&uStack_18,auVar8._8_8_);
    cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),(Point *)&uStack_20);
    if (cVar1 == '\0') {
      this = (PoisonMistGridItem *)FUN_04cd673c(uStack_20,uStack_1c);
      lVar3 = FUN_04cd6820(uStack_20,uStack_1c);
      lVar4 = FUN_04cd6904(uStack_20,uStack_1c);
      lVar5 = FUN_04cd69e8(uStack_20,uStack_1c);
      lVar6 = FUN_04cd6acc(uStack_20,uStack_1c);
      lVar7 = FUN_04cd6bb0(uStack_20,uStack_1c);
      if (this == (PoisonMistGridItem *)0x0) {
        param_1 = extraout_s0;
        if ((((lVar3 == 0) && (lVar4 == 0)) && (lVar5 == 0 && lVar6 == 0)) && (lVar7 == 0)) {
          param_1 = (float)addPoisonTileToBoard((PokraProjectile *)in_x0,(Point *)&uStack_20);
        }
      }
      else {
        param_1 = (float)PoisonMistGridItem::ResetTimer(this);
      }
    }
    else {
      Board::DoEntityLandedEffects(*(Board **)(gLawnApp + 0x9f0),pSVar2,(BoardEntity *)0x0);
      param_1 = (float)(**(code **)(*(long *)in_x0 + 0x48))();
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* PokraProjectile::onProjectileInitialized() */

void __thiscall PokraProjectile::onProjectileInitialized(PokraProjectile *this)

{
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1a8));
  this[0x1c0] = (PokraProjectile)0x0;
  this[0x1c8] = (PokraProjectile)0x0;
  *(undefined4 *)(this + 0x1c4) = 0x3f800000;
  return;
}


/* PokraProjectile::~PokraProjectile() */

void __thiscall PokraProjectile::~PokraProjectile(PokraProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0699f080;
  *(undefined ***)(this + 0x10) = &PTR__PokraProjectile_0699f270;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PokraProjectile::~PokraProjectile() */

void __thiscall PokraProjectile::~PokraProjectile(PokraProjectile *this)

{
  ~PokraProjectile(this + -0x10);
  return;
}


/* PokraProjectile::~PokraProjectile() */

void __thiscall PokraProjectile::~PokraProjectile(PokraProjectile *this)

{
  ~PokraProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PokraProjectile::~PokraProjectile() */

void __thiscall PokraProjectile::~PokraProjectile(PokraProjectile *this)

{
  ~PokraProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PokraProjectile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void PokraProjectile::fillDamageInfo(DamageInfo *param_1,BoardEntity *param_2)

{
  RtWeakPtr *this;
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ResourceInfo *pRVar5;
  undefined8 uVar6;
  int *piVar7;
  RtObject *this_00;
  Plant *this_01;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  ValueRange *this_02;
  float fVar11;
  float fVar12;
  undefined8 auStack_48 [3];
  undefined4 uStack_30;
  undefined8 auStack_28 [4];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  lVar4 = Projectile::getProps((Projectile *)param_1);
  fVar11 = (float)FUN_0434adc4(*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x17c),
                               *(undefined4 *)(param_1 + 0x180),*(undefined4 *)(param_1 + 0x184));
  fVar12 = *(float *)(param_1 + 0xd8);
  iVar3 = *(int *)(param_1 + 0x174);
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(lVar4 + 0x28);
  *(float *)(param_2 + 8) = fVar11 * fVar12;
  if ((0 < iVar3) && (*(int *)(param_1 + 0x4c) < iVar3)) {
    *(float *)(param_2 + 8) = fVar11 * fVar12 * 0.5;
  }
  if (0.0 < *(float *)(param_1 + 0xdc)) {
    DamageInfo::AddCondition((DamageInfo *)param_2,2);
  }
  if (param_1[0x34] != (DamageInfo)0x0) {
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) * 3.0;
  }
  if (*(char *)(lVar4 + 0x71) != '\0') {
    param_2[0x58] = (BoardEntity)0x1;
  }
  this = (RtWeakPtr *)(param_1 + 0x68);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
  *(ResourceInfo **)param_2 = pRVar5;
  uVar6 = *(undefined8 *)(lVar4 + 0x168);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0xe0);
  auStack_48[0] = FUN_0434cc68(uVar6);
  auStack_28[0] = FUN_0434ccb8(*(undefined8 *)(lVar4 + 0x170));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)auStack_48,(__normal_iterator *)auStack_28), bVar1)
  {
    piVar7 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)auStack_48);
    this_02 = (ValueRange *)(piVar7 + 1);
    iVar3 = *piVar7;
    ValueRange::GetRandomValue(this_02);
    DamageInfo::AddCondition((DamageInfo *)param_2,iVar3);
    iVar3 = *piVar7;
    if (iVar3 == 0) {
      ValueRange::GetRandomValue(this_02);
      DamageInfo::AddCondition((DamageInfo *)param_2,4);
    }
    else if (iVar3 == 1) {
      ValueRange::GetRandomValue(this_02);
      DamageInfo::AddCondition((DamageInfo *)param_2,5);
    }
    else if (iVar3 == 0x10) {
      ValueRange::GetRandomValue(this_02);
      DamageInfo::AddCondition((DamageInfo *)param_2,6);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)auStack_48);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    bVar1 = Sexy::RtObject::IsA<Plant>(this_00);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      nop();
      if ((this_01 != (Plant *)0x0) &&
         (lVar8 = FUN_0434ae18(*(undefined8 *)(lVar4 + 0x180),*(undefined8 *)(lVar4 + 0x188)),
         lVar8 != 0)) {
        iVar3 = FUN_0434ace8(*(undefined4 *)(this_01 + 0x50));
        iVar3 = iVar3 + -1;
        fVar11 = (float)Sexy::Rand(1.0);
        if (-1 < iVar3) {
          uVar6 = *(undefined8 *)(lVar4 + 0x180);
          uVar9 = FUN_0434ae18(uVar6,*(undefined8 *)(lVar4 + 0x188));
          if ((ulong)(long)iVar3 < uVar9) {
            puVar10 = (undefined4 *)FUN_0434ae2c(uVar6,(long)iVar3);
            cVar2 = Plant::IsSkillCheat(this_01);
            if (((cVar2 != '\0') && (cVar2 = Plant::IsSkillActivate(this_01), cVar2 != '\0')) ||
               ((cVar2 = Plant::IsSkillCheat(this_01), cVar2 == '\0' && (fVar11 < (float)puVar10[2])
                ))) {
              TriRepGenerator::SpanSet::SpanSet((SpanSet *)auStack_48);
              uStack_30 = *puVar10;
              std::vector<std::string,std::allocator<std::string>>::operator=
                        ((vector<std::string,std::allocator<std::string>> *)auStack_48,
                         (vector *)(puVar10 + 4));
              ZombieConditionInfo::ZombieConditionInfo
                        ((ZombieConditionInfo *)auStack_28,(ZombieConditionInfo *)auStack_48);
                    /* WARNING: Load size is inaccurate */
              DamageInfo::AddCondition
                        (*(DamageInfo **)(puVar10 + 1),param_2,(ZombieConditionInfo *)auStack_28);
              PlantWarsNodeData::~PlantWarsNodeData((PlantWarsNodeData *)auStack_28);
              PlantWarsNodeData::~PlantWarsNodeData((PlantWarsNodeData *)auStack_48);
            }
          }
        }
      }
      fVar11 = (float)Plant::GetDamageConstValue(this_01);
      *(float *)(param_2 + 8) = *(float *)(param_2 + 8) + fVar11;
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PokraProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall PokraProjectile::OnCollideEntity(PokraProjectile *this,BoardEntity *param_1)

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
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1a8);
  local_8 = ___stack_chk_guard;
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
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (!bVar1) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              this_00,(RtWeakPtr *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Projectile::OnCollideEntity((Projectile *)this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}

