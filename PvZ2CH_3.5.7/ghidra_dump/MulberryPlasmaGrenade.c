// Class: MulberryPlasmaGrenade


/* MulberryPlasmaGrenade::~MulberryPlasmaGrenade() */

void __thiscall MulberryPlasmaGrenade::~MulberryPlasmaGrenade(MulberryPlasmaGrenade *this)

{
  *(undefined ***)this = &PTR_GetClass_067466a0;
  *(undefined ***)(this + 0x10) = &PTR__MulberryPlasmaGrenade_06746890;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to MulberryPlasmaGrenade::~MulberryPlasmaGrenade() */

void __thiscall MulberryPlasmaGrenade::~MulberryPlasmaGrenade(MulberryPlasmaGrenade *this)

{
  ~MulberryPlasmaGrenade(this + -0x10);
  return;
}


/* MulberryPlasmaGrenade::~MulberryPlasmaGrenade() */

void __thiscall MulberryPlasmaGrenade::~MulberryPlasmaGrenade(MulberryPlasmaGrenade *this)

{
  ~MulberryPlasmaGrenade(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MulberryPlasmaGrenade::~MulberryPlasmaGrenade() */

void __thiscall MulberryPlasmaGrenade::~MulberryPlasmaGrenade(MulberryPlasmaGrenade *this)

{
  ~MulberryPlasmaGrenade(this + -0x10);
  return;
}


/* MulberryPlasmaGrenade::MulberryPlasmaGrenade() */

void __thiscall MulberryPlasmaGrenade::MulberryPlasmaGrenade(MulberryPlasmaGrenade *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067466a0;
  *(undefined ***)(this + 0x10) = &PTR__MulberryPlasmaGrenade_06746890;
  return;
}


/* MulberryPlasmaGrenade::StaticNew() */

MulberryPlasmaGrenade * MulberryPlasmaGrenade::StaticNew(void)

{
  MulberryPlasmaGrenade *this;
  
  this = ::operator_new(0x1a8);
  MulberryPlasmaGrenade(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MulberryPlasmaGrenade::StaticClassInit() */

void MulberryPlasmaGrenade::StaticClassInit(void)

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
    std::string::string(asStack_10,"MulberryPlasmaGrenade");
    (*pcVar2)(plVar1,asStack_10,FUN_03c0c678,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MulberryPlasmaGrenade::StaticGetClass() */

long * MulberryPlasmaGrenade::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MulberryPlasmaGrenade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MulberryPlasmaGrenade::GetClass() const */

long * MulberryPlasmaGrenade::GetClass(void)

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
  (*pcVar3)(plVar1,"MulberryPlasmaGrenade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MulberryPlasmaGrenade::playHitEffect(BoardEntity*, bool) */

void __thiscall
MulberryPlasmaGrenade::playHitEffect(MulberryPlasmaGrenade *this,BoardEntity *param_1,bool param_2)

{
  int iVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  undefined8 *puVar3;
  string asStack_20 [8];
  float local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  if (param_2) {
    std::string::string(asStack_20,"POPANIM_EFFECTS_MULBERRY_PLASMA_SHOCK");
    GetPAMByName(asStack_20);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    std::string::~string(asStack_20);
    nop();
    std::string::string((string *)&local_18,"animation3");
  }
  else {
    std::string::string(asStack_20,"POPANIM_EFFECTS_CITRON_PLANTFOOD_ORB_HIT");
    GetPAMByName(asStack_20);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    std::string::~string(asStack_20);
    nop();
    std::string::string((string *)&local_18,"animation");
  }
  Effect_PopAnim::PlaySingleAnimation(this_00,(string *)&local_18,0);
  std::string::~string((string *)&local_18);
  nop();
  iVar1 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
  FUN_03c0b998(this_00 + 0x1c,iVar1 + 1);
  StandaloneEffect::SetIsScreenSpaceEffect((StandaloneEffect *)this_00,false);
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_10 = *(undefined4 *)(puVar3 + 1);
  local_18 = (float)*puVar3;
  fStack_14 = (float)((ulong)*puVar3 >> 0x20);
  _local_18 = CONCAT44(fStack_14 - 135.0,local_18 - 85.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,-1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MulberryPlasmaGrenade::hitNormalZombie(Zombie*) */

void __thiscall MulberryPlasmaGrenade::hitNormalZombie(MulberryPlasmaGrenade *this,Zombie *param_1)

{
  char cVar1;
  long extraout_x0;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float local_40;
  float local_3c;
  FastCurve aFStack_38 [4];
  float local_34;
  FastCurve aFStack_30 [8];
  float local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18 [2];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps((Projectile *)this);
  nop();
  fVar3 = (float)RandRangeFloat(*(float *)(extraout_x0 + 0x1e0),*(float *)(extraout_x0 + 0x1e4));
  fVar3 = (float)Sexy::SexyMath::DegToRad(fVar3);
  fVar6 = *(float *)(extraout_x0 + 0x1e8);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  fVar7 = *(float *)(extraout_x0 + 0x1ec);
  Sexy::FastCurve::SetOutRange(aFStack_38,*pfVar2,pfVar2[2]);
  fVar4 = cosf(fVar3);
  fVar3 = sinf(fVar3);
  Sexy::FastCurve::SetOutRange(aFStack_30,fVar4,fVar3);
  Sexy::FastCurve::SetOutRange((FastCurve *)local_28,850.0,0.0);
  EATextSquish::Vec3::Vec3((Vec3 *)local_18,local_28[0],pfVar2[1],local_34);
  uVar5 = 0x3f800000;
  local_40 = 0.0;
  local_3c = 0.0;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,0.0,1.0);
  cVar1 = LineLineIntersect((SexyVector2 *)aFStack_38,(SexyVector2 *)aFStack_30,
                            (SexyVector2 *)local_28,(SexyVector2 *)&local_20,&local_40,&local_3c,
                            0.0001);
  if (cVar1 != '\0') {
    local_20 = Sexy::SexyVector2::operator*((SexyVector2 *)aFStack_30,local_40);
    local_1c = uVar5;
    local_18[0] = Sexy::SexyVector2::operator+((SexyVector2 *)aFStack_38,(SexyVector2 *)&local_20);
    local_10 = uVar5;
  }
  Zombie::FlickOff((SexyVector3 *)param_1,fVar6,fVar7);
  playHitEffect(this,(BoardEntity *)param_1,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MulberryPlasmaGrenade::OnCollideEntity(BoardEntity*) */

void __thiscall
MulberryPlasmaGrenade::OnCollideEntity(MulberryPlasmaGrenade *this,BoardEntity *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Zombie *pZVar6;
  long extraout_x0;
  undefined8 *puVar7;
  float fVar8;
  undefined8 local_98;
  undefined8 local_90;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_88 [24];
  TitleStatus aTStack_70 [24];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = BoardEntity::CalcColumnPosition(param_1);
  uVar5 = SharkMinion::getRow((SharkMinion *)param_1);
  pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
  if (pZVar6 == (Zombie *)0x0) {
    (**(code **)(*(long *)this + 0x1b0))(this,param_1);
    playHitEffect(this,param_1,true);
  }
  Projectile::GetProps((Projectile *)this);
  nop();
  if (extraout_x0 == 0) {
    bVar1 = false;
  }
  else {
    fVar8 = (float)Sexy::Rand(1.0);
    bVar1 = fVar8 < *(float *)(extraout_x0 + 0x1f0);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_88);
  EntityFinder::GetEntitiesAtGridSquare(avStack_88,2,uVar4,uVar5);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_88);
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_88);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)&local_90);
    if (!bVar2) {
      (**(code **)(*(long *)this + 0x48))(this);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_88);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(1);
    }
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
    pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
    if ((pZVar6 != (Zombie *)0x0) &&
       (cVar3 = (**(code **)(*(long *)pZVar6 + 0x328))(), cVar3 == '\0')) {
      bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)pZVar6);
      if (((!bVar2) &&
          (((bVar2 = Sexy::RtObject::IsA<ZombieMech>((RtObject *)pZVar6), !bVar2 &&
            (bVar2 = Sexy::RtObject::IsA<ZombieGargantuar>((RtObject *)pZVar6), !bVar2)) &&
           (bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)pZVar6), !bVar2)))) &&
         ((((bVar2 = Sexy::RtObject::IsA<ZombieAgileBronze>((RtObject *)pZVar6), !bVar2 &&
            (bVar2 = Sexy::RtObject::IsA<ZombieStrongBronze>((RtObject *)pZVar6), !bVar2)) &&
           (bVar2 = Sexy::RtObject::IsA<ZombieMagicBronze>((RtObject *)pZVar6), !bVar2)) &&
          (((bVar2 = Sexy::RtObject::IsA<ZombieLionDance>((RtObject *)pZVar6), !bVar2 &&
            (bVar2 = Sexy::RtObject::IsA<ZombieWealthGod>((RtObject *)pZVar6), !bVar2)) &&
           (((bVar2 = Sexy::RtObject::IsA<ZombieSkyCityTwinsPlane>((RtObject *)pZVar6), !bVar2 &&
             (((bVar2 = Sexy::RtObject::IsA<ZombieInvisiblePlane>((RtObject *)pZVar6), !bVar2 &&
               (bVar2 = Sexy::RtObject::IsA<ZombiePirateCannon>((RtObject *)pZVar6), !bVar2)) &&
              (cVar3 = (**(code **)(*(long *)pZVar6 + 0x4d8))(pZVar6), cVar3 == '\0')))) &&
            (cVar3 = (**(code **)(*(long *)pZVar6 + 0x508))(pZVar6), cVar3 == '\0')))))))) {
        Zombie::GetCurrentTitleStatus();
        cVar3 = local_58;
        TitleStatus::~TitleStatus(aTStack_70);
        if (cVar3 == '\0') {
          if (bVar1) {
            hitNormalZombie(this,pZVar6);
          }
          else {
            (**(code **)(*(long *)this + 0x1b0))(this,pZVar6);
            playHitEffect(this,(BoardEntity *)pZVar6,true);
          }
          goto LAB_03c0efd4;
        }
      }
      (**(code **)(*(long *)this + 0x1b0))(this,pZVar6);
    }
LAB_03c0efd4:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
  } while( true );
}

