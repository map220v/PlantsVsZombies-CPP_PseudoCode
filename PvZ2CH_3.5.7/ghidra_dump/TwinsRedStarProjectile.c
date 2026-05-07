// Class: TwinsRedStarProjectile


/* TwinsRedStarProjectile::damageEntity(BoardEntity*) */

void TwinsRedStarProjectile::damageEntity(BoardEntity *param_1)

{
  (**(code **)(*(long *)param_1 + 0x118))();
  return;
}


/* TwinsRedStarProjectile::onUpdate(float) */

void TwinsRedStarProjectile::onUpdate(float param_1)

{
  Projectile *in_x0;
  float *pfVar1;
  
  pfVar1 = (float *)Projectile::GetVelocity(in_x0);
  if ((((*pfVar1 < 10.0) && (-10.0 < *pfVar1)) && (pfVar1[1] < 10.0)) && (-10.0 < pfVar1[1])) {
    (**(code **)(*(long *)in_x0 + 0x118))();
  }
  return;
}


/* TwinsRedStarProjectile::~TwinsRedStarProjectile() */

void __thiscall TwinsRedStarProjectile::~TwinsRedStarProjectile(TwinsRedStarProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069af780;
  *(undefined ***)(this + 0x10) = &PTR__TwinsRedStarProjectile_069af970;
  PamegranateProjectile::~PamegranateProjectile((PamegranateProjectile *)this);
  return;
}


/* non-virtual thunk to TwinsRedStarProjectile::~TwinsRedStarProjectile() */

void __thiscall TwinsRedStarProjectile::~TwinsRedStarProjectile(TwinsRedStarProjectile *this)

{
  ~TwinsRedStarProjectile(this + -0x10);
  return;
}


/* TwinsRedStarProjectile::~TwinsRedStarProjectile() */

void __thiscall TwinsRedStarProjectile::~TwinsRedStarProjectile(TwinsRedStarProjectile *this)

{
  ~TwinsRedStarProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TwinsRedStarProjectile::~TwinsRedStarProjectile() */

void __thiscall TwinsRedStarProjectile::~TwinsRedStarProjectile(TwinsRedStarProjectile *this)

{
  ~TwinsRedStarProjectile(this + -0x10);
  return;
}


/* TwinsRedStarProjectile::TwinsRedStarProjectile() */

void __thiscall TwinsRedStarProjectile::TwinsRedStarProjectile(TwinsRedStarProjectile *this)

{
  PamegranateProjectile::PamegranateProjectile((PamegranateProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_069af780;
  *(undefined ***)(this + 0x10) = &PTR__TwinsRedStarProjectile_069af970;
  return;
}


/* TwinsRedStarProjectile::StaticNew() */

TwinsRedStarProjectile * TwinsRedStarProjectile::StaticNew(void)

{
  TwinsRedStarProjectile *this;
  
  this = ::operator_new(0x1b0);
  TwinsRedStarProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwinsRedStarProjectile::StaticClassInit() */

void TwinsRedStarProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"TwinsRedStarProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04d40880,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TwinsRedStarProjectile::StaticGetClass() */

long * TwinsRedStarProjectile::StaticGetClass(void)

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
  uVar2 = PamegranateProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"TwinsRedStarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TwinsRedStarProjectile::GetClass() const */

long * TwinsRedStarProjectile::GetClass(void)

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
  uVar2 = PamegranateProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"TwinsRedStarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwinsRedStarProjectile::OnCollideGround() */

void __thiscall TwinsRedStarProjectile::OnCollideGround(TwinsRedStarProjectile *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  float fVar7;
  float fVar8;
  undefined8 local_b0;
  undefined8 local_a8;
  Vec3 aVStack_a0 [16];
  Insets aIStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar8 = *pfVar5;
  fVar7 = pfVar5[1];
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Insets::Insets(aIStack_90,(int)fVar8 - iVar2 / 2,(int)fVar7 - iVar3 / 2,iVar2,iVar3);
  EntityFinder::GetEntitiesInRectangle(avStack_80,2,aIStack_90);
  DamageInfo::DamageInfo(aDStack_68);
  (**(code **)(*(long *)this + 0x178))(this,aDStack_68,0);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8), bVar1) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
    if (this_00 != (Zombie *)0x0) {
      EATextSquish::Vec3::Vec3(aVStack_a0,0.0,0.0,0.0);
      Zombie::AddAttachedEffect
                (this_00,"twins_sun","POPANIM_EFFECTS_TWINSHONEYSUCKLE_EFFECT","tysj_lv502",
                 (SexyVector3 *)aVStack_a0,1,true);
      (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
  }
  uVar4 = Projectile::OnCollideGround((Projectile *)this);
  DamageInfo::~DamageInfo(aDStack_68);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

