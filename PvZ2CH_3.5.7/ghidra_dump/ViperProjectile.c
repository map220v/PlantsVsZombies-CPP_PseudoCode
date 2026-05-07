// Class: ViperProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ViperProjectile::StaticClassInit() */

void ViperProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ViperProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04d1e858,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ViperProjectile::StaticGetClass() */

long * ViperProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ViperProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ViperProjectile::GetClass() const */

long * ViperProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ViperProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ViperProjectile::ViperProjectile() */

void __thiscall ViperProjectile::ViperProjectile(ViperProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069a9bb0;
  *(undefined ***)(this + 0x10) = &PTR__ViperProjectile_069a9da0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c0));
  *(undefined4 *)(this + 0x1d8) = 0;
  this[0x1dc] = (ViperProjectile)0x0;
  *(undefined4 *)(this + 0x1e0) = 0;
  return;
}


/* ViperProjectile::StaticNew() */

ViperProjectile * ViperProjectile::StaticNew(void)

{
  ViperProjectile *this;
  
  this = ::operator_new(0x1e8);
  ViperProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ViperProjectile::findTagetZombie(std::vector<BoardEntity*, std::allocator<BoardEntity*> >) */

void __thiscall
ViperProjectile::findTagetZombie
          (ViperProjectile *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  Zombie *pZVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  PopAnimRig *pPVar8;
  float *pfVar9;
  float *pfVar10;
  char *__s;
  float fVar11;
  float fVar12;
  undefined8 local_68;
  undefined8 local_60;
  Zombie *local_58;
  undefined8 local_50;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  DummyInit aDStack_38 [48];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1c0);
  local_8 = ___stack_chk_guard;
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_2);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_2);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)&local_60);
    if (!bVar2) {
LAB_04d1dc44:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar2);
    }
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    if (((((RtObject *)*puVar4 != (RtObject *)0x0) &&
         (local_58 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4), local_58 != (Zombie *)0x0))
        && (cVar3 = (**(code **)(*(long *)local_58 + 0x328))(), pZVar1 = local_58, cVar3 == '\0'))
       && ((cVar3 = FUN_04d1a6f8(*(undefined4 *)(local_58 + 0xcc)), cVar3 == '\0' &&
           (cVar3 = RealObject::IsOnTeam(pZVar1,1), cVar3 == '\0')))) {
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      local_50 = std::
                 find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,Zombie*>
                           (uVar5,uVar6,&local_58);
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_50,(__normal_iterator *)&local_40);
      if (bVar2) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
        Projectile::SetTarget((Projectile *)this,(RtWeakPtr *)&local_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        Projectile::RotateTowardTarget((Projectile *)this);
        fVar11 = (float)FUN_04d1990c(*(undefined4 *)(this + 0xc4));
        fVar12 = (float)Sexy::SexyMath::DegToRad(60.0);
        if (((fVar12 < fVar11) && (fVar12 = (float)Sexy::SexyMath::DegToRad(120.0), fVar11 < fVar12)
            ) || ((fVar12 = (float)Sexy::SexyMath::DegToRad(-60.0), fVar11 < fVar12 &&
                  (fVar12 = (float)Sexy::SexyMath::DegToRad(-120.0), fVar12 < fVar11)))) {
          uVar7 = FUN_04d1999c(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0));
          if (uVar7 - 1 < 2) {
            pPVar8 = (PopAnimRig *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
            __s = "animation8";
          }
          else if (uVar7 < 3) {
            pPVar8 = (PopAnimRig *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
            __s = "animation7";
          }
          else {
            pPVar8 = (PopAnimRig *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
            __s = "animation9";
          }
        }
        else {
          pfVar9 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)this);
          pfVar10 = (float *)std::
                             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                            *)local_58);
          if (*pfVar10 < *pfVar9) {
            uVar7 = FUN_04d1999c(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0));
            if (uVar7 - 1 < 2) {
              pPVar8 = (PopAnimRig *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
              __s = "animation5";
            }
            else if (uVar7 < 3) {
              pPVar8 = (PopAnimRig *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
              __s = "animation4";
            }
            else {
              pPVar8 = (PopAnimRig *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
              __s = "animation6";
            }
          }
          else {
            uVar7 = FUN_04d1999c(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0));
            if (uVar7 - 1 < 2) {
              pPVar8 = (PopAnimRig *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
              __s = "animation2";
            }
            else if (uVar7 < 3) {
              pPVar8 = (PopAnimRig *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
              __s = "animation1";
            }
            else {
              pPVar8 = (PopAnimRig *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
              __s = "animation3";
            }
          }
        }
        std::string::string((string *)&local_40,__s);
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
        PopAnimRig::PlayAndContinue(pPVar8,(RtWeakPtr<Sexy::SoundResource> *)&local_40,0,aDStack_38)
        ;
        std::string::~string((string *)&local_40);
        nop();
        bVar2 = true;
        goto LAB_04d1dc44;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
  } while( true );
}


/* ViperProjectile::~ViperProjectile() */

void __thiscall ViperProjectile::~ViperProjectile(ViperProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069a9bb0;
  *(undefined ***)(this + 0x10) = &PTR__ViperProjectile_069a9da0;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x1c0));
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x1a8)
            );
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ViperProjectile::~ViperProjectile() */

