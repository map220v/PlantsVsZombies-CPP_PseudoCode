// Class: SoundWaveCircle


/* SoundWaveCircle::SetSpawnPoint(Sexy::Point const&) */

void __thiscall SoundWaveCircle::SetSpawnPoint(SoundWaveCircle *this,Point *param_1)

{
  *(undefined8 *)(this + 0x1a4) = *(undefined8 *)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoundWaveCircle::StaticClassInit() */

void SoundWaveCircle::StaticClassInit(void)

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
    std::string::string(asStack_10,"SoundWaveCircle");
    (*pcVar2)(plVar1,asStack_10,FUN_03fb2430,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SoundWaveCircle::StaticGetClass() */

long * SoundWaveCircle::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SoundWaveCircle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SoundWaveCircle::GetClass() const */

long * SoundWaveCircle::GetClass(void)

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
  (*pcVar3)(plVar1,"SoundWaveCircle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SoundWaveCircle::SoundWaveCircle() */

void __thiscall SoundWaveCircle::SoundWaveCircle(SoundWaveCircle *this)

{
  int iVar1;
  
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  this[0x109] = (SoundWaveCircle)0x0;
  *(undefined ***)this = &PTR_GetClass_067a81d0;
  DVec3::DVec3((DVec3 *)(this + 0x10c));
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  *(undefined4 *)(this + 0x124) = 0x3f19999a;
  *(float *)(this + 0x120) = (float)iVar1 * 1.5;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x128));
  DamageInfo::DamageInfo((DamageInfo *)(this + 0x140));
  *(undefined4 *)(this + 0x1a0) = 0;
  Sexy::Point::Point((Point *)(this + 0x1a4));
  return;
}


/* SoundWaveCircle::StaticNew() */

SoundWaveCircle * SoundWaveCircle::StaticNew(void)

{
  SoundWaveCircle *this;
  
  this = ::operator_new(0x1b0);
  SoundWaveCircle(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoundWaveCircle::hasDamaged(BoardEntity*) */

void __thiscall SoundWaveCircle::hasDamaged(SoundWaveCircle *this,BoardEntity *param_1)

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
               *)(this + 0x128);
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


/* SoundWaveCircle::~SoundWaveCircle() */

void __thiscall SoundWaveCircle::~SoundWaveCircle(SoundWaveCircle *this)

{
  *(undefined ***)this = &PTR_GetClass_067a81d0;
  DamageInfo::~DamageInfo((DamageInfo *)(this + 0x140));
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x128));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* SoundWaveCircle::~SoundWaveCircle() */

void __thiscall SoundWaveCircle::~SoundWaveCircle(SoundWaveCircle *this)

{
  ~SoundWaveCircle(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoundWaveCircle::setValues(SoundWaveCircleDescription) */

void __thiscall SoundWaveCircle::setValues(SoundWaveCircle *this,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  PopAnim *pPVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x109] = *(SoundWaveCircle *)(param_2 + 0x90);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x10c),(SexyVector3 *)(param_2 + 0x80));
  fVar4 = *(float *)(param_2 + 0xc);
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(this + 0x11c) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(this + 0x120) = uVar1;
  if (fVar4 == 0.0) {
    fVar4 = *(float *)(this + 0x124);
  }
  *(float *)(this + 0x124) = fVar4;
  DamageInfo::operator=((DamageInfo *)(this + 0x140),(DamageInfo *)(param_2 + 0x10));
  *(undefined8 *)(this + 0x140) = 0;
  fVar4 = *(float *)(param_2 + 0x84);
  *(undefined4 *)(this + 0x1a0) = *(undefined4 *)(param_2 + 0x8c);
  uVar1 = BoardTransforms::BoardSpaceToGridYUnbounded(fVar4);
  iVar2 = Board::MakeRenderOrder(0x64960,uVar1,0);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this,(SexyVector3 *)(param_2 + 0x80),iVar2);
  GetPAMByName((string *)(param_2 + 0x70));
  pPVar3 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,pPVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
  Effect_PopAnim::SetPopAnimDelegates((Effect_PopAnim *)this);
  Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,param_2 + 0x78,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SoundWaveCircle::onDestroy() */

void __thiscall SoundWaveCircle::onDestroy(SoundWaveCircle *this)

