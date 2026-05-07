// Class: PVPSkillCursor


/* PVPSkillCursor::StaticGetClass() */

long * PVPSkillCursor::StaticGetClass(void)

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
  uVar2 = ZombieCursor::StaticGetClass();
  (*pcVar3)(plVar1,"PVPSkillCursor",uVar2,StaticNew);
  return sClass;
}


/* PVPSkillCursor::GetClass() const */

long * PVPSkillCursor::GetClass(void)

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
  uVar2 = ZombieCursor::StaticGetClass();
  (*pcVar3)(plVar1,"PVPSkillCursor",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillCursor::PVPSkillCursor(Sexy::Touch const&, Sexy::RtWeakPtr<SeedPacket>) */

void __thiscall
PVPSkillCursor::PVPSkillCursor(PVPSkillCursor *this,undefined8 param_1,RtWeakPtrBase *param_3)

{
  bool bVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  ZombieCursor::ZombieCursor((ZombieCursor *)this,param_1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined4 *)(this + 0x60) = 0xbf800000;
  *(undefined ***)this = &PTR_GetClass_0694c2e0;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPSkillCursor::~PVPSkillCursor() */

void __thiscall PVPSkillCursor::~PVPSkillCursor(PVPSkillCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_0694c2e0;
  ZombieCursor::~ZombieCursor((ZombieCursor *)this);
  return;
}


/* PVPSkillCursor::~PVPSkillCursor() */

void __thiscall PVPSkillCursor::~PVPSkillCursor(PVPSkillCursor *this)

{
  ~PVPSkillCursor(this);
  AK::FreeHook(this);
  return;
}


/* PVPSkillCursor::PVPSkillCursor() */

void __thiscall PVPSkillCursor::PVPSkillCursor(PVPSkillCursor *this)

{
  ZombieCursor::ZombieCursor((ZombieCursor *)this);
  *(undefined4 *)(this + 0x60) = 0xbf800000;
  *(undefined ***)this = &PTR_GetClass_0694c2e0;
  return;
}


/* PVPSkillCursor::StaticNew() */

PVPSkillCursor * PVPSkillCursor::StaticNew(void)

{
  PVPSkillCursor *this;
  
  this = ::operator_new(0x68);
  PVPSkillCursor(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillCursor::onUpdate() */

void __thiscall PVPSkillCursor::onUpdate(PVPSkillCursor *this)

{
  Zombie *pZVar6;
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  Zombie *this_00;
  long extraout_x0;
  float fVar5;
  int local_38;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(float *)(this + 0x60) < 0.0) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
    Effect_PopAnim::GetPopAnimRigPtr();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
    nop();
    *(undefined4 *)(this + 0x60) = *(undefined4 *)(extraout_x0 + 0x214);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
  }
  BaseCursor::GetBoardPosition();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,(float)local_38,(float)local_34);
  fVar5 = *(float *)(this + 0x60);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  EntityFinder::GetEntitiesTouchingCircle2D
            ((float)iVar3 * fVar5,avStack_20,2,(FastCurve *)&local_28,0xffffffff,0xffffffff);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  pZVar6._0_4_ = _FUN_04ae43d0;
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
    if ((((this_00 != (Zombie *)0x0) &&
         (cVar2 = RealObject::IsOnOpposingTeam(this_00,1), cVar2 != '\0')) &&
        (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0')) &&
       ((cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0' &&
        (cVar2 = Zombie::IsControlled(this_00), cVar2 == '\0')))) {
      Zombie::ApplyCondition(pZVar6._0_4_,0,this_00,0x3e,1);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