void __thiscall ViperProjectile::~ViperProjectile(ViperProjectile *this)

{
  ~ViperProjectile(this + -0x10);
  return;
}


/* ViperProjectile::~ViperProjectile() */

void __thiscall ViperProjectile::~ViperProjectile(ViperProjectile *this)

{
  ~ViperProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ViperProjectile::~ViperProjectile() */

void __thiscall ViperProjectile::~ViperProjectile(ViperProjectile *this)

{
  ~ViperProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ViperProjectile::HandleImpact(BoardEntity*) */

void __thiscall ViperProjectile::HandleImpact(ViperProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar8;
  char *__s;
  PlantGroup *pPVar9;
  undefined1 *__n;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  RtMixedPtrBase aRStack_40 [8];
  float local_38;
  float fStack_34;
  undefined8 local_30;
  undefined4 local_20;
  undefined4 local_1c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = Projectile::getProps((Projectile *)this);
  (**(code **)(*(long *)this + 0x180))(asStack_48,this);
  cVar1 = FUN_0547419c(asStack_48);
  if (cVar1 == '\0') {
    GetPAMByName(asStack_48);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_40);
    if (cVar1 != '\0') {
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_38);
      Projectile::calcRandomSplatOffset((Projectile *)this,(SexyVector2 *)&local_38);
      if ((param_1 == (BoardEntity *)0x0) || (*(char *)(lVar4 + 0x6d) == '\0')) {
        fVar12 = local_38 + *(float *)(this + 0x18);
        fVar11 = (fStack_34 + *(float *)(this + 0x1c)) - *(float *)(this + 0x20);
      }
      else {
        pfVar7 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_1);
        fVar12 = local_38 + *pfVar7;
        fVar11 = (fStack_34 + pfVar7[1]) - pfVar7[2];
      }
      cVar1 = CardGameUtils::IsPlayingCardGame();
      if ((cVar1 == '\0') && (cVar1 = NewPVPUtils::IsPlayingNewPVP(), cVar1 == '\0')) {
        uVar10 = 0x3f800000;
      }
      else {
        uVar10 = *(undefined4 *)(this + 0xc0);
      }
      __n = auStack_50;
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_40);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar8,(RtClass *)0x0);
      Effect_PopAnim::SetCentered(this_00,true);
      (**(code **)(*(long *)this_00 + 0x80))(uVar10,this_00);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_20,fVar12,fVar11,0.0);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_20,-1)
      ;
      FUN_04d19900(this_00 + 0x1c,*(int *)(this + 0x50) + 1);
      lVar4 = Projectile::getProps((Projectile *)this);
      __s = (char *)FUN_0547429c(lVar4 + 0x148);
      std::string::string((string *)&local_20,__s);
      nop();
      if ((param_1 != (BoardEntity *)0x0) &&
         ((pPVar9 = Sexy::RtObject::Cast<PlantGroup>((RtObject *)param_1),
          pPVar9 != (PlantGroup *)0x0 ||
          (bVar2 = Sexy::RtObject::IsA<PlantGroup>((RtObject *)param_1), bVar2)))) {
        std::string::append((string *)&local_20,"animation_onplant",(size_t)__n);
      }
      Effect_PopAnim::PlaySingleAnimation(this_00,(Vec3 *)&local_20,0);
      std::string::~string((string *)&local_20);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    iVar3 = *(int *)(this + 0x1d8);
  }
  else {
    iVar3 = *(int *)(this + 0x1d8);
  }
  if (iVar3 == 0) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  else if (this[0x1dc] != (ViperProjectile)0x0) {
    if (*(float *)(this + 0x1e0) == 0.0) {
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      *(float *)(this + 0x1e0) = (float)(iVar3 * 7) * 0.5;
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
    uVar10 = *(undefined4 *)(this + 0x1c);
    local_20 = FUN_04d199d8(*(undefined4 *)(this + 0x18),uVar10,*(undefined4 *)(this + 0x20));
    local_1c = uVar10;
    EntityFinder::GetEntitiesWithinCircle2D
              (*(undefined4 *)(this + 0x1e0),
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38,2,
               (vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_38);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_38);
    FUN_04d1f828(uVar5,uVar6,this);
    lVar4 = FUN_04d199b4(CONCAT44(fStack_34,local_38),local_30);
    if (lVar4 == 1) {
      (**(code **)(*(long *)this + 0x48))(this);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,(vector *)&local_38);
    cVar1 = findTagetZombie(this,(vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    if (cVar1 == '\0') {
      (**(code **)(*(long *)this + 0x48))(this);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  }
  std::string::~string(asStack_48);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ViperProjectile::onPosionPlant(PlantGroup*) */

void __thiscall ViperProjectile::onPosionPlant(ViperProjectile *this,PlantGroup *param_1)

{
  vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *this_00;
  bool bVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  vector *pvVar5;
  long lVar6;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar7;
  long lVar8;
  int *piVar9;
  RtObject *this_01;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  PopAnimRig *pPVar13;
  int iVar14;
  char *pcVar15;
  float fVar16;
  float fVar17;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> avStack_68 [24];
  undefined8 local_50 [3];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (PlantGroup *)0x0) {
    pvVar5 = (vector *)PlantGroup::Plants();
    bVar2 = false;
    std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::vector
              (avStack_68,pvVar5);
    local_70 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_68);
    local_50[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_68);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_70,(__normal_iterator *)local_50), bVar1)
    {
      pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
      lVar6 = Projectile::GetInstigator((Projectile *)this);
      if (lVar8 == lVar6) {
        bVar2 = true;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
    }
    if (bVar2) {
      std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
                (avStack_68);
      goto LAB_04d1fe50;
    }
    this_00 = (vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
              (this + 0x1a8);
    local_98 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_68);
    local_90 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_68);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)&local_90);
    if (bVar2) {
      do {
        pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
        Plant::GetType();
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_70)
        ;
        std::vector<PlantTag,std::allocator<PlantTag>>::vector
                  ((vector<PlantTag,std::allocator<PlantTag>> *)local_50,(vector *)(lVar8 + 0xf0));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        local_88 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)local_50);
        local_80 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)local_50);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80),
              bVar2) {
          piVar9 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
          if (*piVar9 == 0x23) {
            cVar3 = std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::
                    empty(this_00);
            if (cVar3 == '\0') {
              local_78 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)this_00);
              uVar11 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)this_00);
              uVar12 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)this_00);
              local_70 = std::
                         find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Plant>*,std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>>,Sexy::RtWeakPtr<Plant>>
                                   (uVar11,uVar12,pRVar7);
              bVar2 = __gnu_cxx::operator==
                                ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70);
              if (!bVar2) goto LAB_04d1fd5c;
            }
            this_01 = (RtObject *)Projectile::GetProps((Projectile *)this);
            Sexy::RtObject::Cast<ViperProjectileProp>(this_01);
            std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
                      (this_00,(RtWeakPtr *)pRVar7);
            if (this[0x1dc] == (ViperProjectile)0x0) {
              iVar14 = 2;
              if (*(int *)(this + 0x1d8) != 0) {
                iVar14 = *(int *)(this + 0x1d8) + 1;
              }
            }
            else {
              iVar14 = *(int *)(this + 0x1d8) + 1;
            }
            *(int *)(this + 0x1d8) = iVar14;
            HandleImpact(this,(BoardEntity *)param_1);
          }