{
  StaveSystem *this_00;
  
  this_00 = Board::GetGameSubSystem<StaveSystem>(*(Board **)(gLawnApp + 0x9f0));
  StaveSystem::PlayNextSyllable(this_00,(Point *)(this + 0x1a4));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoundWaveCircle::onUpdate() */

void __thiscall SoundWaveCircle::onUpdate(SoundWaveCircle *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  float *pfVar6;
  RtObject *this_00;
  ZombieTosserSubSystem *pZVar7;
  undefined8 uVar8;
  BoardEntity *this_01;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_80;
  undefined8 local_78;
  BoardEntity *local_70;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::onUpdate((Effect_PopAnim *)this);
  lVar4 = UIWidget::GetAtlasImage((UIWidget *)this);
  lVar4 = FUN_03fb0d0c(*(undefined8 *)(lVar4 + 0x20));
  fVar9 = 10.0 / (float)*(int *)(lVar4 + 0x30);
  if (fVar9 <= 0.0) {
    *(undefined4 *)(this + 0x124) = 0x3f19999a;
  }
  else {
    *(float *)(this + 0x124) = fVar9;
  }
  fVar11 = *(float *)(this + 0x11c);
  fVar9 = *(float *)(this + 0x120);
  if (fVar9 <= fVar11) {
    fVar10 = (float)PVZ_Dt();
    fVar9 = *(float *)(this + 0x118) - (fVar10 * (fVar11 - fVar9)) / *(float *)(this + 0x124);
    *(float *)(this + 0x118) = fVar9;
    if (fVar9 < *(float *)(this + 0x120)) {
      *(float *)(this + 0x118) = *(float *)(this + 0x120);
    }
  }
  else {
    fVar10 = (float)PVZ_Dt();
    fVar9 = (fVar10 * (fVar9 - fVar11)) / *(float *)(this + 0x124) + *(float *)(this + 0x118);
    *(float *)(this + 0x118) = fVar9;
    if (*(float *)(this + 0x120) < fVar9) {
      *(float *)(this + 0x118) = *(float *)(this + 0x120);
    }
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  uVar3 = operator|(2,4);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_70,*(float *)(this + 0x10c) - 7.0,*(float *)(this + 0x110) + 20.0);
  EntityFinder::GetEntitiesWithinCircle2D
            (ABS(*(float *)(this + 0x118) - *(float *)(this + 0x11c)),avStack_68,uVar3,
             (FastCurve *)&local_70);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_68);
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_68);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)&local_78);
  if (bVar1) {
    do {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80)
      ;
      this_01 = (BoardEntity *)*puVar5;
      cVar2 = PlantHeavenDatura::canTarget(this_01);
      if (cVar2 != '\0') {
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this_01);
        fVar9 = (float)Distance2D(*(float *)(this + 0x10c),*(float *)(this + 0x110),*pfVar6,
                                  pfVar6[1]);
        if (*(float *)(this + 0x120) <= *(float *)(this + 0x11c)) {
          if (*(float *)(this + 0x118) < fVar9) goto LAB_03fb61d0;
        }
        else if (fVar9 < *(float *)(this + 0x118)) {
LAB_03fb61d0:
          cVar2 = hasDamaged(this,this_01);
          if (cVar2 == '\0') {
            this_00 = (RtObject *)Sexy::RtObject::Cast<Zombie>((RtObject *)this_01);
            if (this_00 == (RtObject *)0x0) {
              this_00 = (RtObject *)Sexy::RtObject::Cast<GridItem>((RtObject *)this_01);
              if (this_00 == (RtObject *)0x0) goto LAB_03fb616c;
              (**(code **)(*(long *)this_00 + 0x110))(this_00,this + 0x140);
            }
            else {
              bVar1 = Sexy::RtObject::IsA<Zomboss>(this_00);
              if ((((((!bVar1) && (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>(this_00), !bVar1))
                    && (cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 == '\0')) &&
                   ((cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 == '\0' &&
                    (cVar2 = Zombie::HasFogImmune((Zombie *)this_00), cVar2 == '\0')))) &&
                  ((cVar2 = Zombie::IsBerserk((Zombie *)this_00), cVar2 == '\0' &&
                   ((cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0' &&
                    (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0'))))))
                 && (cVar2 = Zombie::CanBeLaunchedByPlantsExtra((Zombie *)this_00), cVar2 != '\0'))
              {
                if (this[0x109] != (SoundWaveCircle)0x0) {
                  pZVar7 = Board::GetGameSubSystem<ZombieTosserSubSystem>
                                     (*(Board **)(gLawnApp + 0x9f0));
                  uVar8 = std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this_00);
                  uVar3 = *(undefined4 *)(this + 0x1a0);
                  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
                  ZombieTosserSubSystem::LaunchZombie
                            ((ZombieTosserSubSystem *)0x42a00000,uVar3,pZVar7,this_00,uVar8,
                             aRStack_50,1);
                  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  ::~RtReflectionDelegate
                            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                              *)aRStack_50);
                }
                    /* WARNING: Load size is inaccurate */
                Zombie::ApplyCondition(*(Zombie **)(this + 0x1a0),0,this_00,2,1);
              }
              (**(code **)(*(long *)this_00 + 0x110))(this_00,this + 0x140);
            }
            local_70 = Sexy::RtObject::Cast<BoardEntity>(this_00);
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x128),&local_70
                      );
          }
        }
      }
LAB_03fb616c:
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)&local_78);
    } while (bVar1);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

