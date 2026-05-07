// Class: ThunderSnapdragonFlyDragon


/* ThunderSnapdragonFlyDragon::~ThunderSnapdragonFlyDragon() */

void __thiscall
ThunderSnapdragonFlyDragon::~ThunderSnapdragonFlyDragon(ThunderSnapdragonFlyDragon *this)

{
  *(undefined ***)this = &PTR_GetClass_06828d20;
  *(undefined ***)(this + 0x10) = &PTR__ThunderSnapdragonFlyDragon_06828f28;
  FlyingObject::~FlyingObject((FlyingObject *)this);
  return;
}


/* non-virtual thunk to ThunderSnapdragonFlyDragon::~ThunderSnapdragonFlyDragon() */

void __thiscall
ThunderSnapdragonFlyDragon::~ThunderSnapdragonFlyDragon(ThunderSnapdragonFlyDragon *this)

{
  ~ThunderSnapdragonFlyDragon(this + -0x10);
  return;
}


/* ThunderSnapdragonFlyDragon::~ThunderSnapdragonFlyDragon() */

void __thiscall
ThunderSnapdragonFlyDragon::~ThunderSnapdragonFlyDragon(ThunderSnapdragonFlyDragon *this)

{
  ~ThunderSnapdragonFlyDragon(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ThunderSnapdragonFlyDragon::~ThunderSnapdragonFlyDragon() */

void __thiscall
ThunderSnapdragonFlyDragon::~ThunderSnapdragonFlyDragon(ThunderSnapdragonFlyDragon *this)

{
  ~ThunderSnapdragonFlyDragon(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderSnapdragonFlyDragon::StaticClassInit() */

void ThunderSnapdragonFlyDragon::StaticClassInit(void)

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
    std::string::string(asStack_10,"ThunderSnapdragonFlyDragon");
    (*pcVar2)(plVar1,asStack_10,FUN_0429a770,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ThunderSnapdragonFlyDragon::StaticGetClass() */

long * ThunderSnapdragonFlyDragon::StaticGetClass(void)

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
  uVar2 = FlyingObject::StaticGetClass();
  (*pcVar3)(plVar1,"ThunderSnapdragonFlyDragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ThunderSnapdragonFlyDragon::GetClass() const */

long * ThunderSnapdragonFlyDragon::GetClass(void)

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
  uVar2 = FlyingObject::StaticGetClass();
  (*pcVar3)(plVar1,"ThunderSnapdragonFlyDragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ThunderSnapdragonFlyDragon::ThunderSnapdragonFlyDragon() */

void __thiscall
ThunderSnapdragonFlyDragon::ThunderSnapdragonFlyDragon(ThunderSnapdragonFlyDragon *this)

{
  FlyingObject::FlyingObject((FlyingObject *)this);
  *(undefined4 *)(this + 0xc4) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_06828d20;
  *(undefined ***)(this + 0x10) = &PTR__ThunderSnapdragonFlyDragon_06828f28;
  *(undefined4 *)(this + 200) = 0;
  return;
}


/* ThunderSnapdragonFlyDragon::StaticNew() */

ThunderSnapdragonFlyDragon * ThunderSnapdragonFlyDragon::StaticNew(void)

{
  ThunderSnapdragonFlyDragon *this;
  
  this = ::operator_new(0xd0);
  ThunderSnapdragonFlyDragon(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderSnapdragonFlyDragon::DoAttack(Sexy::Point) */

void __thiscall
ThunderSnapdragonFlyDragon::DoAttack(ThunderSnapdragonFlyDragon *this,Point *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  GridItemLilyPad *pGVar6;
  undefined8 *puVar7;
  Zombie *this_00;
  GridItem *pGVar8;
  long extraout_x0;
  RtObject *this_01;
  string asStack_c0 [8];
  string asStack_b8 [8];
  int local_b0;
  int local_ac;
  RtWeakPtr aRStack_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  string asStack_68 [8];
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_c0,"POPANIM_EFFECTS_THUNDERSNAPDRAGON_THUNDER_RE");
  nop();
  std::string::string(asStack_b8,"animation02");
  nop();
  BoardTransforms::GridToBoardSpace(param_2);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_90,(float)local_b0,(float)(local_ac + -0x5a),0.0);
  uVar3 = SharkMinion::getRow((SharkMinion *)this);
  uVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  uVar3 = Board::MakeRenderOrder(0x64960,uVar3,uVar4);
  FUN_05475d88(asStack_68,asStack_c0);
  PopAnimEffectFactory::CreateEffect(aRStack_a8,local_90,local_8c,local_88,asStack_68,uVar3,0,1);
  std::string::~string(asStack_68);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_a8);
  if ((bVar1) &&
     (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_a8), cVar2 != '\0')) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
    nop();
    if (extraout_x0 != 0) {
      Effect_PopAnim::PlaySingleAnimation();
    }
  }
  else {
    uVar5 = FUN_0547429c(asStack_c0);
    Sexy::OutputDebugStrF
              ((wchar_t *)"ThunderSnapdragonFlyDragon::DoAttack create effect failed : %s",uVar5);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  uVar3 = operator|(2,4);
  EntityFinder::GetEntitiesAtGridSquare
            (avStack_80,uVar3,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1) {
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    this_01 = (RtObject *)*puVar7;
    this_00 = Sexy::RtObject::Cast<Zombie>(this_01);
    pGVar8 = Sexy::RtObject::Cast<GridItem>(this_01);
    DamageInfo::DamageInfo((DamageInfo *)asStack_68);
    local_58 = 0x80;
    local_60 = *(undefined4 *)(this + 0xc0);
    if (pGVar8 == (GridItem *)0x0) {
      if ((((this_00 != (Zombie *)0x0) && (cVar2 = Zombie::IsOnGround(this_00), cVar2 != '\0')) &&
          (cVar2 = Zombie::IsControlled(this_00), cVar2 == '\0')) &&
         (cVar2 = Zombie::HasCondition(this_00,0x65), cVar2 == '\0')) {
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(this + 0xc4),0,this_00,0x18,1);
        local_14 = 0x41200000;
        (**(code **)(*(long *)this_00 + 0x110))(this_00,asStack_68);
      }
    }
    else {
      pGVar6 = Sexy::RtObject::Cast<GridItemLilyPad>(this_01);
      if (pGVar6 == (GridItemLilyPad *)0x0) {
        (**(code **)(*(long *)pGVar8 + 0x110))(pGVar8,asStack_68);
      }
    }
    DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
  std::string::~string(asStack_b8);
  std::string::~string(asStack_c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderSnapdragonFlyDragon::onUpdate() */

void __thiscall ThunderSnapdragonFlyDragon::onUpdate(ThunderSnapdragonFlyDragon *this)

{
  char cVar1;
  float *pfVar2;
  UIWidget *this_00;
  PopAnimRig *this_01;
  int local_18;
  undefined4 uStack_14;
  Point aPStack_10 [8];
  BoardTransforms *local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::BoardSpaceToGrid
            (___stack_chk_guard,*(float *)(this + 0x18),*(float *)(this + 0x1c));
  if ((-1 < local_18) &&
     (cVar1 = Sexy::TPoint<int>::operator!=((TPoint<int> *)(this + 0xa4),(TPoint *)&local_18),
     cVar1 != '\0')) {
    *(ulong *)(this + 0xa4) = CONCAT44(uStack_14,local_18);
    Sexy::Point::Point(aPStack_10,(TPoint *)&local_18);
    DoAttack(this,aPStack_10);
  }
  if ((*(float *)(this + 200) != 0.0) && (850.0 < *(float *)(this + 0x18))) {
    *(undefined4 *)(this + 200) = 0;
    *(float *)(this + 0xac) = -*(float *)(this + 0xac);
    this_00 = (UIWidget *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    this_01 = (PopAnimRig *)UIWidget::GetAtlasImage(this_00);
    PopAnimRig::SetMirrorX(this_01,true);
  }
  FlyingObject::onUpdate((FlyingObject *)this);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  if (*pfVar2 < -100.0) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