LAB_04d1fd5c:
          eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                    ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_88);
        }
        std::vector<PlantTag,std::allocator<PlantTag>>::~vector
                  ((vector<PlantTag,std::allocator<PlantTag>> *)local_50);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)&local_90)
        ;
      } while (bVar2);
    }
    std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector(avStack_68);
  }
  cVar3 = std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::empty
                    ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                     (this + 0x1a8));
  if (cVar3 != '\0') {
    pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38);
    pPVar13 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
    std::string::string((string *)&local_70,"animation1");
    cVar3 = PopAnimRig::IsAnimStringActive(pPVar13,(string *)&local_70);
    if (cVar3 != '\0') {
      std::string::~string((string *)&local_70);
      nop();
      uVar11 = *(undefined8 *)(this + 0x1a8);
      uVar12 = *(undefined8 *)(this + 0x1b0);
      lVar8 = FUN_04d1999c(uVar11,uVar12);
      goto joined_r0x04d1ff58;
    }
    pPVar13 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
    std::string::string((string *)avStack_68,"animation4");
    cVar3 = PopAnimRig::IsAnimStringActive(pPVar13,(string *)avStack_68);
    bVar4 = 0;
    if (cVar3 == '\0') {
      pPVar13 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
      std::string::string((string *)local_50,"animation7");
      bVar4 = PopAnimRig::IsAnimStringActive(pPVar13,(string *)local_50);
      bVar4 = bVar4 ^ 1;
      std::string::~string((string *)local_50);
      nop();
    }
    std::string::~string((string *)avStack_68);
    nop();
    std::string::~string((string *)&local_70);
    nop();
    if (bVar4 == 0) goto LAB_04d1fe1c;
    fVar16 = (float)FUN_04d1990c(*(undefined4 *)(this + 0xc4));
    fVar17 = (float)Sexy::SexyMath::DegToRad(60.0);
    if (((fVar17 < fVar16) && (fVar17 = (float)Sexy::SexyMath::DegToRad(120.0), fVar16 < fVar17)) ||
       ((fVar17 = (float)Sexy::SexyMath::DegToRad(-60.0), fVar16 < fVar17 &&
        (fVar17 = (float)Sexy::SexyMath::DegToRad(-120.0), fVar17 < fVar16)))) {
      pPVar13 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
      pcVar15 = "animation7";
    }
    else {
      pPVar13 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
      pcVar15 = "animation1";
    }
    goto LAB_04d200c4;
  }
LAB_04d1fe1c:
  uVar11 = *(undefined8 *)(this + 0x1a8);
  uVar12 = *(undefined8 *)(this + 0x1b0);
  lVar8 = FUN_04d1999c(uVar11,uVar12);
joined_r0x04d1ff58:
  if (lVar8 - 1U < 2) {
    pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38);
    pPVar13 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
    std::string::string((string *)&local_70,"animation2");
    cVar3 = PopAnimRig::IsAnimStringActive(pPVar13,(string *)&local_70);
    if (cVar3 != '\0') {
      std::string::~string((string *)&local_70);
      nop();
LAB_04d1ffac:
      uVar11 = *(undefined8 *)(this + 0x1a8);
      uVar12 = *(undefined8 *)(this + 0x1b0);
      goto LAB_04d1fe3c;
    }
    pPVar13 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
    std::string::string((string *)avStack_68,"animation5");
    cVar3 = PopAnimRig::IsAnimStringActive(pPVar13,(string *)avStack_68);
    bVar4 = 0;
    if (cVar3 == '\0') {
      pPVar13 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
      std::string::string((string *)local_50,"animation8");
      bVar4 = PopAnimRig::IsAnimStringActive(pPVar13,(string *)local_50);
      bVar4 = bVar4 ^ 1;
      std::string::~string((string *)local_50);
      nop();
    }
    std::string::~string((string *)avStack_68);
    nop();
    std::string::~string((string *)&local_70);
    nop();
    if (bVar4 == 0) goto LAB_04d1ffac;
    fVar16 = (float)FUN_04d1990c(*(undefined4 *)(this + 0xc4));
    fVar17 = (float)Sexy::SexyMath::DegToRad(60.0);
    if (((fVar16 <= fVar17) || (fVar17 = (float)Sexy::SexyMath::DegToRad(120.0), fVar17 <= fVar16))
       && ((fVar17 = (float)Sexy::SexyMath::DegToRad(-60.0), fVar17 <= fVar16 ||
           (fVar17 = (float)Sexy::SexyMath::DegToRad(-120.0), fVar16 <= fVar17)))) {
      pPVar13 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
      std::string::string((string *)local_50,"animation1");
      cVar3 = PopAnimRig::IsAnimStringActive(pPVar13,(string *)local_50);
      std::string::~string((string *)local_50);
      nop();
      if (cVar3 != '\0') {
        pPVar13 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
        pcVar15 = "animation2";
        goto LAB_04d200c4;
      }
      pPVar13 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
      std::string::string((string *)local_50,"animation4");
      cVar3 = PopAnimRig::IsAnimStringActive(pPVar13,(string *)local_50);
      std::string::~string((string *)local_50);
      nop();
      if (cVar3 == '\0') goto LAB_04d1fe50;
      pPVar13 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
      pcVar15 = "animation5";
LAB_04d20460:
      std::string::string((string *)local_50,pcVar15);
      PopAnimRig::IsAnimStringActive(pPVar13,(string *)local_50);
      std::string::~string((string *)local_50);
      nop();
      goto LAB_04d1fe50;
    }
    pPVar13 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
    pcVar15 = "animation8";
  }
  else {
LAB_04d1fe3c:
    uVar10 = FUN_04d1999c(uVar11,uVar12);
    if (uVar10 < 3) goto LAB_04d1fe50;
    pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38);
    pPVar13 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
    std::string::string((string *)&local_70,"animation3");
    cVar3 = PopAnimRig::IsAnimStringActive(pPVar13,(string *)&local_70);
    if (cVar3 != '\0') {
      std::string::~string((string *)&local_70);
      nop();
      goto LAB_04d1fe50;
    }
    pPVar13 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
    std::string::string((string *)avStack_68,"animation6");
    cVar3 = PopAnimRig::IsAnimStringActive(pPVar13,(string *)avStack_68);
    bVar4 = 0;
    if (cVar3 == '\0') {
      pPVar13 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
      std::string::string((string *)local_50,"animation9");
      bVar4 = PopAnimRig::IsAnimStringActive(pPVar13,(string *)local_50);
      bVar4 = bVar4 ^ 1;
      std::string::~string((string *)local_50);
      nop();
    }
    std::string::~string((string *)avStack_68);
    nop();
    std::string::~string((string *)&local_70);
    nop();
    if (bVar4 == 0) goto LAB_04d1fe50;
    fVar16 = (float)FUN_04d1990c(*(undefined4 *)(this + 0xc4));
    fVar17 = (float)Sexy::SexyMath::DegToRad(60.0);
    if (((fVar17 < fVar16) && (fVar17 = (float)Sexy::SexyMath::DegToRad(120.0), fVar16 < fVar17)) ||
       ((fVar17 = (float)Sexy::SexyMath::DegToRad(-60.0), fVar16 < fVar17 &&
        (fVar17 = (float)Sexy::SexyMath::DegToRad(-120.0), fVar17 < fVar16)))) {
      pPVar13 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
      pcVar15 = "animation9";
    }
    else {
      pPVar13 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
      std::string::string((string *)local_50,"animation2");
      cVar3 = PopAnimRig::IsAnimStringActive(pPVar13,(string *)local_50);
      std::string::~string((string *)local_50);
      nop();
      if (cVar3 == '\0') {
        pPVar13 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
        std::string::string((string *)local_50,"animation5");
        cVar3 = PopAnimRig::IsAnimStringActive(pPVar13,(string *)local_50);
        std::string::~string((string *)local_50);
        nop();
        if (cVar3 == '\0') goto LAB_04d1fe50;
        pPVar13 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
        pcVar15 = "animation6";
        goto LAB_04d20460;
      }
      pPVar13 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
      pcVar15 = "animation3";
    }
  }
LAB_04d200c4:
  std::string::string((string *)local_50,pcVar15);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar13,(string *)local_50,0,aDStack_38);
  std::string::~string((string *)local_50);
  nop();
LAB_04d1fe50:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ViperProjectile::damageEntity(BoardEntity*) */

void __thiscall ViperProjectile::damageEntity(ViperProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  Zombie *pZVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  PlantGroup *pPVar6;
  RtObject *this_01;
  ViperProjectileProp *pVVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  Zombie *local_80;
  undefined8 local_78;
  Zombie *local_70;
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  Zombie *local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x48] != (ViperProjectile)0x0) {
    DamageInfo::DamageInfo(aDStack_68);
    if (param_1 != (BoardEntity *)0x0) {
      bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
      if (bVar2) {
        local_80 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
        cVar3 = RealObject::IsOnTeam(local_80,1);
        if (cVar3 == '\0') {
          this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(this + 0x1c0);
          this_01 = (RtObject *)Projectile::GetProps((Projectile *)this);
          pVVar7 = Sexy::RtObject::Cast<ViperProjectileProp>(this_01);
          this[0x1dc] = (ViperProjectile)0x1;
          uVar8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(this_00);
          uVar9 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
          local_78 = std::
                     find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,Zombie*>
                               (uVar8,uVar9,&local_80);
          local_70 = (Zombie *)
                     std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(this_00);
          bVar2 = __gnu_cxx::operator==
                            ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70);
          if (bVar2) {
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)this_00);
            if (0 < *(int *)(this + 0x1d8)) {
                    /* WARNING: Load size is inaccurate */
              Zombie::ApplyCondition(*(Zombie **)(pVVar7 + 0x1e8),0,local_80,0x31,1);
              pZVar1 = local_80;
              fVar10 = (float)FUN_04d1991c(*(undefined4 *)(this + 0x170),
                                           *(undefined4 *)(this + 0x17c),
                                           *(undefined4 *)(this + 0x180),
                                           *(undefined4 *)(this + 0x184));
              Zombie::SetConditionTracker(fVar10 * *(float *)(pVVar7 + 0x1ec),pZVar1,0x31);
              *(int *)(this + 0x1d8) = *(int *)(this + 0x1d8) + -1;
            }
            local_70 = local_80;
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)this_00,
                       (BoardEntity **)&local_70);
            local_60 = FUN_04d19910(*(undefined4 *)(this + 0xd8));
            HandleImpact(this,(BoardEntity *)local_80);
          }
        }
      }
      bVar2 = Sexy::RtObject::IsA<PlantGroup>((RtObject *)param_1);
      if ((bVar2) &&
         (pPVar6 = Sexy::RtObject::Cast<PlantGroup>((RtObject *)param_1),
         pPVar6 != (PlantGroup *)0x0)) {
        onPosionPlant(this,pPVar6);
      }
    }
    iVar4 = BoardEntity::CalcColumnPosition(param_1);
    iVar5 = FUN_04d19908(*(undefined4 *)(this + 0xa8));
    Sexy::Point::Point((Point *)&local_70,iVar4,iVar5);
    local_50 = local_70;
    (**(code **)(*(long *)param_1 + 0x110))(param_1,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

